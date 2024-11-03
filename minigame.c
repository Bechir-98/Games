#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int random() {
    

    int randomNumber = (rand() % 3) + 1;

    return randomNumber;

}
void draw (int C ){
	
	if (C==1){
    printf("    _______\n");
    printf("---'   ____)\n");
    printf("      (_____)\n");
    printf("      (_____)\n");
    printf("      (____)\n");
    printf("---.__(___)\n\n");
	}
	else if(C==2){
    printf("    _______\n");
    printf("---'   ____)____\n");
    printf("          ______)\n");
    printf("       __________)\n");
    printf("      (____)\n");
    printf("---.__(___)\n");
		
	}
	else if (C==3){
    printf("     _______\n");
    printf("---'    ____)____\n");
    printf("           ______)\n");
    printf("          _______)\n");
    printf("         _______)\n");
    printf("---.__________)\n\n");
		
	}
}
int game(int* i,int* ai, int* p)
{
	int A,B;
	
	printf("Let's Go \n");
	
	while (*i<3 && *ai<3 && *p<3)
	{
	printf("\n make your choise in \n");
	Sleep(800);
	printf("3\n");
	Sleep(800);
	printf("2\n");
	Sleep(800);
	printf("1\n");
	scanf("%d",&B);
	A=random();
	if ((A == 1 && B == 2) || (A == 2 && B == 3) || (A == 3 && B == 1)) {
		(*ai)++;
		(*i)++  ;
		printf("Me:\n");
		draw (A);
		printf("\n");
		printf("You:\n");
		printf("                                                  This round is mine \n");
		draw (B);
		}
		 else if ((B == 1 && A == 2) || (B == 2 && A == 3) || (B == 3 && A == 1))
		  {
            (*p)++;
			(*i)++;
		printf ("Me  :    \n    ");
		draw (A);
		printf("\n");
		printf("*You :     \n        ");
		printf("                                                  You got me\n");
		draw (B);
			}
			else 
			{
			
			printf ("Me  :    \n   ");
			draw (A);
			printf("								 Lucky! Go again\n");
			printf("You :     \n        ");
			draw (B);
			}
			
	}
		if (*p>*ai)
			printf("You Won,I think I'm useless now :(\n");
		else if (*p<*ai)
			printf("I won ,No one can beat me .\n");
		else {
		
			printf("Draw =) \n");
			
	}	
}
int main()
	{
		int i=0, ai=0, p=0,R=0 ;
		
		srand(time(0));
	
		printf("this is a rock/scissor/paper game \n You got 3 chances againt me :) \n Let's start ");
		printf("\n the rules are simple donn't try to cheat I'm smart");
		printf( "\n you got three emotes \n ");
		printf("\n");
   
    printf("Rock is 1\n");
 	draw(1);
 	printf("\n");
 
    printf("Scissors is 2\n");
    draw(2);
 	printf("\n");
 	
 	printf("Paper is 3 \n");
    draw(3);
 	printf("\n");
 	
 	printf("\n the rules are simple don't try to cheat :) , \n ");
	
    game(&i,&ai,&p);
    
       do {
        game(&i, &ai, &p);
		printf("Wanna remach ? (1/0)\n");
        scanf("%d", &R);
        if (R == 1) {
            i = 0;
            ai = 0;
            p = 0;
        }
    } while (R == 1);
    return 0;
    
	}

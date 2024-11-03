#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int random() {
    srand(time(0));

    int randomNumber = (rand() % 3) + 1;

    return randomNumber;

}
char* draw (int C ){
	
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
int main()
	{
		int i=0, ai=0, p=0 ,A,B,C;
		//char *dd = draw(C);
		
		printf("this is a rock/scissor/paper game \n You got 3 chances againt me :) \n Let's start ");
		printf("\n the rules are simple donn't try to cheat I'm smart");
		printf( "\n you got three emotes \n ");
		printf("\n");
    // Rock
    printf("Rock is 1\n");
    printf("    _______\n");
    printf("---'   ____)\n");
    printf("      (_____)\n");
    printf("      (_____)\n");
    printf("      (____)\n");
    printf("---.__(___)\n\n");

    // Paper
    printf("Paper is 3 \n");
    printf("     _______\n");
    printf("---'    ____)____\n");
    printf("           ______)\n");
    printf("          _______)\n");
    printf("         _______)\n");
    printf("---.__________)\n\n");

    // Scissors
    printf("Scissors is 2\n");
    printf("    _______\n");
    printf("---'   ____)____\n");
    printf("          ______)\n");
    printf("       __________)\n");
    printf("      (____)\n");
    printf("---.__(___)\n");
    
	printf("\n the rules are simple donn't try to cheat :) , \n Let's Go \n");
	
	while (i<=3 && ai<3 && p<3)
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
		ai++;
		i++;
		printf(" Me:\n");
		printf ("%c",draw (A));
		printf("\n");
		printf(" You:\n");
		printf("                                                         This round is mine \n");
		printf("%c",draw (B));
		}
		 else if ((B == 1 && A == 2) || (B == 2 && A == 3) || (B == 3 && A == 1))
		  {
            p++;
			i++;
		printf(" Me:\n");
		printf ("%c",draw (A));
		printf("\n");
		printf(" You:\n");
		printf("                                                   You got me\n");
		printf("%c",draw (B));
			}
			else 
			{
			
			printf ("%c    Me  :            ",draw (A));
			printf("								 Lucky! Go again\n");
			printf("%c     You :            ",draw (B));
			}
			
	}
		if (p>ai)
			printf("You Won,I think I'm useless now :(\n");
		else if (p<ai)
			printf("I won ,No one can beat me .\n");
		else 
			printf("Draw ,wanna rematch (Y'\'N) ?");
		
		
    return 0;


	
		
		
	}

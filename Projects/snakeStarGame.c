
#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<conio.h>
#include<stdlib.h>
 int i,j,k,score=0,count=0,flag,foodX,foodY,rows=16,cols=30;
 int snakeX[10000],snakeY[10000],*sX=&snakeX[0],*sY=&snakeY[0];
 char ch;
void createBox();
void createFood();
void createSnake();
void control(char);
void reset(char);
int checkCoordinate();
void push();
int main()
{
	createFood();
    createSnake();
    createBox();
    control('l');
    return 0;
}
void createBox()
{
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=cols;j++)
        {
            if(i==foodX && j==foodY)
                printf("*");
            else if(i==*sX && j==*sY)
            	printf("@");	
        	else if(i==1 && j==1)
                printf("+");
            else if(i==1 && j==cols)
                printf("+\n");
            else if(i==rows && j==cols)
                printf("+");
            else if(i==rows && j==1)
                printf("+");
            else if(i==1)
                printf("-");
            else if(j==cols)
                printf("|\n");
            else if(i==rows)
                printf("-");
            else if(j==1)
                printf("|");
            else
            {
            	int flag=0;
            	for(k=0;k<score;k++)
				{
					if(i==snakeX[count-k] && j==snakeY[count-k])
					{
						printf("o");
						flag=1;
					}
				}
				if(flag==0)
				printf(" ");
			}
                
        }
    }
    printf("\n\t  Score=%d",score);
    count++;
}
void createFood()
{
    srand(time(NULL));
    foodX=((rand()%(rows-2))+2);
    foodY=((rand()%(cols-2))+2);
}
void createSnake()
{
    srand(time(NULL)+5);
	*sX=((rand()%(rows-2))+2);
    *sY=((rand()%(cols-2))+2);
}
void control(char ch)
{
    switch(ch)
    {
    	case 'j':
    		reset(ch);
    	break;
    	case 'k':
    		reset(ch);
    	break;
    	case 'i':
    		reset(ch);
    	break;
    	case 'l':
    		reset(ch);
    	break;
    	case 'q':
    		exit(0);
    	break;
	}
}
void reset(char ch)
{
	while(ch=='j')
	{
        if(!kbhit())
        {
            system("cls");
            snakeX[count]=snakeX[0];
			snakeY[count]=snakeY[0];
            (*sY)--;
            flag=checkCoordinate();
            if(flag==1)
                createFood();
            createBox();
            usleep(100000);
        }
		else
        control(getch());
	}
	while(ch=='i')
	{
        if(!kbhit())
        {
            system("cls");
            snakeX[count]=snakeX[0];
			snakeY[count]=snakeY[0];
            (*sX)--;
            flag=checkCoordinate();
            if(flag==1)
                createFood();
            createBox();
            usleep(100000);
        }
		else
        control(getch());
	}
    while(ch=='k')
	{
        if(!kbhit())
        {
            system("cls");
            snakeX[count]=snakeX[0];
			snakeY[count]=snakeY[0];
            (*sX)++;
            flag=checkCoordinate();
            if(flag==1)
                createFood();
            createBox();
            usleep(100000);
        }
		else
        control(getch());
	}
    while(ch=='l')
	{
        if(!kbhit())
        {
            system("cls");
            snakeX[count]=snakeX[0];
			snakeY[count]=snakeY[0];
            (*sY)++;
            flag=checkCoordinate();
            if(flag==1)
                createFood();
            createBox();
            usleep(100000);
        }
		else
        control(getch());
	}
}
int checkCoordinate()
{
	if(*sX<=0 || *sY<=0 || *sX>=rows || *sY>=cols)
	exit(0);
    if(foodX==*sX && foodY==*sY)
    {
    	score++;
    	return 1;
	}
}	
#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<conio.h>
#include<stdlib.h>
 int i,j,k,score=0,count=0,flag=0,foodX,foodY,rows=16,cols=30;
 int snakeX[100000],snakeY[100000],*sX=&snakeX[0],*sY=&snakeY[0];
 char ch;
void createBox();
void createFood();
void createSnake();
void reset(char);
int checkCoordinate();
void push();
int main()
{
	createFood();
    createSnake();
    createBox();
    reset('l');
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
            	int signal=0;
            	for(k=0;k<score;k++)
				{
					if(i==snakeX[count-k] && j==snakeY[count-k])
					{
						printf("o");
						signal=1;
					}
				}
				if(signal==0)
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

void reset(char ch)
{
    while(1)
    {
        if(!kbhit())
        {
            system("cls");
            snakeX[count]=snakeX[0];
			snakeY[count]=snakeY[0];
            switch(ch)
            {
                case 'j':
                    (*sY)--;
                break;
                case 'k':
                    (*sX)++;
                break;
                case 'l':
                    (*sY)++;
                break;
                case 'i':
                    (*sX)--;
                break;
                case 'q':
                exit(0);
                break;
                default :
                break;
            }
            flag=checkCoordinate();
            if(flag==1)
                createFood();
            createBox();
            usleep(100000);
        }
        else
        reset(getch());
    }
}
int checkCoordinate()
{
	
	if(*sY<=0)
		*sY=cols;
	else if(*sX<=0)
		*sX=rows;
	else if(*sX>=rows)
		*sX=0;
	else if(*sY>=cols)
		*sY=0;
    if(foodX==*sX && foodY==*sY)
    {
    	score++;
    	return 1;
	}
}	
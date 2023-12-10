#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
char name[50];
int age;
void details();
void qualification();
void quiz();
void details()
	{
		char gender[10];
		printf("Enter Gender: ");
		scanf("%s",&gender);
		if(gender[0]=='m'||gender[0]=='M')
		{
			printf("\nMr.");
		}
		else if(gender[0]=='f'||gender[0]=='F')
		{
			printf("\nMiss.");
		}
		else
		{
			printf("\nInvalid");
		}
	}
void qualification()
	{
		int choice;
		printf("\n1. 10th qualified   ");
		printf("\n2. 12th qualified");
		printf("\n3. Some Bachleor Degree");
		printf("\n4. Uneducated\n");
		printf("\n Enter Your Qualification number according to given data: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					printf("\n    you are  10th qualified");
					break;
				}
			case 2:
				{
					printf("\n    you are 12th qualified");
					break;
				}
			case 3:
				{
					printf("\n    you are having some bachleor degree");
					break;
				}
			case 4:
			    {
				    printf("\n      you are Uneducated");
				    break;
				}
			default:
				{
				  printf("\n       Invalid");
				}	
		}
	}
/*void quiz()
	{
		int ans1,ans2,ans3,ans4,ans5;
   		printf("\n    **** GRAND WELCOME IN QUIZ 2.0****\n");
 		printf("\n");
  		printf("QUES.1: Which is yellow in color?\nANS:  1.mango\t  2.potato\t  3.onion\t  4.ginger\n");
  		printf("\nQUES.2: Which animal is known as ship of deset?\nANS:  1.dog\t  2.ox\t  3.tiger\t  4.camel\n");
   		printf("\nQUES.3: Which is correct name of water transporter?\nANS:  1.ship\t  2.sheph\t  3.ceeph\t  4.sheeph\n");
   		printf("\nQUES.4: Which is fruit?\nANS:  1.mango\t  2.potato\t  3.grapes\t  4.ladyfinger\n");
   		printf("\nQUES.5: Which is most loved in 2023?\nANS:  1.cricket\t  2.football\t  3.basketball\t  4.hockey\n");
   		printf("\n   ***ANSWER***\n");	
	}
	*/
	void watch()
	{
		int n=5;
		int marks=0;
		int a[n];
		int h,m,s; int g,c=0;
		printf("QUES.1: Which is yellow in color?\nANS:  1.mango\t  2.potato\t  3.onion\t  4.ginger\n");
		for( h=0;h<=0;h++)
		{	
			for( m=0;m<=0;m++)
			{
				for( s=0;s<10;s++)
				{
					scanf("%d",&g);
					c++;
					if(c==1)
					{
						break;
					}
						
					//system("cls");
				//printf("QIIZ START IN ....                                                                   [%02d: %02d: %02d]",h,m,s);
				    Sleep(1000);
				}
			}
		}}
   	/*	printf("\n    **** GRAND WELCOME IN QUIZ 2.0****\n");
 		printf("\n");
  		printf("QUES.1: Which is yellow in color?\nANS:  1.mango\t  2.potato\t  3.onion\t  4.ginger\n");
  		printf("\nQUES.2: Which animal is known as ship of deset?\nANS:  1.camel\t  2.ox\t  3.tiger\t  4.dog\n");
   		printf("\nQUES.3: Which is correct name of water transporter?\nANS:  1.ship\t  2.sheph\t  3.ceeph\t  4.sheeph\n");
   		printf("\nQUES.4: Which is fruit?\nANS:  1.mango\t  2.potato\t  3.grapes\t  4.ladyfinger\n");
   		printf("\nQUES.5: Which is most loved in 2023?\nANS:  1.cricket\t  2.football\t  3.basketball\t  4.hockey\n");
   		for( h=0;h<=0;h++)
		{
			for( m=0;m<=0;m++)
			{
				for( s=0;s<4;s++)
				{
					system("cls");
					printf("TIMING:                                                                   [%02d: %02d: %02d]",h,m,s);
				    Sleep(1000);
				}
			}
		}
   		printf("\n   ***ANSWER***\n");
		for(int i=0;i<n;i++)
		{
			printf("ANSWER %c:",65+i);
			scanf("%d",&a[i]);
		}
		for(int j=0;j<n;j++)
		{
			if(a[j]==1)
			{
				marks=marks+1;
			}
			else
			{
				printf("");
			}
		}
		printf("   ************************\n");
		printf("   *        RESULT        *\n");
		printf("   ************************\n");
		printf("   NAME= %s\n",name);
		printf("   AGE=%d\n",age);
		
		switch(marks)
		{
			case 1:
			{
				printf("   SCORE IS 1.");
				break;
			}	
			case 2:
			{
				printf("   SCORE IS 2.");
				break;
			}
			case 3:
			{
				printf("   SCORE IS 3.");
				break;
			}
			case 4:
			{
				printf("   SCORE IS 4.");
				break;
			}
			case 5:
			{
				printf("   CONGRUTULATION !! ALL ARE CORRECT.");
				break;
			}
			default :
			{
				printf("   INVALID.");
				break;
			}
		}
	}
	*/
	
    int main()
	{
	    details();
		scanf("%s",&name);
	   	printf("\nEnter Age: ");
    	scanf("%d",&age);
		qualification();
	//	quiz();
		watch();
			return 0;
	}

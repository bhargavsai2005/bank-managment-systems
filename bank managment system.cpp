#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
inti,j;
int main_exit;

int main()
{
	char pass[10],password[10]."my captain";
	int i=0;
	printf("\n\n\t enter the password to login");
	scanf("%s",pass);
	
	
	if (pass[i]!=13&&pass[i]!=8)
	{
		printf(" ");
		pas[i]=getch();
		i++
	}
	whle (pass [i]!=13);
	pass[10]="\0";
	if(stremp(pass,password)==0)
	{
		printf("\n\n password match ");
		for(i=0,i<=6,i++)
		{
			fordelay(1000);
			printf(" ");
		}
		system("cls");
		menu();
	}
	else
	{
		printf("\n\nwrong password");
		printf("enter 1 to replay & 0 to exit");
		scnf("%d",&main_exit);
		if(main_exit==1)
		{
			system("cls");
			main();
		}
		else if (main_exit);
		{
			system("cls");
			close();
		}
		else
		{
			printf("\n invalid");
			foredelay(1000);
			system("cls");
			goto login_ry;
		}
		return 0;
	}
							
				
				
			
	
		  


														/*CALUCULATOR (BY: SAMIR DUBEY)*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

void remi(void);
void facto(void);
void divi(void);
void sqr(void);
void piii(void);
void quber(void);
void qubee(void);
void wholep(void);
void gret(void);
void same(void);		//user defined function
void sube(void);	
void mult(void);
void sqree(void);
void numm(void);
void matrixx(void);
void clockk(void);

void main()
{
	wholep();
}
 	//function call

void wholep(void)
{
int n,p;
char c[15];

printf("Please Enter Your Name In UPPER CASE : ");	/*Gretting massage*/
gets(c);
system("cls");
while(1)
{
printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
printf("\t\t\t\t\t\t\t\t\t\t|| CALCULATOR ||\n");
printf("\tWWEELLCCOOMMEE TTOO TTHHEE CCAALLCCUULLAATTOORR!...\n\t\t\t\t\t\t");
printf("WHAT MAY I DO FOR YOU IN THIS MAIN MENU?\t\t\t\t\t\t\t\t\tTIME: ");
clockk();
printf("\n");
printf("----------------------------------------------------------------------------------");
printf("-------------------------------------------------------------------------------------\n\n");
printf("\t\t\t\t\t\t\t\t\t\t/*MAIN MENU*/\n\n");
printf("-------------------------------------------------------------------------------------");
printf("----------------------------------------------------------------------------------\n\n");
printf("\t1.Addition\n");
printf("\t2.Subtraction\n");
printf("\t3.Division\n");
printf("\t4.Multiplication\n");
printf("\t5.Remindar\n");
printf("\t6.Factorial\n");
printf("\t7.Square\n");
printf("\t8.Square root\n");
printf("\t9.Qube\n");
printf("\t10.Qube root\n");
printf("\t11.Pie\n");
printf("\t12.Matrix Operation\n");
printf("\t13.Exit\n\n");
printf("-----------------------------------------------------------------------------------");
printf("------------------------------------------------------------------------------------\n\n");
printf("\t\t\t\t\t\t\t\t\t\t/*INPUT AREA*/\n\n");
printf("-------------------------------------------------------------------------------------");
printf("----------------------------------------------------------------------------------\n");
printf("\n**>\tPlease Enter Your Choice(1-9) :");	/*input choice*/
scanf("%d",&n);
switch (n)
{
case 1:	/*Addition*/
same();
printf("\n\n\t\t\t\t\tTHANK YOU MR.");
printf(" %s",c);
printf(" FOR YOUR SELECTED CHOICE...\n");
numm();
getch();
system("cls");
break;
case 2:	/*Subtraction*/
sube();
printf("\n\n\t\t\t\t\tTHANK YOU MR.");
printf(" %s",c);
printf(" FOR YOUR SELECTED CHOICE...\n");
numm();
getch();
system("cls");
break;
case 3:	/*Division*/
divi();
printf("\n\n\t\t\t\t\tTHANK YOU MR.");
printf(" %s",c);
printf(" FOR YOUR SELECTED CHOICE...\n");
numm();
getch();
system("cls");
break;
case 4:	/*Multiplication*/
mult();
 printf("\n\n\t\t\t\t\tTHANK YOU MR.");
printf(" %s",c);
printf(" FOR YOUR SELECTED CHOICE...\n");
numm();
getch();
system("cls");
break;
case 5:	/*Reminder*/
remi();
printf("\n\n\t\t\t\t\tTHANK YOU MR.");
printf(" %s",c);
printf(" FOR YOUR SELECTED CHOICE...\n");
numm();
getch();
system("cls");
break;
case 6:	/*Factorial*/
facto();
printf("\n\n\t\t\t\t\tTHANK YOU MR.");
printf(" %s",c);
printf(" FOR YOUR SELECTED CHOICE...\n");
numm();
getch();
system("cls");
break;
case 7:	/*Square*/
sqr();
printf("\n\n\t\t\t\t\tTHANK YOU MR.");
printf(" %s",c);
printf(" FOR YOUR SELECTED CHOICE...\n");
numm();
getch();
system("cls");
break;
case 8:
sqree();
printf("\n\n\t\t\t\t\tTHANK YOU MR.");
printf(" %s",c);
printf(" FOR YOUR SELECTED CHOICE...\n");
numm();
getch();
system("cls");
break;
case 9:
qubee();
printf("\n\n\t\t\t\t\tTHANK YOU MR.");
printf(" %s",c);
printf(" FOR YOUR SELECTED CHOICE...\n");
numm();
getch();
system("cls");
break ;
case 10:
quber();
printf("\n\n\t\t\t\t\tTHANK YOU MR.");
printf(" %s",c);
printf(" FOR YOUR SELECTED CHOICE...\n");
numm();
getch();
system("cls");
break ;
case 11:
	piii();
printf("\n\n\t\t\t\t\tTHANK YOU MR.");
printf(" %s",c);
printf(" FOR YOUR SELECTED CHOICE...\n");
numm();
getch();
system("cls");		
break;
case 12:	/*Matrix operation*/
matrixx();
printf("\n\n\t\t\t\t\tTHANK YOU MR.");
printf(" %s",c);
printf(" FOR YOUR SELECTED CHOICE...\n");
numm();
getch();
system("cls");		
break;
case 13:
exit(0);
break;
default:
printf("\n\t\t\t\tINVALIED CHOICE MR. ");
printf("%s",c);
numm();
getch();
system("cls");
}
}
}

/*FUNCTION CALLING*/

/*ADDITON*/

void same(void)
{
	long int a[15],m,i;
	long int sum=0;
	printf("==>\tEnter range (under 15) :");
	scanf("%ld",&m);
	printf("\n");
	for(i=1;i<=m;i++)
	{
		printf("==>\tEnter %ld no :",i+0);
		scanf("%ld",&a[i]);
		sum=sum+a[i];
	}
gret();
printf("\n==>\tAddition=%ld",sum);
}

/*SUBTRACTION*/

void sube(void)
{
	int a[2],m,i;
	int sum=0;
	printf("\n");
	for(i=0;i<=1;i++)
	{
		printf("==>\tEnter %d no :",i+1);
		scanf("%d",&a[i]);
		sum=-sum+(-a[i]);
	}
gret();
printf("\n==>\tSubtraction=%d",sum);
}

/*MULTIPLICATION*/
void mult(void)
{
    long int a[15],m,i;
   	long int sum=1;
	printf("==>\tEnter range (under 15) :");
	scanf("%ld",&m);
	printf("\n");
	for(i=1;i<=m;i++)
	{
		printf("==>\tEnter %ld no :",i+0);
		scanf("%ld",&a[i]);
		sum=sum*a[i];
	}
gret();
printf("\n==>\tMultiplication=%ld",sum);
}

/*MATRIX OPERATION*/
void matrixx(void)
{
int v[10][10],x[10][10],y[10][10],d[10][10],e[10][10],f[10][10],g[10][10];
int i,j,k,m;
char c[15];
	printf("==>\tEnter square matix order (under 10) :");
	scanf("%ld",&m);	
printf("\n**>\tEnter value for 1st %d*%d matrix\n\n",m,m);
	for(i=0;(i<=m-1);i++)
	{
		for(j=0;(j<=m-1);j++)
		{
			printf("==>\tInput value for %d row %d cloumn :",i+1,j+1);	/*input 1st matrix*/
			scanf("%d",&v[i][j]);
		}
	}
	printf("\n**>\tEnter value for 2nd %dx%d matrix\n\n",m,m);	/*input 2nd matrix*/
	for(i=0;(i<=m-1);i++)
	{
		for(j=0;(j<=m-1);j++)
		{
			printf("==>\tInput value for %d row %d cloumn :",i+1,j+1);
			scanf("%d",&x[i][j]);
		}
	}
	system("cls");
	printf("----------------------------------------------------------------------------------------------------");
	printf("-------------------------------------------------------------------\n");
	printf("\t\t\t\t \tMULTIPLICATION, ADDITION, SUBTRACTION, REMINDER DIVISION & TRANSPOSE OF TWO MATRICES\n");
	printf("----------------------------------------------------------------------------------------------------");
	printf("-------------------------------------------------------------------\n");
	printf("\n1st 3x3 matrix\n");	/*Output 1st matrix*/
	for(i=0;(i<=m-1);i++)
	{
		for(j=0;(j<=m-1);j++)
		{
			printf("%4d",v[i][j]);
		}
		printf("\n");
	}
	printf(" \n2nd 3x3 matrix\n");	/*Output 2nd matrix*/
	for(i=0;(i<=m-1);i++)
	{
		for(j=0;(j<=m-1);j++)
		{
			printf("%4d",x[i][j]);
		}
		printf("\n");
	}
	printf("\n**************************************************************************** ");
	printf("SOULATION ********************************************************************************\n");
	printf("\n1.Multiplication of these two 3x3 matrix \n");	/*Multiplication*/
	for(i=0;(i<=m-1);i++)
	{
		for(j=0;(j<=m-1);j++)
		{
			y[i][j]=0;
			for(k=0;(k<=m-1);k++)
			{
				y[i][j]=y[i][j]+v[i][k]*x[k][j];
			}
			printf("%4d",y[i][j]);
		}
			printf("\n");
	}
	printf(" \n2.Addition of these two 3x3 matrix\n");	/*Addition*/
	for(i=0;(i<=m-1);i++)
	{
		for(j=0;(j<=m-1);j++)
		{
			d[i][j]=v[i][j]+x[i][j];
			printf("%4d",d[i][j]);
		}
		printf("\n");
	}
		printf(" \n3.Subtraction of these two 3x3 matrix\n");	/*Subtraction*/
	for(i=0;(i<=m-1);i++)
	{
		for(j=0;(j<=m-1);j++)
		{
			e[i][j]=v[i][j]-x[i][j];
			printf("%4d",e[i][j]);
		}
		printf("\n");
	}
		printf(" \n4.Reminder of these two 3x3 matrix\n");	/*Reminder*/
	for(i=0;(i<=m-1);i++)
	{
		for(j=0;(j<=m-1);j++)
		{
			f[i][j]=v[i][j]%x[i][j];
			printf("%4d",f[i][j]);
		}
		printf("\n");
	}
		printf(" \n5.Division of these two 3x3 matrix\n");	/*Devision*/
	for(i=0;(i<=m-1);i++)
	{
		for(j=0;(j<=m-1);j++)
		{
			g[i][j]=v[i][j]/x[i][j];
			printf("%4d",g[i][j]);
		}
		printf("\n");
	}
		printf("\n6.(a):Transpose of 1st 3x3 matrix\n");	/*Transpose 1st matrix*/
	for(j=0;(j<=m-1);j++)
	{
		for(i=0;(i<=m-1);i++)
		{
			printf("%4d",v[i][j]);
		}
		printf("\n");
	}
		printf("\n(b):Transpose of 2nd 3x3 matrix\n");	/*Transpose 2nd matrix*/
	for(j=0;(j<=m-1);j++)
	{
		for(i=0;(i<=m-1);i++)
		{
			printf("%4d",x[i][j]);
		}
		printf("\n");
	}
}

/*SQUARE*/

void sqree(void)
{
	int s;
printf("\n**>\tEnter a number for Square root :");
scanf("%d",&s);
gret();
printf("\n==>\tNumber=%d",s);
printf("\n==>\tSquare root=%.2f",sqrt(s));
	
}

/*QUBE*/

void qubee(void)
{
	int s;
printf("\n**>\tEnter a number for Qube :");
scanf("%d",&s);
gret();
printf("\n==>\tNumber=%d",s);
printf("\n==>\tQube=%d",s*s*s);
}

/*QUBE ROOT*/

void quber(void)
{
	int s;
printf("\n**>\tEnter a number for Qube root :");
scanf("%d",&s);
gret();
printf("\n==>\tNumber=%d",s);
printf("\n==>\tQube root=%.2f",pow(s,1.0/3));
}

/*PI*/

void piii(void)
{
	int s;
printf("\n**>\tEnter a number for Pie :");
scanf("%d",&s);
gret();
printf("\n==>\tNumber=%d",s);
printf("\n==>\tPie=%.3f",3.14*s);	
}

/*clock*/

void clockk(void)
{
	    time_t s, val = 1;
    struct tm* current_time;
    s = time(NULL);
    current_time = localtime(&s);
    printf("%02d:%02d:%02d",
           current_time->tm_hour,
           current_time->tm_min,
           current_time->tm_sec);
    

}

//name programmer

void numm(void)
{
	printf("\n-------------------------------------------------------------------------Devlope by :");
	printf("SAMIR DUBEY-----------------------------------------------------------------------");
}

// line print

void gret(void)
{
printf("\n--------------------------------------------------------------------------------------");
printf("---------------------------------------------------------------------------------\n\n");
printf("\t\t\t\t\t\t\t\t\t\t/*RESULT AREA*/\n\n");
printf("-------------------------------------------------------------------------------------------");
printf("----------------------------------------------------------------------------\n");

}

//squre

void sqr(void)
{
	int s;
printf("\n**>\tEnter a number for Square :");
scanf("%d",&s);
gret();
printf("\n==>\tNumber=%d",s);
printf("\n==>\tSquare=%d",s*s);
}

//factorial

void facto(void)
{
int p;
long int fact=1;
printf("\n**>\tEnter a number for factorial (under 30) :");
scanf("%d",&p);
gret();
printf("\n==>\tNumber=%d",p);
fact=1;
while(p>1)
{
fact=fact*p;
p--;
}
printf("\n==>\tFactorial=%ld",fact);
}

//division

void divi(void)
{
 	int a,b;
printf("\n**>\tEnter 1st no. :");
scanf("%d",&a);	//input number
printf("**>\tEnter 2nd no. :");
scanf("%d",&b);
gret();
printf("\n==>\t1st no.=%d",a);	
printf("\n==>\t2nd no.=%d\n",b);
printf("==>\tDivision=%d",a/b);
}

//reminder

void remi(void)
{
int a,b;
printf("\n**>\tEnter 1st no. :");
scanf("%d",&a);	//input number
printf("**>\tEnter 2nd no. :");
scanf("%d",&b);
gret();
printf("\n==>\t1st no.=%d",a);	
printf("\n==>\t2nd no.=%d\n",b);
printf("==>\tReminder=%d",a%b);
}

#include<stdio.h>
#include<string.h>
int main()
{
	int a,b,i;
 char u[200]="amrit";
 char p[200]="12345";
 char u1[200],p1[200];
 printf("\t\033[41;32;7;1mWelcome To Our Multiplication Table Software\n\n");
 printf("\t\tEnter username: ");
 scanf("%s",&u1);
 printf("\t\tEnter password: ");
 scanf("%s",&p1);
 if(strcmp(u,u1)==0&&strcmp(p,p1)==0)
 {
    printf("\t\tLogin Successful\n");
      printf("\t\t\033[32;1mEnter the number: ");
    scanf("%d",&a);
    printf("\t\t\033[32;1mEnter the limit: ");
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    {
        int c=a*i;
        printf("\t\t\n\t\033[33;41;1m%d × %d = %d\n",a,i,c);
    }
 }
 else
 {
    printf("\t\tWrong username or password\n\n\n");
 }
    
}

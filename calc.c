#include<stdio.h>
int main()
{
int a,b;char op;
printf("Enter two numbers : ");
scanf("%d%d",&a,&b);
printf("\nEnter operation ");
scanf("%c",&op);
switch(op)
{
	case '+':
		printf("%d",a+b);
		break;
	case '-':
		printf("%d",a-b);
		break;
	
}

return 0;
}

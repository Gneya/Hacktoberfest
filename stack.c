#include<stdio.h>
#include<conio.h>
#define max 100
int st[max];
int top=-1;
void push(int st[],int data);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);
void main()
{
	int n;
	int data;
	clrscr();
	printf("STACK\n\n");
	do
	{
		printf("\nEnter 1 for push\nEnter 2 for pop\nEnter 3 for peek\nEnter 4 for display\nEnter 5 to exit\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:printf("Enter data to enter:\n");
				scanf("%d",&data);
				push(st,data);
				break;
			case 2:data=pop(st);
				printf("%d deleted successfully",data);
				break;
			case 3:data=peek(st);
				printf("Peek=%d",data);
				break;
			case 4:display(st);
			break;
			default:printf("Wrong choice");
			break;
		}
	}while(n!=5);
	getch();
}
void push(int st[],int data)
{
	if(top==max-1)
	{
		printf("Stack overflow");
	}
	else
	{
		top++;
		st[top]=data;
		printf("%d inserted successfully",st[top]);
	}
}
int pop(int st[])
{
	int value=0;
	if(top==-1)
	{
		printf("Stack underflow");
	}
	else
	{
		value=st[top];
		top--;
	}
	return value;
}
int peek(int st[])
{
	return st[top];
}
void display()
{
	int i;
	printf("---------STACK----------\n");
	for(i=0;i<=top;i++)
	{
		printf("%d\n",st[i]);
	}
}

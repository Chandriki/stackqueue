#include<stdio.h>
#include<conio.h>
#define MAX 10
typedef struct stacktype
{
int a[MAX];
int top;
}STACK;
void main()
{
STACK s;
int ch,item;
int isoverflow(STACK);
int isunderflow(STACK);
void push(STACK*,int);
int pop(STACK*);
int peep(STACK);
s.top=-1;
while(1)
{
printf("enter 1.for push");
printf("2.for pop");
printf("3.for peep");
printf("4.for exit");
porintf("Enter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:if(isoverflow(s))
{
printf("stack is overflow");
}
else
{
printf("Enter the items to be pushed");
}
break;
case 2:if(isunderflow(s))
{
printf("stack is empty");
}
else
{
item=pop(&s);
printf("pop item is %d",item);
}
break;
case 4:
exit(1);
break;
default:printf("wrong choice");
}
getch();
}
}
int isoverflow(STACK s)
{
if(s.top==MAX-1)
{
return 1;
}
else
{
return 0;
}
}
int isunderflow(STACK s)
{
if(s.top==-1)
{
return 1;
}
else
{
return 0;
}
}
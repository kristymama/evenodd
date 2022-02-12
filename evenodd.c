#include<stdio.h>
int main()
{
	int a,ch;
	
	printf("enter number a\n");
	scanf("%d",&a);
	
	ch=a%2;
	
	switch(ch==0)
	
	{
	case 1 :
	printf("the number is even");
	break;
		
	case 2  : 
	printf("the number is odd");
	break;
		
	
	}
return 0;
}

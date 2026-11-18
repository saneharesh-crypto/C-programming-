#include<stdio.h>
int fact_loop(int num);
int main()
{
	int num;
	int result;
	printf("Enter the no :  \n");
	scanf("%d",&num);
	result= fact_loop(num);
	printf("Factorial: %d \n", result);
return 0;
}
int fact_loop(int num)
{
	int i,ans=1;
for(i=1;i<=num;i++)
{
		ans=ans*i;
}
return ans;
}
	

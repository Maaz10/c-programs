#include<stdio.h>

void inputnumber(int* n)
{
	printf("Enter the number of terms needed ");
	scanf("%d",n);
}

void fibonacci(int n,int x[n])
{
   x[0]=1;
   x[1]=1;
	for(int i=2;i<n;i++)
	 {
	  x[i] = x[i-1] + x[i-2];
	 }
}

void output(int n, int x[n])
{
	printf("The Fibonacci seires is \n");
	for(int i=0;i<n;i++)
	 {
	  printf(" %d",x[i]);
	 }
}

int main()
{
	int n;
	inputnumber(&n);
	int x[n];
	fibonacci(n,x);
	output(n,x);
	return 0;
}

	   
  
  


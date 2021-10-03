#include<stdio.h>
#include<conio.h>
int main()
{
   int arr[6],i,n,sum=0;
   float avg;
   clrscr();
   printf("enter number of elements of array: "):
   	scanf("%d",&n);
   	printf("enter %d values of array: ",n);   
   	for(i=0;i<n;i++)
   	  {
		scanf("%d",&arr[i]);
        sum=sum+arr[i];         		
      }
      printf("%d",sum);
      avg=sum/n;
      printf("%f",&avg);
      return 0;
}

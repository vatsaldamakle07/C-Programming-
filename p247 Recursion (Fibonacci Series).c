#include<stdio.h>

void printFibonacci(int);

void main(){

     int k,n;
     long int i=0,j=1,f;

     printf("Enter the range of the Fibonacci series =>");
     scanf("%d",&n);

     printf("\nFibonacci Series: ");
     printf("%d %d ",0,1);
     printFibonacci(n);

}
void printFibonacci(int n){

     static long int first=0,second=1,sum;

     if(n>0)
{
           sum = first + second;
           first = second;
           second = sum;
           printf("%d ",sum);
           printFibonacci(n-1);
     }

}

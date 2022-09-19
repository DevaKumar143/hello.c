//the sum of n term of natural number and their sum

#include<stdio.h>


int main(){
   int i,sum=0,n;
   printf("Enter a number");
   scanf("%d",&n);
   printf("\n the Even number");
   for(i=1;i<=n;i++){
    printf("%d\n",2*i);
    sum+=2*i;
   }
   printf("\n The sum of even no %d\n is %d\n ",n, sum);
}
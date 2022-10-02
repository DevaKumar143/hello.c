/* Write a function int max_of_four(int a,int b,int c,int d)Which reads four reads arguments and returns the
 greatest of them*/

#include<stdio.h>

int max_of_four(int a,int b, int c, int d);

int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int ans=max_of_four(a,b,c,d);
    printf("%d",ans);
    return 0;
}
int max_of_four(int a,int b,int c,int d)
{
    int greatest= a;
    if(greatest<b)
    {
        greatest = b;
    }
    if (greatest<c)
    {
        greatest = c;
    }
    if(greatest<d){
        greatest = d;
    }
    return(greatest);
    
}
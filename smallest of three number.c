
//  the smallest of three number

#include<stdio.h>

 int main(){
    int x,y,z;
    printf(" Enter three number ");
    scanf("%d %d %d", &x,&y,&z);
     
     if(x>y && y<z){
        printf("the smallest no is %d",y);
    }else if(y>x && x<z){
        printf("the smallest number x is %d",x);

    }else {
        printf("the smallest no is z is % d",z);
    }
    return 0;
}


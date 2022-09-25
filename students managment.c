// students management system

#include<stdio.h>

void printstring(char arr[]);

int main(){
    char name[50];
    printf("Enter your's name");
    scanf("%s",name);
    printf("your name is %s\n",name);
    char fathersname[52];
    printf("Enter father's name");
    scanf("%s",fathersname);
    printf("Father's name is %s\n",fathersname);
    char mothername[50];
    printf("Enter mother name");
    scanf("%s",mothername);
    printf("Mother name is %s\n",mothername);
    int  RollNo[20];
    printf("Enter university roll number");
    scanf("%d",RollNo);
    printf("University roll no is %d\n",RollNo);
    char Branch[30];
    printf("Enter branch");
    scanf("%s",Branch);
    printf("Branch is %s\n",Branch);
    char years[40];
    printf("Enter your's years");
    scanf("%s",years);
    printf("college in your yeras %s\n",years);
    int moNo[20];
    printf("Enter your contact number");
    scanf("%d",moNo);
    printf("Mobile no. is %d\n",moNo);
    return 0;
}

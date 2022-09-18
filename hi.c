//the salted form of a password entered by user if the salt is "456"

#include<stdio.h>
#include<string.h>

void printstring(char arr[]);
int countLength(char arr[]);
void salting(char password[]);

int main(){
    char password[100];
    scanf("%s",password);
    salting(password);
}
void salting(char password[]){
    char salt[]  = "456";
    char newpass[200];

    strcpy(newpass, password);
    strcat(newpass,salt);
    puts(newpass);
}

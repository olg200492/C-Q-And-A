#include <stdio.h>
#include <string.h>


int factorial(int num);
int main()
{
    int num;
    int f;
    printf("Enter a number for factorial calac.\n");
    scanf("%d",&num);
    f=factorial(num);
    printf("factorial of %d is:%d",num,f);
    return 0;
}

int factorial(int num){

    if(num<1){
        return 1;
    }

    return num*factorial(num-1);
}
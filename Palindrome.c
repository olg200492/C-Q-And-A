#include <stdio.h>
#include <string.h>


int palindrome(int num);
int main()
{
    int num = fibonacci(5);
    printf("fib of N5 is:%d\n",num);
    return 0;
}

int palindrome(int num){

    if(num<=1){
        return num;
    }
    return fibonacci(num-1)+fibonacci(num-2);
}
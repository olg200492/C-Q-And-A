#include <stdlib.h>
#include <stdio.h>
int cal(int sec);
int main()
{   
    cal(4000);
    return 0;
    
}
int cal(int sec){
    int h = sec/3600;
    int m = (sec - h*3600)/60;
    int s= (sec - h*3600)%60;
    printf("%02d:%02d:%02d",h,m,s);
}
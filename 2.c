#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
 /* function declaration */
 void StrCopy(char *str1, char *str2);
 /* main() function */
 int main()
 {
    int numIntegers,i,sum=0;
    int *ptr;
    printf("How many bytes?\n");
    scanf("%d",&numIntegers);

    int termination = 0;

    ptr = malloc(numIntegers * sizeof(int));
    if (ptr == NULL){
      printf("malloc() failed.\n");
      termination = 1;
    }
    else{
      for(i=0;i<numIntegers;i++)
        ptr[i]=i+1;
      for (i=0; i<numIntegers; i++)
        sum += ptr[i];
      printf("The sum is %d.\n", sum);
    }
    free(ptr);
    return termination;
 }

 #include <stdio.h>

 int main(void)
 {
   int i=1,n,k,j;
   int blankSpace,currentValue=1;
   printf("Enter 'n' number rows in pyramid:\n");
   scanf("%d",&n);
   blankSpace = n-1;
   for(i=1;i<=n;i++){
     for(k=blankSpace;k>=1;k--){
       printf(" ");
     }
     for(j=1;j<=i;j++){
       printf("%d ",currentValue);
       currentValue+=1;
     }
     printf("\n");
     blankSpace--;
   }
  return 0;
 }
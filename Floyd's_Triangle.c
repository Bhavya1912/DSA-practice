#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,k=1,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i = 1; i <= n; i++) {
      for(j = 1;j <= i; j++)
         printf("%4d", k++);
      printf("\n");
   }
    getch();
} 


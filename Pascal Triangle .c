#include<stdio.h>
#include<conio.h>
void main() {
    int n, temp=1,i,j,k;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        for (k=1; k <= n-i; k++)
            printf(" ");
        for (j=0; j<=i; j++) {
            if (j==0 || i==0)
                temp = 1;
            else
                temp=temp*(i-j+1)/j;
            printf("%2d", temp);
        }
        printf("\n");
    }
    getch();
} 

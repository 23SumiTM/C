#include<stdio.h>

int main(){

   int n,i;

    printf("\n Enter A Number: ");
    scanf("%d", &n);
    
    char arr[10][10]={"one","two","three","four","five","six","seven","eight","nine"};
    
    if (n<=9) {
      printf("%s",arr[n-1]);
    }

    else {
      printf("Greater than 9");
    }
    
    
    return 0;
} 


#include<stdio.h>
int sum(int a, int b) {
    int c = a + b;
    printf("sum is %d \n", c);
}
int minus(int a, int b) {
    int c = a - b;
    printf("min is %d \n", c);
}
int multiply(int a, int b) {
    int c = a * b;
    printf("mul is %d \n", c);
}
int divison(int a, int b) {
   int c = a / b;
   printf("mul is %d \n", c);
}
int main() {
    int a, b;
    printf("enter the first  number : ");
    scanf("%d", &a);
    printf("enter the first  number : ");
    scanf("%d", &b);
    sum(a,b);
    minus(a,b);
    multiply(a,b);
    divison(a,b);
    return 0;

    
}
#include<stdio.h>
int main() {
    int arr[5], sum=0;
    printf("enter the elements: \n  ");
    for(int i=0; i<5; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("%d", sum);
    return 0;

}
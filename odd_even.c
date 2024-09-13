#include<stdio.h>
int main() {
    int arr[10], odd=0, even=0, e[10], o[10];
    printf("enter the elements: \n  ");
    for(int i=0; i<10; i++) {
        scanf("%d", &arr[i]);
        if( arr[i]%2 == 0) {
            e[even] = arr[i];
            even++;
            
        }
        else{
            o[odd] = arr[i];
            odd++;
        }
        
    }
    printf("even=\n");
    for(int i=0; i<even; i++) {
        printf("%d \n",e[i]);
    }
    printf("odd=\n");
    for(int i=0; i<odd; i++) {
        printf("%d \n",o[i]);
    }
    
}
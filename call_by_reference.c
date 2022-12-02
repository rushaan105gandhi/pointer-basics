#include <stdio.h>
void swap(int *a, int *b);
void wrongswap(int a, int b);
int main(){

    int x = 3;
    int y = 4;
    printf("the value of x and y before swap is %d and %d\n", x, y);
    swap(&x, &y);
    printf("the value of x and y after swap is %d and %d", x, y);
    return 0;
}
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    
    *b = temp;//the way this algo works for variable a & b, it will work for x and y, the same way//
}
void wrongswap(int a, int b){

}
void wrongswap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}


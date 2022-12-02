#include <stdio.h>
int sum(int a, int b);//making a sum function
int main(){
    int a = 4;
    int b = 7;

    printf("the value of 4 + 7 is %d",sum(a, b));
    return 0;
}
int sum(int a , int b){
    int c;
    c = a + b;
    a = 42;
    b = 33;

    return c;
}
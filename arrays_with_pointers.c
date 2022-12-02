#include <stdio.h>
int main(){
    int marks[4];
    int *ptr;
    ptr = &marks[0];
    for (int i = 0; i < 4;i++){
        printf("enter the marks of student %d: \n", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    for (int i = 0; i < 4;i++){
        printf("the marks of student %d are %d\n",i+1, marks[i]);
    }
    for (int i = 0; i < 4;i++){
        printf("enter the marks scored by the students in the end semester");
    }
        return 0;
}
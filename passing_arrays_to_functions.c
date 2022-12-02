#include <stdio.h>
    void printarray(int *ptr, int n){
        for (int i = 0; i < n;i++)
        {
            printf("the value of %d element is %d\n",i+1, *(ptr+i));
        }
    }
    int main(){
        int arr[] = {1, 2, 3, 4, 5, 6, 7};
        printarray(arr, 2);
// void printarray(int ptr[], int n){
//    for (int i = 0; i < n;i++)
//     {
//         printf("the value of %d element is %d\n",i+1, ptr[i]);
//     }
// }
// int main(){
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     printarray(arr, 7);
    return 0;
}

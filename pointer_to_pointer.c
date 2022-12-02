#include <stdio.h>
int main(){
int i = 34;

int * j = &i;//j will store the address of i

int **k;
k = &j;

printf("The address of j is %u\n", k);

printf("The value of i is %d\n",i);
//printing the value iof i

printf("The value of i is %d\n", *j);
//extracting the value of i from j

printf("The address of i is %u\n", j);//the value of address of i is j

printf("The address of i is %u\n", &i);//the address of i is alsi and percent of j

printf("The address of j is %u\n", &j);//the addresss if j is and percent of j

printf("The value of j is %u\n", (*&j));

return 0;
}
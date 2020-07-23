#include<stdio.h>

int main()
{

int arr[] = {1,2,3,4};
int arr1[5] = {1};
int arr2[6];

int *ptr = &arr;
int arrd [2][3];

printf("%d,%d,%d,%d\n",sizeof(arr),sizeof(&arr1),sizeof(arr2),sizeof(arrd));
printf("%d, %d",sizeof(ptr),sizeof(*ptr));
return 0;
}

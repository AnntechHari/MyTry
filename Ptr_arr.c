#include<stdio.h>

int main()
{



int (*ptr1)[2];

int arr[2];

ptr1 = &arr;

printf("%x, %x\n",arr,arr+1);

printf("%x, %x\n",ptr1,ptr1+1);

return 0;
}

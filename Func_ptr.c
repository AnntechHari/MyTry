#include<stdio.h>


int add(int *a, int *b){
return (*a)+(*b);
}

int sub(int *a, int *b){
return (*a)-(*b);
}

int mul(int *a, int *b){
return (*a)*(*b);
}

int div(int *a, int *b){
return (*a)/(*b);
}


typedef int (*ptr)(int *,int *);


ptr func_ptr[4] = {add,sub,mul,div};

enum{
addd,
subb,
mull,
divv
};

int main()
{
int a =10,b=9;
	printf("Add: %d\n",func_ptr[addd](&a,&b));
	printf("Sub: %d\n",func_ptr[subb](&a,&b));
	printf("Mul: %d\n",func_ptr[mull](&a,&b));
	printf("Div: %d\n",func_ptr[divv](&a,&b));
return 0;
}

#include <stdio.h>

typedef void(*fptr1)(void);
typedef fptr1(*fptr2)(fptr1);

void function1(void){
    printf("hello world\n");
}

fptr1 function2(fptr1 ptr1){
    return ptr1;
}

int main()
{
    fptr2 ptr1;
    fptr1 ptr2;
    ptr1=function2;
    ptr2=ptr1(function1);
    ptr2();
    return 0;
}
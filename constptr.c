#include<stdio.h>
int main(){
    int a=10;
    int b=20;
    int *const ptr=&a;
    *ptr=30;
    printf("The value of ptr is %d\n",*ptr);
    return 0;
}
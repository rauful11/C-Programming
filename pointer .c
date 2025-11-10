#include<stdio.h>
int main(){
    int num=50;
    int *p;
    p=&num;
    printf("addrees of p variable %d \n",p);
    printf("value of p variable %d\n",*p);
    printf(" number address %d \n",&num);
    printf("address of pointer %d",&p);

    return 0;
}

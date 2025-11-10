#include<stdio.h>
int main(){
    int num=50;
    int *p;
    p=&num;
    printf("adrees of p variable %d \n",p);
    printf("value of p variable %d",*p);

    return 0;
}

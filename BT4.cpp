#include<stdio.h>
int main(){
    int N;
    int nghichdao = 0 ;
    do
    {
        printf("Nhap N: \n");
        scanf("%d", &N);
    }while(N < 0 && printf("Loi: n >= 0 ! \n"));
    while(N != 0)
    {
        nghichdao = nghichdao * 10 + N%10;
        N = N / 10;
    }
    printf("So nghich dao la: %d \n",nghichdao);
}

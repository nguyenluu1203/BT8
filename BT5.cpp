#include<stdio.h>
int main()
{
    int N;
    int S=0;
    do
    {    
        printf("Nhap N = \n");
        scanf("%d", &N);
        if(N <= 0)
        {
            printf("N phai > 0. Xin nhap lai ! \n");
        }
    }while(N <= 0);
    
    int i=1;
    while(i<=N-1)
    {
        if(N%i==0) 
        {
            S+=i;
        }
        i++; 
    }
    if(S==N)
    { 
        printf("%d la so hoan hao",N); 
    }else{ 
        printf("%d khong phai la so hoan hao",N); 
    }
}

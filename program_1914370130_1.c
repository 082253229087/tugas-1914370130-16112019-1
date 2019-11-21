#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a = 1, b, c;

    printf("Masukkan bilangan Faktorial: ");
    scanf("%d",&b);

    for(c=1;c<=b;c++){
     a = a* c;
    }
    printf("\nFaktorial dari %d! adalah : %d\n",b , a);
}


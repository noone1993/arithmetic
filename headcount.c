#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int i;

    scanf("%d%d%d", &a, &b, &c);

    for(i=10;i<=100;i++){
        if(i%3==a && i%5==b && i%7==c){
            printf("%d\n", i);
            break;
        }
    }

    if(i==101)
        printf("%d\n", i);

    return 0;
}
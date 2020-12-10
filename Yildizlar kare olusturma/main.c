#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i, j;
    printf("Sayiyi giriniz :");
    scanf("%d",&a);
    if(a<=0)
        printf("Hatali rakam girdiniz!");
    else
        {
            for(i = 1 ; i<=a; i++)
                {
                    for(j = 1 ; j<=a; j++)
                    {
                        printf("*");
                    }
                 printf("\n");
                }
        }
    return 0;
}

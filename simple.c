/* Simpel program for Fibonacci series program in C language */
#include <stdio.h>
#include "unistd.h"

int main()
{
        int n, first = 0, second = 1, next, c;
        printf("Enter the number of terms\n");
        scanf("%d", &n);

        printf("input is: %d\n", n);

        for (c = 0; c < n; c++)
        {
                if (c <= 1)
                        next = c;
                else
                {
                        next = first + second;
                        first = second;
                        second = next;
                }
                printf("%d\n\n", next);
        }


        return 0;
}

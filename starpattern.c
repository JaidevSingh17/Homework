// C Program to make star pattern
#include <stdio.h>
int main()
{
    int i,n,rows;
    printf("Enter the number of rows of pattern: ");
    scanf("%d", &rows);
    for (i = 0; i < rows; i++)// this will run for "rows" number of times
    {
        for (n = 0; n < i+1; n++)// this will print for i+1 times
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
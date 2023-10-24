#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    /// To check if the input is in between 1 and 9
    do
    {
        n = get_int("Width: ");
    }
    while (n < 1 || n > 8);

    /// To Print Rows
    for (int i = 0; i < n; i++)
    {
        /// Empty Spaces(Coloumns)
        for (int j = i; j < n - 1; j++)
        {
            printf(" ");
        }
        /// Print value(Coloumns)
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        /// To print in new line
        printf("\n");
    }
}
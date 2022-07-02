#include <stdio.h>

/**
 *main -> assign a random number to the variable n each
 *and print the last digit of number stored in the value
 *Return : always 0
 */
int main(void)
{
        char ch;
        for (ch = 'a'; ch <= 'z'; ch++)
        {
                if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}		
        }
        for (ch = 65; ch <= 90; ch++)
        {
                putchar(10);
        }
        putchar(10);

        return (0);
}

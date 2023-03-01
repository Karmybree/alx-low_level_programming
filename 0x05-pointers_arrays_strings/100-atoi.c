#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	unsigned int count = 0, size = 0, oi = 0, pn = 1, m = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;
		if (*(s + count) == '-')
			pn *= -1;

		if (((s + count) >= '0') && ((s + count) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}
#include "main.h"


/**

 * _atoi - converts a string to an integer

 * @s: string to be converted

 *

 * Return: the int converted from the string

 */

int _atoi(char *s)

{

        int i, d, n, len, f, digit;


        i = 0;

        d = 0;

        n = 0;

        len = 0;

        f = 0;

        digit = 0;


        while (s[len] != '\0')

                len++;


        while (i < len && f == 0)

        {

                if (s[i] == '-')

                        ++d;


                if (s[i] >= '0' && s[i] <= '9')

                {

                        digit = s[i] - '0';

                        if (d % 2)

                                digit = -digit;

                        n = n * 10 + digit;

                        f = 1;

                        if (s[i + 1] < '0' || s[i + 1] > '9')

                                break;

                        f = 0;

                }

                i++;

        }


        if (f == 0)

                return (0);


        return (n);

}



=============================================


101-keygen.c


#include <stdio.h>

#include <stdlib.h>

#include <time.h>


/**

 * main - program that generates random valid

 * passwords for the program 101-crackme

 *

 * Return: Always 0 (Success)

 */

int main(void)

{

        int pass[100];

        int i, sum, n;


        sum = 0;        


        srand(time(NULL));


        for (i = 0; i < 100; i++)

        {

                pass[i] = rand() % 78;

                sum += (pass[i] + '0');

                putchar(pass[i] + '0');

                if ((2772 - sum) - '0' < 78)

                {

                        n = 2772 - sum - '0';

                        sum += n;

                        putchar(n + '0');

                        break;

                }

        }


        return (0);

}





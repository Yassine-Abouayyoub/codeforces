/*
 * ============================================================================
 *                              CODEFORCES
 * ============================================================================
 *
 * Problem ID    : 112A
 * Problem       : Petya and Strings
 * Contest       : Codeforces
 * Rating        : 800
 * Difficulty    : Easy
 * Topic         : Strings
 * Language      : C
 *
 * ============================================================================
 */
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	string[2][101];
	int		a;
	int		b;

	scanf("%100s %100s", string[0], string[1]);

	for (int i = 0; string[0][i]; i++)
	{
		a = tolower((unsigned char)string[0][i]);
		b = tolower((unsigned char)string[1][i]);
		if (a != b)
		{
			printf("%d\n", a < b ? -1 : 1);
			return (0);
		}
	}
	printf("0\n");
	return (0);
}
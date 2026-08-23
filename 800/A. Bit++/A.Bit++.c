/*
 * ============================================================================
 *                              CODEFORCES
 * ============================================================================
 *
 * Problem ID    : 282A
 * Problem       : Bit++
 * Contest       : Codeforces
 * Rating        : 800
 * Difficulty    : Easy
 * Topic         : Implementation
 * Language      : C
 *
 * ============================================================================
 */
#include <stdio.h>

int main(void)
{
	int n, x = 0;
	char s[4];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", s);
		if (s[1] == '+')
			x++;
		else
			x--;
	}
	printf("%d\n", x);
	return 0;
}

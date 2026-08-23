/*
 * ============================================================================
 *                              CODEFORCES
 * ============================================================================
 *
 * Problem ID    : 231A
 * Problem       : Team
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
	int n;
	int count = 0;
	int tab[3];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d %d", &tab[0], &tab[1], &tab[2]);
		if (tab[0] + tab[1] + tab[2] >= 2) count += 1;
	}
	printf("%d\n", count);
	return 0;
}

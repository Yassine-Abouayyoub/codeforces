/*
 * ============================================================================
 *                              CODEFORCES
 * ============================================================================
 *
 * Problem ID    : 158A
 * Problem       : Next Round
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
	int n, k, i, count = 0;

	scanf("%d %d", &n, &k);
	int scores[n];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &scores[i]);
	}
	for (i = 0; i < n; i++)
	{
		if (scores[i] >= scores[k - 1] && scores[i] > 0)
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}
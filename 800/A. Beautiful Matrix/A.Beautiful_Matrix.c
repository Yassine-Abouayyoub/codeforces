/*
 * ============================================================================
 *                              CODEFORCES
 * ============================================================================
 *
 * Problem ID    : 263A
 * Problem       : Beautiful Matrix
 * Contest       : Codeforces
 * Rating        : 800
 * Difficulty    : Easy
 * Topic         : Implementation
 * Language      : C
 *
 * ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int Matrix[5][5];
	int count = 0;

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
		{
			scanf("%d", &Matrix[i][j]);
			if (Matrix[i][j] == 1) count = abs(i - 2) + abs(j - 2);
		}
	printf("%d", count);
}
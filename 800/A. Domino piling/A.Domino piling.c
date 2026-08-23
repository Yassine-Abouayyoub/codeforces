/*
 * ============================================================================
 *                              CODEFORCES
 * ============================================================================
 *
 * Problem ID    : 50A
 * Problem       : Domino piling
 * Contest       : Codeforces
 * Rating        : 800
 * Difficulty    : Easy
 * Topic         : Math
 * Language      : C
 *
 * ============================================================================
 */
#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	printf("%d\n", (n * m) / 2);
	return 0;
}
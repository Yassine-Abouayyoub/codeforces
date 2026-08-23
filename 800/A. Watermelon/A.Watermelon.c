/* ============================================================================
*                              CODEFORCES
* ============================================================================
*
* Problem ID    : 4A
* Problem       : Watermelon
* Contest       : Codeforces
* Rating        : 800
* Difficulty    : Easy
* Topic         : Math
* Language      : C
*
* ============================================================================*/
#include <stdio.h>

int	main(void)
{
	int	w;

	scanf("%d", &w);
	if (w > 2 && w % 2 == 0)
		printf("YES\n");
	else
		printf("NO\n");
	return (0);
}
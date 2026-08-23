/*
 * ============================================================================
 *                              CODEFORCES
 * ============================================================================
 *
 * Problem ID    : 236A
 * Problem       : Boy or Girl
 * Contest       : Codeforces
 * Rating        : 800
 * Difficulty    : Easy
 * Topic         : Strings
 * Language      : C
 *
 * ============================================================================
 */
#include <stdio.h>
#include <string.h>
int main(void)
{
	char Name[101];
	int count = 0;

	scanf("%s", Name);
	for (int i = 0; Name[i]; i++)
		count += (strchr(Name, Name[i]) == &Name[i]);
	printf("%s", (count % 2 == 0) ? "CHAT WITH HER!" :  "IGNORE HIM!");
	return 0;
}
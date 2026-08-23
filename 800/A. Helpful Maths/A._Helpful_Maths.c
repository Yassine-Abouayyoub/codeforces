/*
 * ============================================================================
 *                              CODEFORCES
 * ============================================================================
 *
 * Problem ID    : 339A
 * Problem       : Helpful Maths
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
	char str[201];
	char tmp;

	scanf("%s", str);
	for (int i = 0; str[i]; i++)
    	if (str[i] != '+')
        	for (int j = i + 1; str[j]; j++)
            	if (str[j] != '+' && str[i] > str[j])
                	tmp = str[i], str[i] = str[j], str[j] = tmp;
	printf("%s", str);
	return 0;
}

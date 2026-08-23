
/* ============================================================================
*                              CODEFORCES
* ============================================================================
*
* Problem ID    : 71A
* Problem       : Way Too Long Words
* Contest       : Codeforces
* Rating        : 800
* Difficulty    : Easy
* Topic         : Strings
* Language      : C
*
* ============================================================================*/
#include <stdio.h>
#include <string.h>

int main(void) {
	int n;
	scanf("%d", &n);
	char words[n][101];
	for (int i = 0; i < n; i++) {
		scanf("%s", words[i]);
	}
	for (int i = 0; i < n; i++) {
		if (strlen(words[i]) > 10) {
			printf("%c%d%c\n", words[i][0], strlen(words[i]) - 2, words[i][strlen(words[i]) - 1]);
		} else {
			printf("%s\n", words[i]);
		}
	}
	return 0;
}
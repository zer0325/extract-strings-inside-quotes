#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAXLENGTH 10000
#define DELIMETER '\"'

int getStrings (char s[]);

int main()
{

    char str[MAXLENGTH];

    while(getStrings(str) != EOF) {
	/* Disregard single character strings.
	 * Note that single character strings las a length of 2 */
	if (strlen(str) > 2)
	    printf("%s\n", str);
    }

    return 0;

}

int getStrings(char s[])
{
    int c, i;

    while((c = getchar()) != EOF) {
	// Check if the current character is a DELIMETER.
	// If it is, save the succeeding characters
	// until the next DELIMETER.
	if (c == '\"') {
	   for (i = 0; (c = getchar()) != DELIMETER  && c != EOF; i++)
	       s[i] = c;
	    s[i] = '\0';
	    if (c == EOF)
		return EOF;
	    return i;
	}
    }
    return EOF;
}

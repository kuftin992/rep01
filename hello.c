#include <stdio.h>
#include <stdlib.h>
/* hello 10:57 */
int main() {
	char *message;
	scanf ("%ms", &message);
	printf ("Your message: %s\n", message);
	free (message);
	return 0;
}

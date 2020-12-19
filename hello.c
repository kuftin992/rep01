#include <stdio.h>
#include <stdlib.h>

int main() {
	char *message;
	scanf ("%ms", &message);
	printf ("Your message: %s\n", message);
	free (message);
	return 0;
}

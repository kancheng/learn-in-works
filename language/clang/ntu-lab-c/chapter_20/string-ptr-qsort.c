#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define STRLENGTH 80
#define ZODIAC 12
int compare(const void *ptr1, const void *ptr2) {
	return (strcmp((*(char **) ptr1), *((char **) ptr2)));
}
// main
int main(void)
{
	char zodiac[ZODIAC][STRLENGTH];
	char *zodiacPtr[ZODIAC];
	for (int i = 0; i < 12; i++) {
		zodiacPtr[i] = zodiac[i];
		scanf("%s", zodiac[i]);
	}
	qsort (zodiacPtr, ZODIAC, sizeof(char *), compare);
	for (int i = 0; i < ZODIAC; i++)
		puts(zodiacPtr[i]);
	return 0;
}
/*
rat
ox
tiger
hare
dragon
snake
horse
sheep
monkey
rooster
dog
pig
*/

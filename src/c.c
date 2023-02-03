// https://cplusplus.com/forum/beginner/274150/
// https://cplusplus.com/user/seeplus/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

#define LSIZE 128
#define RSIZE 50
#define MAX 1000

int main()
{
	const char fname[MAX] = "vocab.txt";
	FILE* file = fopen(fname, "r");

	if (file == NULL) {
		puts("Cannot open file");
		return 1;
	}

	char line[LSIZE][RSIZE];
	int tot = 0;

	srand(time(NULL));

	for (; tot < LSIZE && fscanf(file, "%*d ")!= EOF && fgets(line[tot], RSIZE, file); ++tot)
		line[tot][strlen(line[tot]) - 1] = '\0';

	printf("%s\n", line[rand() % tot]);
}

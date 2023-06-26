#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
/**
 * main - Entry point and prints password generated
 * Return: Always 0(Success)
 */
int main(void)
{
	int randNum, uCount = 0, dCount, ascChar = 2772;
	char passwd[100];
	time_t tNow;

	srand((int) time(&tNow));
	while (ascChar > 126)
	{
		randNum = rand() % 126;
		passwd[uCount] = randNum;
		ascChar -= randNum;
		uCount++;
	}
	if (ascChar > 0)
		passwd[uCount] = ascChar;
	else
		uCount--;
	for (dCount = 0; dCount <= uCount; dCount++)
	{
		printf("%c", passwd[dCount]);
	}
	return (0);
}

/********************************************************************************
 *										*
 *    User func "Getupd" exchnge processing introduced symbol after "fgets"	*
 *										*
 ********************************************************************************/


#include <stdlib.h>
#include <stdio.h>

void Getupd(char* ctr, int n, FILE* stream, int flag);
{
	int cycle = 0;

	if(flag == 0) while (getchar() != '\n') continue;	//clear input buffer (func not work correct if you use other input func before them)

	fgets(ctr, n, stream);

	while (ctr[cycle] != '\0') cycle++;		//find position of \n

	if (ctr[cycle - 1] == '\n') ctr[cycle - 1] = '\0';	//replace \n to \0
	else
	{
		while (getchar() != '\n') continue;		//clear input buffer
	}

	return;
}

int main(void) {

	char str[50] = { 0 };
	
	printf("getupd:");
	Getupd(str, 50, stdin, 0);

	fputs(str, stdout);

}

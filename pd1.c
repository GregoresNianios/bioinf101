#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char seq[ 1000 ];
	int len;
	int i;


	scanf("%s", seq);
	len = strlen( seq );
	printf("The length was: %s\n", seq);

	if(len < 3 )
		{
			printf("Go away !\n");
			exit(1);
		}

	if(seq[ i ] == 'A' &&  
		seq[ i+1] == 'T' && seq[ i+3] == 'C')
		{
			printf("Corret start !\n");
		}
	else
		{
			printf("No present !\n");
		}
}




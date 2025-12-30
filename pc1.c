#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char seq[ 1000 ];
	int len;
	int i;
	int total_charge=0;

	scanf("%s", seq);
	len = strlen( seq );
	printf("The length was: %s\n", seq);

	for( i=0 ; i < len ; i++ )
	{
		if(seq[ i ] =='K' || seq[ i ] == 'R')
			{
				total_charge++;
			}
		if(seq[ i ] == 'D' || seq[ i ] == 'E')
			{
				total_charge--;
			}
	}
	printf("The total charge is: %d\n", total_charge);
}




#include <stdio.h>
int main()
{
	int x[10] = {6,4,13,0,26,5,12,18,8,11};
	for(int i=0; i<10; i++)
	{
		printf("\nx[%d]=%d", i,x[i]);
	}
	return 0;
}
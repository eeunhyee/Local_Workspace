//배열 복습 및 실습

#include <stdio.h>

int main()
{
	int tarr[3][4] =
	{
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<4; i++)
		{
			printf("%d ", tarr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
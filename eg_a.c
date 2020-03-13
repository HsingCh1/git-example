#include <stdio.h>

int main(void)
{
	printf("this is by MAKE\n");
	printf("this is an example\n");
	printf("Please enter the stair steps:\n");
	int n;
	scanf("%i", &n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n*2 + 2; j++){
			if(j >= n-1 - i && j < n) printf("#");
			else if (j >= n + 2  && j < i + n + 3) printf("#");
			else printf(" ");
		}
		printf("\n");
	}
}

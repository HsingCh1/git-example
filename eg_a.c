#include <stdio.h>

int main(void)
{
	printf("this is an example\n");

	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 22; j++){
			if(j >= 9 - i && j < 10) printf("#");
			else if (j >= 12 && j < i + 13) printf("#");
			else printf(" ");
		}
		printf("\n");
	}
}

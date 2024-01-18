#include <stdio.h>
int main(){
	int s=8;
	for (int i=0;i<=s;i++){
		for (int j=0;j<s;j++){
			if ((i+j)%2==0)
				printf("#");
			else
				printf("_");
		}
		printf("\n");
	}
	return 0;
}


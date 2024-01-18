#include <stdio.h>
#include <math.h>
int main(){
	int k;
	printf("chislo, proveryaemoe na chetnost:\n");
	scanf("%d", &k);
	if (k%2==0)
		printf("chislo %d - chetnoe\n", k);
	else
		printf("chislo %d - nechetnoe\n", k);
}

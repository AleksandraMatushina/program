#include <stdio.h>
#include <math.h>
float p(float x){
	return 7*pow(x,4)-6*pow(x,3)-5*pow(x,2)+4*x+3;
}
int main(){
	for (int i;i<10;i++){
		float c=p(i);
		printf("%f\n", c);
	}
}

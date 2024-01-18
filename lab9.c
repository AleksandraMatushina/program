#include <stdio.h>
#include <math.h>
int sum(int a,int b){
	if (a+b==31)
		return 100;
    	else
    		return 1;
    }
int main(){
    int a;
    int b;
    printf("Igra - ugaday summu\n");
    printf("100 - ugadal, 1 - ne ugadal\n");
    printf("VVedi pervoe chislo\n");
    scanf("%d",&a);
    printf("VVedi vtoroe chislо\n");
    scanf("%d",&b);
    printf("%d\n",sum(a,b));
    return 0;
}



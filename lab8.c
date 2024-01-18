#include <stdio.h>
#include <math.h>
long int factorial(int a){
if (a==1)
    return 1;
if (a>1)
    return a*factorial(a-1);
	}
int main(){
printf("Nahojdenie factoriala\n");
int a;
printf("Vvedi chislo\n");
scanf("%d",&a);
printf("%d! = %ld\n",a,factorial(a));
return 0;
}


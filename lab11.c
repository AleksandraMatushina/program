#include <stdio.h>
long int factorial(int a){
    if (a==1)
    	return 1;
    if (a>1){
    	long int res=1;
    for (int i=1;i<=a;i++)
    	res*=i;
    return res;
    }
}
int main(){
    int a;
    printf("Vvedi chislo\n");
    scanf("%d",&a);
    printf("%d! = %ld\n",a,factorial(a));
    return 0;
}


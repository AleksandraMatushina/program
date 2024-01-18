#include <stdio.h>
#include <math.h>
int main(){
        float  a,b,c,d,x1,x2;
        printf("a*x^2+b*x+c=\n");
        printf("a=");
        scanf("%f", &a);
        printf("b=");
        scanf("%f", &b);
        printf("c=");
        scanf("%f", &c);
	float t0,t1,t2,delta10,delta21, delta2,t,j;	
       	t0=c;
	t1=a+b+c;
	t2=a*4+b*2+c;
	delta10=t1-t0;
	delta21=t2-t1;
	delta2=delta21-delta10;
	printf("t(0)=");
	printf("%f\n",t0);
	printf("t(1)=");
        printf("%f\n",t1);
	printf("t(2)=");
        printf("%f\n",t2);
	printf("delta10=");
        printf("%f\n",delta10);
	printf("delta21=");
        printf("%f\n",delta21);
	printf("delta2=");
        printf("%f\n",delta2);
	j=delta21;
	t=t2;
	for (int x=3;x<101;x++){
		j+=delta2;
		t+=j;
		printf("T(%d)=%lf\n",x,t);
	}
	return 0;
}

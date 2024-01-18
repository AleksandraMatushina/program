#include <stdio.h>
#include <math.h>
int main(){
	float  a,b,c,d,x1,x2;
	printf("a*x^2+b*x+c=0\n");
	printf("a=");
	scanf("%f", &a);
	printf("b=");
        scanf("%f", &b);
	printf("c=");
        scanf("%f", &c);
	d=pow(b,2)-4*a*c;
	if( a==0 && b!=0 && c!=0){
		x1=-c/b;
		printf("uravnenie imeet 1 koren x=%f\n",x1);
	}
	else if (b==0 && a!=0 && c!=0){
		if ((-c/a)>=0){
                	x1=-sqrt(-c/a);
			x2=sqrt(-c/a);
               		printf("uravnenie imeet 2  kornya x1=%f x2=%f\n",x1, x2);
		}
		else
			printf("net resheniy\n");
        }
	else if ((b!=0 && a==0 && c==0)||(a!=0 && b==0 && c==0)){
                x1=0;
                printf("uravnenie imeet 1  koren x1=%f\n",x1);
        }
	else if (a==0 && b==0 && c==0){
		printf("beskonechnoe chislo resheniy\n");
	}
	else if (a==0 && b==0 && c!=0) 
                printf("net resheniy\n");

	else {
		if (d==0){
			x1=-b/(2*a);
			printf("uravnenie imeet 1 koren x=%f\n",x1);
		}
		else if (d>0){
			x1=(-b+sqrt(d))/(2*a);
			x2=(-b-sqrt(d))/(2*a);
			printf("uravnenie imeet 2 korenya x1=%f x2=%f\n",x1,x2);
			}
		else if (d<0)
                	printf("net resheniy\n");
	}
	return 0;
}
	

#include <stdio.h>
int main(){
double a,b,c;
printf("Input the lengths of the sides of the triangle:");
scanf("%lf %lf %lf",&a,&b,&c);
if(a<b+c&&b<a+c&&c<a+b){
	if(a==b||b==c||c==a){
		if(a==b&&b==c&&c==a){
		printf("3 (equilateral)\n");
		}
		else{
		printf("2 (isosceles)\n");
		}
	}
	else{
	printf("1 (scalene)\n");
	}
}
else{
printf("0 (not a valid triangle)\n");
}
return(0);
}

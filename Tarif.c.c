#include <stdio.h>
int main() {
	float a,b,c,nilai;
	scanf("%f %f %f",&a,&b,&c);
	nilai=(a+b+c)/3;
	if (nilai<30) printf("%.2fKURANG",nilai);
	else if (nilai<60) printf("%.2fCUKUP",nilai);
	else printf("%.2fBAIK",nilai);
	return 0;
}

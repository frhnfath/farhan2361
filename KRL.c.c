#include <stdio.h>
int main() {
	int min,k,s,maks;
	int tarif,n;
	scanf("%d %d %d %d",&min, &k, &s, &maks);
	scanf("%d",&n);
	if (k<=n) tarif=min+(n-k)*s;
	else tarif=min;
	if (tarif>maks) tarif=maks;
	printf("%d\n",tarif);
	return 0;
}

#include <stdio.h>
int main() {
	int menit,jam,tarif;
	scanf("%d",&menit);
	if (menit<60) tarif=2000;
	else if (menit<=420) {
		jam=menit/60;
		tarif=2000+(jam*1000);
	}
	else tarif=8000;
	printf("%d\n",tarif);
	return 0;
}
	

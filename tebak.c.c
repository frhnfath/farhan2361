#include <stdio.h>
int main() {
	float menit,cuan;
	int viewer;
	scanf("%f %d",&menit,&viewer);
	if (viewer<10000) printf("Tidak ada bayaran\n");
	else if (menit<=5) {
		cuan=(viewer/10000);
		printf("%.1f dollar\n",cuan);
	}
	else if (menit<=15) {
		cuan=(viewer/10000)*2.5;
		printf("%.1f dollar\n",cuan);
	}
	else {
		cuan=(viewer/10000)*3.5;
		printf("%.1f dollar\n",cuan);
	}
	return 0;
}

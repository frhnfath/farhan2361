#include <stdio.h>
int main() {
	int a,b,c,n;
	scanf("%d %d %d",&a,&b,&c);
	scanf("%d",&n);
	if (b<c) {
		 if (n==1) printf("benar\n");
		 else printf("salah\n");
	 }
	else if (c<a) 
		{if (n==-1) printf("benar\n");
		else printf("salah\n");
	}
	else {
		if (n==0) printf("benar\n");
		else printf("salah\n");
	}
	return 0;
}
	

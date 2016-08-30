#include <stdio.h>
#include <conio.h>

int a(int n) {
	if (n==0 || n==1) return 1;
	else return 2*a(n-1)+3*a(n-2);
}

main() {
	int n;
	printf("Nhap n: "); scanf("%d",&n);
	printf("Gia tri cua a(%d) la %d", n, a(n));
	getch;
}

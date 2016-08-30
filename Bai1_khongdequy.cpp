#include <stdio.h>
#include <conio.h>

main() {
	int n, a[500], i;
	printf("Nhap n: "); scanf("%d",&n);
	a[0]=1; a[1]=1;
	
	for (i=2;i<=n;i++) 
	{
		a[i]=2*a[i-1]+3*a[i-2];
	}
	
	printf("Gia tri cua a(%d) la %d.", n, a[n]);
	getch;
}

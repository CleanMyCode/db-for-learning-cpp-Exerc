#include<stdio.h>
#include<conio.h>
#include<math.h>

#define Max 100 //So phan tu toi da cua Stack

//Khai bao Stack
struct Stack
{
    int Top; //Dinh Top
    int Data[Max]; //Mang cac phan tu
};

//khoi tao Stack rong
void Khoi_tao(Stack &S)
{
    S.Top = 0; //Stack rong khi Top la 0
}

//kiem tra Stack rong
int isEmpty(Stack S)
{
    return (S.Top == 0);
}

//kiem tra Stack day
int isFull(Stack S)
{
    return (S.Top == Max);
}

//them phan tu vao Stack
void Push(Stack &S, int x)
{
    if (!isFull(S))
    {
		S.Data[S.Top] = x; //Gan du lieu
        S.Top ++; //Tang Top len 1
    }
}

//Xoa phan tu khoi Stack
int Pop(Stack &S)
{
    if (!isEmpty(S))
    {
        S.Top --; //Giam Top
        return S.Data[S.Top]; //Lay du lieu tai Top
	    }
}

//Ham de nhap cac phan tu cho Stack
void Nhap(Stack &S)
{
    int n;
    int x;
    do
    {
        printf("Nhap so phan tu : ");
        scanf("%d",&n);
    } while (n>Max || n<1);

    for (int i=0; i<n; i++)
    {
        printf("Nhap phan tu thu %d : ", i+1);
        scanf("%d",&x);
        Push(S,x);
    }
}

//Ham in cac phan tu cua Stack ra man hinh
void In(Stack S)
{
//    printf("\nCac phan tu cua stack la : \n");
	for (int i=S.Top-1; i>=0; i--)
        printf("%5d", S.Data[i]);
    printf("\n");
}

main()
{
	Stack S,K;
	int n;
	Khoi_tao(K);
	Khoi_tao(S);
	Nhap(S);
    printf("\nCac phan tu cua stack la : \n");
	In(S);

	//Lay ra phan tu thu n
	printf("Nhap phan tu muon xoa trong day: n=  "); scanf("%d",&n);

	while(S.Top>n) Push(K,Pop(S));
	Pop(S);
	while(!isEmpty(K)) Push(S,Pop(K));
    printf("\nCac phan tu cua stack hien tai la : \n");
	In(S);
	In(K);
	getch();
	return 0;
}

// khai báo hằng số 
#define MAX 100
#define TAB '\t'

typedef int DaySo[MAX];
// khai báo nguyên mẫu hàm
void XoaPhanTu(DaySo a, int &n, int vt);
void ChenPhanTu(DaySo a, int &n, int x, int vt);
bool ktsoduong(int n);
void  soduongtang(DaySo a, int n);
void HoanVi(int &x, int &y);
int   demsoluong3chuso( DaySo a ,int n);
int  xuat_VTcuoi_NT(DaySo a, int n);
void xuatchuso(DaySo a, int n);
int  xuat_VTcuoi_NT(DaySo a, int n);
bool ktsonguyento(int n);
void xuatmang(DaySo a, int n);
void nhapmang(DaySo a, int n)
{

	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void xuatmang(DaySo a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << TAB;
	}
}

bool ktsonguyento(int n)// kt so nguyen tố trả về 0 hoặc 1

{

	if (n<2)
	{
		return 0;
	}
	else
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
		{
			return 0;

		}
	}
	return 1;

}

int  xuat_VTcuoi_NT(DaySo a, int n)
{
	int i = 0;
	for (i = n - 1; i >= 0; i--) // vì tìm cuối cùng nên kt mảng giảm dần
	{
		if (ktsonguyento(a[i]) == 1)// nếu kt đúng 
			return a[i];// thì xuất ra luôn số đó 
	}
	return -1;
}

int   demsoluong3chuso(DaySo a, int n)
{
	int dem = 0;
	for (int i=0; i < n; i++)
	{
		if (a[i]>99 && a[i] < 1000)
		{
			dem++;
		}
	}
	return dem;
}

bool ktsoduong(int n)

{
	for (int i = 0; i <= n; i++)

	{
		if (n % i == 0)
		{
			return 1;
		}
		else
			return 0;
	}
	return 1;

}

void HoanVi(int &a, int &b)
{
	int tam = a;
	a= b;
	b = tam;
}


void soduongtang(DaySo a, int n)

{
	int mc;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{

			mc = (a[i]>0 && a[j]>0 && a[i] > a[j]);
			{
				if (mc)
				{
					HoanVi(a[i], a[j]);
				}
			}
		}
	}

}

void ChenPhanTu(DaySo a, int &n, int x, int vt)
{
	int i;
	for (i = n; i > vt; i--)
		a[i] = a[i - 1];

	a[vt] = x;
	n = n + 1;
}
void XoaPhanTu(DaySo a, int &n, int vt)
{
	int i;
	for (i = vt; i < n - 1; i++)
		a[i] = a[i + 1];
	n = n - 1;
}



		


	




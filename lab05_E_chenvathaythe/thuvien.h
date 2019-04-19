// khai báo hằng số 
#define MAX 100
#define TAB '\t'

typedef int DaySo[MAX];
// khai báo nguyên mẫu hàm
void chenXvaoY(DaySo a, int n, int y, int x);
bool songuyento(int n);
int PhanTuDauTien(DaySo a, int n, int x);
int  phantumax(DaySo a, int &n);
void themx_vaoa(DaySo a, int &n, int x, int k);
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

void themx_vaoa(DaySo a, int &n, int x, int k)
{
	for (int i = n - 1; i >= k; i--)
	{
		a[i + 1] = a[i];


	}
	a[k] = x;
	n++;
	
}

int  phantumax( DaySo a, int &n)
{
	int vtmax = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] >= vtmax)
			
		vtmax = a[i];

	}
	return vtmax;
}

int PhanTuDauTien(DaySo a, int n, int x)
{
	int vt = 0;
	for (int i = 1; i<n; i++)
		if (a[i] == x)
		{
			vt = i;
			break;
		}
	return vt;
}

void ChenBatKy(DaySo a, int &n, int x, int vt)
{
	for (int i = n - 1; i>vt - 1; i--)
		a[i + 1] = a[i];
	a[vt] = x;
	n++;
}

bool songuyento(int n)
{
	if (n < 2)
	{
		return 0;

	}
	for (int i = 2; i < sqrt(n); i++)
	{
		if (n%i == 0)
			return 0;

	}
	return 1;
}

void chenXvaoY(DaySo a, int n,int y,int x)
{
	
	int vt = 0;
	int t = 0;
	for (int i = 0; i < n; i++)
	
		if (a[i] == y)
		{
			t = 1;;
			vt = i;
			ChenBatKy(a, n, x, vt + 1);
			
		}
		if (t == 0)
			ChenBatKy(a, n, x, 0);
		
	
}

int giatrimin(DaySo a , int n)
{
	int vtmin = a[0];

	for (int i = 0; i < n; i++)
	{ 
		if (vtmin > a[i])
		{
			vtmin = a[i];

		}
	}
	return vtmin;
}

void thay_xvao_min(DaySo a, int n,int x)
{
	int min;
	
	min = giatrimin(a, n);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == min)
		{
			a[i] = x;

		}
	 }

}



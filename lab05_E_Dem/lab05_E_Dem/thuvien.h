// khai báo hằng số 
#define MAX 100
#define TAB '\t'

typedef int DaySo[MAX];
// khai báo nguyên mẫu hàm
int demsochinhphuong(DaySo a, int n);
bool KT_sochinhphuong(int n);
int demsoluong3chuso(DaySo a, int n);
int soluongnamngoai_min_max(DaySo a, int n);
void xuatmang(DaySo a, int n);
int  solan_X_xuathien(DaySo a, int n);
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

int demsoluong3chuso(DaySo a, int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{

		if (a[i] > 99 && a[i] < 1000)
		{
			dem++;
		}
	}
	return dem;
}

int soluongnamngoai_min_max( DaySo a , int n)
{
	int x = 0;
	int y=0;
	int dem = 0;
	cout << "\ngia tri min :";
	cin >> x;
	cout << "\ngia tri max : ";
	cin >> y;
	cout << "\nSo luong nam ngoai [ " << x << "..." << y << " ] cho truoc la : ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] < x|| a[i]>y)
		{
			dem++;
		}

   }
	return dem;
}
bool KT_sochinhphuong(int n)

{
	int scp = sqrt(n);
	return (scp*scp == n);
	

}

int demsochinhphuong(DaySo a, int n)

{
	int dem = 0;
	for (int i=0;i<n;i++)
	if (KT_sochinhphuong (a[i]))
	{
		
		dem++;
	}
	return dem;
}

int  solan_X_xuathien(DaySo a, int n )
{
	int x;
	cout << "\nNhap X can tim : = ";
	cin >> x;
	int dem = 0;
	for (int i=0; i< n;i++)
	{
		if (a[i] == x)
			dem++;
	}
	return dem;
}


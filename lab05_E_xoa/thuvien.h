// khai báo hằng số 
#define MAX 100
#define TAB '\t'

typedef int DaySo[MAX];
// khai báo nguyên mẫu hàm
void xuatmang(DaySo a, int n);
void xoavtxchotruoc(DaySo a, int &n, int x);
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

void xoavtxchotruoc(DaySo a, int &n, int x)
{
	for (int i = x+1 ; i < n; i++)
	{
		a[i - 1] = a[i];

	}
	n--;
}



void xoapt_dautien(DaySo a, int &n, int x)
{
	for (int i = 0; i<n; i++)
		if (a[i] == x)
		{
			for (; i<n; i++)
				a[i] = a[i + 1];
		}
	n--;
}

void xoa1ptx(DaySo a, int &n, int vt)
{
	for (int i = vt; i < n; i++)
	{
		a[i] = a[i + 1];

	}
	n--;
}
void xoacacpttrungx(DaySo a, int &n,int x)
{
	for (int i = 0; i < n; i++)
	{
		if ((a[i]) == x)
		{
			xoa1ptx(a, n, i);
		     i--;
				
		}
	}

}
void xoavt(DaySo a, int &n, int vt)
{
	for (int i = vt + 1; i < n; i++)
	{
		a[i - 1]=a[i];

	}
	n--;
}
void xoacacpttrung(DaySo a, int &n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] == a[j])
				xoavt(a, n, j);
			i--;
		}
	}

}
void xoacacptmix_max(DaySo a, int &n, int x,int y)
{
	int dk;
	int vt;
	for (int i = 0; i < n; i++)
	{
		dk = ((a[i]) < x)||(a[i]>y) ;
		{
			if (dk)
				a[i - 1] = a[i];
			

		}
	}
	n--;
}

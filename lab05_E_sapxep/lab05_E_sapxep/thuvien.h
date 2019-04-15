// khai báo hằng số 
#define MAX 100
#define TAB '\t'

typedef int DaySo[MAX];
// khai báo nguyên mẫu hàm
bool kt_songuyento(int n);
void sntdautang_soconlaigiam(DaySo a, int n);
void soledautang_sochangiamcuoi(DaySo a, int n);
void khongdau_amgiua_duongcuoi(DaySo a, int n);
void so0cuoimang_sokhac_dau_tang(DaySo a, int n);
void soduongtang(DaySo a, int n);
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
	for (int i = 0; i <  n; i++)
	{
		cout << a[i] << TAB;
	}
}

void hoanvi(int &a, int &b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;

}

void soduongtang(DaySo a, int n)
{
	
	int dk;
	for(int i=0; i<n-1;i++ )
		for (int j = i + 1; j < n; j++)
		{
			dk = ( a[i] >= 0 && a[j] >= 0 && a[i] > a[j]);
			if (dk)
				hoanvi(a[i], a[j]);

		}
	
}

void so0cuoimang_sokhac_dau_tang(DaySo a, int n)
{
	int dk;
	int tem;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			dk = (a[i] > a[j]);

			if (dk)
				hoanvi(a[i], a[j]);
		}
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] == 0)
			{
				hoanvi(a[i], a[j]);

			}
		}
	}
}


void khongdau_amgiua_duongcuoi(DaySo a , int n)
{
	int dk;
	 
	for (int i = n - 1; i > 0; i--)
	{
		for (int j = i - 1; j >= 0; j--)
		{
			dk = (a[i] < 0 && a[j] < 0 && a[i] > a[j]) ||
				(a[i] == 0 && a[j] != 0) || (a[i] < 0 && a[j]>0) ||
				(a[i] > 0 && a[j] > 0 && a[i] < a[j]);
			if (dk)

				hoanvi(a[i], a[j]);
		}
	}
}

void soledautang_sochangiamcuoi(DaySo a, int n)

{
	int dk;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			dk = (a[i] % 2 == 0 && a[j] % 2 == 0 && a[i] < a[j]) ||
				(a[i] % 2 != 0 && a[j] % 2 != 0  && a[i] > a[j]) ||
				(a[i] % 2 == 0 && a[j] % 2 != 0);
			if (dk)
				hoanvi(a[i], a[j]);
		}
	}
}

bool kt_songuyento(int n)
{

	if (n < 2)
		return 0;
	else
	

		for (int i = 2; i <= sqrt(n); i++)
		{

			if (n%i == 0)
				return 0;
		}
	
	return 1;

}


void sntdautang_soconlaigiam(DaySo a, int n)
{
	int dk;
	for (int i = 0; i < n - 1; i++)
	  {
		for (int j = i + 1; j < n; j++)
    	{
			dk = (kt_songuyento(a[i]) == 1 && kt_songuyento(a[j]) == 1 && a[i] > a[j]) ||
				 (kt_songuyento(a[i]) == 0 && kt_songuyento(a[j]) == 0 && a[i] < a[j]) ||
				 (kt_songuyento(a[i]) == 0 && kt_songuyento(a[j]) == 1);
				if (dk)
				
					hoanvi(a[i], a[j]);
			}
		}
 }
// khai báo hằng số 
#define MAX 100
#define TAB '\t'

typedef int DaySo[MAX];
// khai báo nguyên mẫu hàm

int soduong_min(DaySo a, int n);
int soammax(DaySo a, int n);
int  xuat_VTcuoi_NT(DaySo a, int n);
bool ktsonguyento(int n);
void xuatmang(DaySo a, int n);
int PT_Xuathien_nhieu(DaySo a,  int n);
int  tim_PT_min(DaySo a, int n);
void nhapmang( DaySo a, int n)
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

bool ktsonguyento( int n)// kt so nguyen tố trả về 0 hoặc 1

{

	if(n<2)
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
	for (i=n - 1; i >= 0; i--) // vì tìm cuối cùng nên kt mảng giảm dần
	{
		if (ktsonguyento(a[i]) == 1)// nếu kt đúng 
			return a[i];// thì xuất ra luôn số đó 
	}
	return -1;
}

int  PT_Xuathien_nhieu(DaySo a, int n)

{
	int dem = 1;
	int max = 0;

	// vòng lặp duyệt mảng a
	for (int i = 0; i < n; i++)
	{
			if ( a[i]==a[i+1] )
			{
				dem++;
			
			 if (dem > max)
			
				max = dem;
			}
			else 
				dem =  1;
		}
	return max;
	}

int tim_PT_min( DaySo a , int n)
{
	
	int vtmin = 0;
	int min = a[0];
 	for (int i=0;i<n-1;i++)
	{
		if(a[i]<min)
		{
			min = a[i];
			vtmin=i;
			
		}
	}
	return vtmin;
}

int soammax(DaySo a, int n)
{
	int vtsoam = 0;
	int max = a[0];
	
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0 && a[i] > max)
		{
			max = a[i];
			vtsoam = i;
		}

	}
	return vtsoam;
}

int soduong_min(DaySo a, int n)

{
	int vtsoduong = 0;
	int min = a[0];

	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0, a[i] < min)
		{
			min = a[i];
			vtsoduong = i;
		}
		
	}
	
	return vtsoduong;
}
	
	
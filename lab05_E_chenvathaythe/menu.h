int chonchucnang(int somenu);

void xuatmenu()
{
	cout << "==============CHON CHUC NANG=================" << endl;
	cout << "0: Thoat khoi chuong trinh " << endl;
	cout << "1:Chen phan tu x vao mang a tai vi tri cho truoc " << endl;
	cout << "2:Chen phan tu x vao sau phan tu lon nhat (dau tien tim duoc) trong mang  " << endl;
	cout << "3:Chen phan tu x vao truoc so nguyen to dau tien trong mang." << endl;
	cout << "4:Chen phan tu x vao sau moi phan tu y cho truoc.  " << endl;
	cout << "5:Thay the gia tri nho nhat bang gia tri x cho truoc " << endl;
	cout << "6: xem kich thuoc mang." << endl;

}

int chonchucnang(int somenu)

{
	int stt;
	for (; ;)
	{
		system("CLS");
		xuatmenu();
		cout << "chon 1 chuc nang khac 0 (0,..., " << somenu << ") nhap so chuc nang : = " << endl;
		cin >> stt;
		if (0 <= stt && stt <= somenu)
			break;

	}
	return stt;
}


void xulimenu(int menu, DaySo a, int n)
{
	int kq;
	int x,y, k;
	int t, vt;
	int nt;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "0: Thoat khoi chuong trinh" << endl;
		break;
	case 1:

		cout << "1:Chen phan tu x vao mang a tai vi tri cho truoc  " << endl;
		system("CLS");
		cout << " mang hien hanh: ";
		xuatmang(a, n);
		cout << "\n nhap gia tri x: =";
		cin >> x;
		cout << " \nNhap vi tri can chen : = ";
		cin >> k;
		themx_vaoa(a, n, x, k);
		cout << "\mang sau khi nhap la : ";
		xuatmang(a, n);
		break;
	case 2:
		system("CLS");
		cout << "2:Chen phan tu x vao sau phan tu lon nhat (dau tien tim duoc) trong mang  " << endl;
		cout << "\n nhap gia tri x: =";
		cin >> x;
		t = phantumax(a, n);
		vt = PhanTuDauTien(a, n, t);
		cout << "\mang sau khi nhap la : ";
		xuatmang(a, n);
		cout << "\nmang sau khi chen la :";
		ChenBatKy(a,n, x, vt+1 );//chen sau 
		xuatmang(a, n);
		break;
	case 3:

		cout << "3: Chen phan tu x vao truoc so nguyen to dau tien trong mang " << endl;
		system("CLS");
		for (int i = 1; i < n; i++)
		{

			if (songuyento(a[i]))
				vt = i;
			break;
		}
		cout << "\n nhap gia tri x: =";
		cin >> x;
		cout << " mang hien hanh: ";
		xuatmang(a, n);
		cout << "\nmang sau khi chen la :";
		ChenBatKy(a, n, x, vt);
		xuatmang(a, n);
		break;
	case 4:
		cout << "4:Chen phan tu x vao sau moi phan tu y cho truoc. " << endl;
		system("CLS");
		cout << "\nNhap y :";
		cin >> y;
		cout << "\nNhap x can chen vao : ";
		cin >> x;
		cout << " mang hien hanh: ";
		xuatmang(a, n);
	    cout << "\nmang sau khi chen la :";
		chenXvaoY(a, n, y, x);
		xuatmang(a, n);
		break;
	case 5:
		cout << "5: Thay the gia tri nho nhat bang gia tri x cho truoc. " << endl;
		system("CLS");
		cout << "\nNhap gia tri x :=";
		cin >> x;
		cout << " mang hien hanh: ";
		xuatmang(a, n);
		thay_xvao_min(a, n, x);
		cout << "\nmang sau khi chen :";
		xuatmang(a, n);
		break;
	case 6:
		system("CLS");
		cout << "6: xem kich thuoc mang." << endl;
		cout << "mang hien hanh : ";
		xuatmang(a, n);
		break;
	}
	_getch();
}

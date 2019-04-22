int chonchucnang(int somenu);

void xuatmenu()
{
	cout << "==============CHON CHUC NANG=================" << endl;
	cout << "0: Thoat khoi chuong trinh " << endl;
	cout << "1: Xoa phan tu nam tai vi tri vt cho truoc khoi mang " << endl;
	cout << "2: Xoa phan tu x dau tien tim a " << endl;
	cout << "3: Xoa moi phan tu x trong mang a" << endl;
	cout << "4: Xoa tat ca cac phan tu trung nhau, chi giu lai 1 phan tu trong so cac phan tu trung  do" << endl;
	cout << "5: Xoa cac phan tu nam ngoai doan [min..max] cho truoc" << endl;
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
	int x;
	switch (menu)
	{
	case 1:
		cout << "1:Xoa phan tu nam tai vi tri vt cho truoc khoi mang  " << endl;
		system("CLS");
		cout << "\mang hien hanh : ";
		xuatmang(a, n);
		cout << "\nNhap vi tri x can xoa :";
		cin >> x;
		xoavtxchotruoc(a, n, x);
		xuatmang(a, n);
		break;
	case 2:
		int t;
		cout << "2: Xoa phan tu x dau tien tim a  " << endl;
		system("CLS");
		cout << "\mang hien hanh : ";
		xuatmang(a, n);
		cout << "\nNhap phantu x can xoa :";
		cin >> x;
		
		xoapt_dautien(a, n, x);
		xuatmang(a, n);
		break;
	case 3:
		int  vt;
		cout << "3:Xoa moi phan tu x trong mang a" << endl;
		system("CLS");
		cout << "\nmang hien hanh : ";
		xuatmang(a, n);
		cout << "\nNhap phantu x can xoa :";
		cin >> x;
		xoacacpttrungx(a, n, x);
		cout << "\nmang sau khi xoa :=";
		xuatmang(a, n);
		break;
	case 4:
		cout << "4:Xoa tat ca cac phan tu trung nhau,chi giu lai 1 phan tu" << endl;
		system("CLS");
		cout << "\nmang hien hanh : ";
		xuatmang(a, n);
		xoacacpttrung(a, n);
		cout << "\nmang sau khi xoa :=";
		xuatmang(a, n);
		break;
	case 5:
		int y;
		cout << "5: Xoa cac phan tu nam ngoai doan [min..max] cho truoc" << endl;
		system("CLS");
		cout << "\nmang hien hanh : ";
		xuatmang(a, n);
		cout << "\nNhap gia tri min:=";
		cin >> x;
		cout << "\nNhap gia tri max:=";
		cin >> y;
		xoacacptmix_max(a, n, x, y);
		cout << "\nmang sau khi xoa :=";
		xuatmang(a, n);
		break;
	case 6:
		system("CLS");
		cout << "6: xem kich thuoc mang." << endl;
		xuatmang(a, n);
		break;
	}
	_getch();
}
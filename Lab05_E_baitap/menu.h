int chonchucnang(int somenu);

void xuatmenu()
{
	cout << "==============CHON CHUC NANG=================" << endl;
	cout << "0: Thoat khoi chuong trinh " << endl;
	cout << "1: xem kich thuoc mang." << endl;
	cout << "2: Tim vi tri so nguyen to cuoi cung trong mang a. " << endl;
	cout << "3: Dem so luong so co 3 chu so. " << endl;
	cout << "4: Sap xep cac so duong tang dan,cac so khac giu nguyen thu tu " << endl;
	cout << "5: Chen phan tu x vao mang a tai vt cho truoc . " << endl;
	cout << "6: Xoa phan tu tai vt cho truoc khoi mang a " << endl;

}

int chonchucnang(int somenu)

{
	int stt;
	for (;;)
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
	int vt;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "0: Thoat khoi chuong trinh" << endl;
		break;
	case 1:
		system("CLS");
		cout << "1: xem kich thuoc mang." << endl;
		cout << "mang hien hanh : ";
		xuatmang(a, n);
		break;
	case 2:

		cout << "1: Tim vi tri so nguyen to cuoi cung trong mang a.  " << endl;
		system("CLS");
		cout << " mang hien hanh: ";
		xuatmang(a, n);
		kq = xuat_VTcuoi_NT(a, n);
		cout << " \nso nguyen to cuoi cung trong mang :" << kq;
		
		break;
	case 3:
		cout << "3: Dem so luong so co 3 chu so. " << endl;
		system("CLS");
		cout << " mang hien hanh: ";
		xuatmang(a, n);
		kq=demsoluong3chuso(a, n);
		cout << " so luong co 3 chu so :" << kq;
		break;

	case 4 :
		
		cout << "4: Sap xep cac so duong tang dan,cac so khac giu nguyen thu tu . " << endl;
		system("CLS");
		cout << " mang hien hanh: ";
		xuatmang(a, n);
		cout << " so duong ";
		 soduongtang(a, n);
		break;
	case 5:
		system("CLS");
		cout << "5: Chen phan tu x vao mang a tai vt cho truoc . " << endl;
		cout << "\nNhap vao phan tu can chen : ";
		cin >> x;
		cout << "\nNhap vao vi tri can chen : ";
		cin >> vt;
		ChenPhanTu(a, n, x, vt);
		cout << " mang hien hanh: ";
		xuatmang(a, n);
		break;
	case 6:
		system("CLS");
		cout << "6: Xoa phan tu tai vt cho truoc khoi mang a." << endl;
		cout << "\nNhap vao vi tri cua phan tu can xoa : ";
		cin >> vt;
		XoaPhanTu(a, n, vt);
		cout << "\nMang sau khi xoa, co kich thuoc n = " << n << "\n";
		xuatmang(a, n);
		break;
	}
	_getch();
}

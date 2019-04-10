int chonchucnang(int somenu);

void xuatmenu()
{
	cout << "==============CHON CHUC NANG=================" << endl;
	cout << "0: Thoat khoi chuong trinh " << endl;
	cout << "1: Tim vi tri so nguyen to cuoi cung trong mang a. " << endl;
	cout << "2: Tim phan tu xuat hien nhieu nhat va so lan xuat hien cua no. " << endl;
	cout << "3: Tim vi tri co gia tri nho nhat trong mang va vi tri xuat hien dau tien cua no. " << endl;
	cout << "4: Tim so am lon nhat va vi tri xuat hien cua no. " << endl;
	cout << "5: Tim so duong nho nhat va vi tri cua no. " << endl;
	cout << "6: xem kich thuoc mang." <<  endl;

}

int chonchucnang( int somenu)

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


void xulimenu(int menu, DaySo a , int n)
{
	int kq;
	
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "0: Thoat khoi chuong trinh" << endl;
		break;
	case 1:
		
		cout << "1: Tim vi tri so nguyen to cuoi cung trong mang a.  " << endl;
		
		system("CLS");
		cout << " mang hien hanh: ";
		xuatmang(a, n);
		kq = xuat_VTcuoi_NT(a, n);
		cout << " \nso nguyen to cuoi cung trong mang :" << kq;
		
		break;
	case 2:
		system("CLS");
		cout << "2: Tim phan tu xuat hien nhieu nhat va so lan xuat hien cua no. " << endl;
		system("CLS");
		cout << " mang hien hanh: ";
		xuatmang(a, n);
	
		kq= PT_Xuathien_nhieu(a, n );
		cout << " \nso  xuat hien nhieu nhat trong mang :" << kq << "lan";
		
		break;
	case 3:
	
		cout << "3: Tim vi tri co gia tri nho nhat trong mang va vi tri xuat hien dau tien cua no. " << endl;
		system("CLS");
		cout << " mang hien hanh: ";
		xuatmang(a, n);
		kq=tim_PT_min(a, n);
		cout << " \nVi tri  min trong mang = [" << kq << "]";

		break;
	case 4:
		cout << "4: Tim so am lon nhat va vi tri xuat hien cua no. " << endl;
		system("CLS");
		cout << " mang hien hanh: ";
		xuatmang(a, n);
		kq = soammax(a, n);
			cout << " \nVT so am lon nhat la vi tri thu :" << kq;
		break;
	case 5:
		cout << "5: Tim so duong nho nhat va vi tri cua no. " << endl;
		system("CLS");
		cout << " mang hien hanh: ";
		xuatmang(a, n);
		kq = soduong_min(a, n);
		cout << " \nVT so duong nho nhat la vi tri thu :" << kq;
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
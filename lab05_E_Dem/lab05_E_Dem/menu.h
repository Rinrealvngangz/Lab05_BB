
int chonchucnang(int somenu);

void xuatmenu()
{
	cout << "==============CHON CHUC NANG=================" << endl;
	cout << "0: Thoat khoi chuong trinh " << endl;
	cout << "1: Dem so luong 3 chu so " << endl;
	cout << "2: Dem so luong nam ngoai pham vi [min...max] cho truoc "<< endl;
	cout << "3: Dem so luong so chinh phuong" << endl;
	cout << "4: Dem so lan xuat lan xuat hien cua phan tu x ke tu vt cho truoc " << endl;
	cout << "5: Dem so luong cac duong chay trong day" << endl;
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
	
	switch (menu)
	{
	case 1 :
		cout << "1: Dem so luong 3 chu so " << endl;
		system("CLS");
		cout << "\mang hien hanh : ";
		xuatmang(a, n);
	kq=	demsoluong3chuso(a, n);
	cout << "\nSo luong  co 3 chu so la : " << kq;
		break;
	case 2 :
	
		cout << "2: Dem so luong nam ngoai pham vi [min...max] cho truoc " << endl;
		system("CLS");
		cout << "\mang hien hanh : ";
		xuatmang(a, n);
		kq = soluongnamngoai_min_max(a, n);
		cout << kq << endl;

		break;
	case 3 :
	
		cout << "3: Dem so luong so chinh phuong" << endl;
		system("CLS");
		cout << "\nmang hien hanh : ";
		xuatmang(a, n);
		kq = demsochinhphuong(a, n);
		cout << "\nSo luong so chinh phuong co trong mang la : " << kq;
		break;
	case 4 :
		cout << "4: Dem so lan xuat lan xuat hien cua phan tu x ke tu vt cho truoc " << endl;
		system("CLS");
		cout << "\nmang hien hanh : ";
		xuatmang(a, n);
		kq=solan_X_xuathien(a, n);
		cout << "\nSo lan x xuat hien : " << kq << " lan ";
		break;
	case 5 :
		system("CLS");
		cout << "5: Dem so luong cac duong chay trong day" << endl;
		break;
	case 6 :
		system("CLS");
		cout << "6: xem kich thuoc mang." << endl;
		xuatmang(a, n);
		break;
	}
	_getch();
}

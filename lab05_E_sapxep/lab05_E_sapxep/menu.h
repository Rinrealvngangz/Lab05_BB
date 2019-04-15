int chonchucnang(int somenu);
void xulimenu(int menu, DaySo a, int n);
void xuatmenu()
{
	cout << endl << "============== CHON CHUC NANG =============";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Sap xep so duong tang dan, cac so khac giu nguyen vi tri";
	cout << endl << "2. Sap cac phan tu sao cho so 0 nam cuoi mang, cac so khac o dau mang va tang dan";
	cout << endl << "3. Sap cac phan tu sao cho so 0 nam dau mang, so am  giua va giam dan, so duong cuoi va tang";
	cout << endl << "4. Sap cac so le nam dau mang va tang dan, cac so chan nam cuoi mang va giam dan";
	cout << endl << "5. Sap cac so nguyen to nam dau mang va tang, so con lai nam o cuoi va giam dan";
	cout << endl << "6. Xem kich thuoc mang";
	cout << endl << "===========================================";

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
	case 0:
		system("CLS");
		cout << endl << "0. Thoat khoi chuong trinh";
	case 1:
		cout << "1. Sap xep so duong tang dan, cac so khac giu nguyen vi tri" << endl;
		system("CLS");
		cout << "\mang hien hanh : ";
		xuatmang(a, n);
		 soduongtang(a, n);
		cout << "\nDay sau khi sap xep :";
		xuatmang(a, n);
		break;
	case 2:

		cout << "2. Sap cac phan tu sao cho so 0 nam cuoi mang, cac so khac o dau mang va tang dan" << endl;
		system("CLS");
		cout << "\mang hien hanh : ";
		xuatmang(a, n);
		so0cuoimang_sokhac_dau_tang(a, n);
		cout << "\nDay sau khi sap xep :";
		xuatmang(a, n);
		break;
	case 3:
		cout << endl << "3. Sap cac ohan tu sao cho so 0 nam dau mang, so am o giua va giam dan, so duong o cuoi va tang";
		system("CLS");
		cout << "\nmang hien hanh : ";
		xuatmang(a, n);
		khongdau_amgiua_duongcuoi(a, n);
		cout << "\nDay sau khi sap xep :";
		xuatmang(a, n);
		break;
	case 4:
		system("CLS");
		cout << endl << "4. Sap cac so le nam dau mang va tang dan, cac so chan nam cuoi mang va giam dan";
		cout << "\nmang hien hanh : ";
		xuatmang(a, n);
		soledautang_sochangiamcuoi(a, n);
		cout << "\nDay sau khi sap xep :";
		xuatmang(a, n);
		break;
	case 5:
	
		cout << endl << "5. Sap cac so nguyen to nam dau mang va tang, so con lai nam o cuoi va giam dan";
		system("CLS");
		cout << "\nmang hien hanh : ";
		xuatmang(a, n);
		sntdautang_soconlaigiam( a,  n);
		cout << "\nDay sau khi sap xep :";
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

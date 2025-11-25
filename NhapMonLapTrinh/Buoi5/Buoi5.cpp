#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	/*cout << "Nhap so 0 hoac 1:";
	int n;
	cin >> n;
	if (n%2 == 0) {
		cout << "So " << n << " la so chan" << endl;
	}
	else {
		cout << "So " << n << " la so le" << endl;
	}*/
	/*cout << "Nhap nam: ";
	int year;
	cin >> year;
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
				cout << year << " la nam nhuan" << endl;
	}
	else {
		cout << year << " khong phai la nam nhuan" << endl;
	}*/

	/*float x;
	cout << "Nhap diem tb: ";
	cin >> x;
	if (x < 5) {
		cout << "Rot" << endl;
	}
	else if (x < 7) {
		cout << "Trung binh" << endl;
	}
	else if (x < 8) {
		cout << "Kha" << endl;
	}
	else {
		cout << "Gioi" << endl;
	}*/
	/*int thang;
	cout << "Nhap thang: ";
	cin >> thang;
	if (thang == 1) {
		cout << "Thang " << thang << "co 31 ngay " << endl;
	}
	else if (thang == 2) {
		cout << "Thang " << thang << "co 28 ngay hoac co 29 ngay" << endl;
	}
	else if (thang == 3) {
		cout << "Thang " << thang << "co 31 ngay" << endl;
	}
	else if (thang == 4) {
		cout << "Thang " << thang << "co 30 ngay" << endl;
	}
	else if (thang == 5) {
		cout << "Thang " << thang << "co 31 ngay" << endl;
	}
	else if (thang == 6) {
		cout << "Thang " << thang << "co 30 ngay" << endl;
	}
	else if (thang == 7) {
		cout << "Thang " << thang << "co 31 ngay" << endl;
	}
	else if (thang == 8) {
		cout << "Thang " << thang << "co 31 ngay" << endl;
	}
	else if (thang == 9) {
		cout << "Thang " << thang << "co 30 ngay" << endl;
	}
	else if (thang == 10) {
		cout << "Thang " << thang << "co 31 ngay" << endl;
	}
	else if (thang == 11) {
		cout << "Thang " << thang << "co 30 ngay" << endl;
	}
	else if (thang == 12) {
		cout << "Thang " << thang << "co 31 ngay" << endl;
	}
	else {
		cout << "1 nam chi co 12 thang" << endl;
	}*/
	//1 Viết chương trình tìm số lớn nhất trong 3 số thực a, b , c?
	/*float a, b, c;
	cout << "Nhap 3 so a, b ,c: ";
	cin >> a >> b >> c;
	if (a > b && a > c) {
		cout << "So lon nhat la: " << a << endl;
	}
	else if (b > a && b > c) {
		cout << "So lon nhat la: " << b << endl;
	}
	else {
		cout << "So lon nhat la:  " << c << endl;
	}*/
	//2 Viết chương trình nhập 2 số thực, kiểm tra xem chúng có cùng dấu hay không?
	/*float a, b;
	cout << "Nhap 2 so a, b: ";
	cin >> a >> b;
	if (a > 0 && b > 0) {
		cout << " Hai so duong: " << endl;
	}
	else if (a < 0 && b < 0) {
		cout << "Hai so am: " << endl;
	}
	else {
		cout << "Hai so khac dau: " << endl;
	}*/
    //Viết chương trình giải và biện luận phương trình bậc nhất ax + b = 0?
//float a, b;
//cout << "Nhap a, b: ";
//cin >> a >> b;
//if (a == 0 && b == 0) {
//	cout << "Phuong trinh vo so nghiem: " << endl;
//}
//else if (a != 0 && b != 0 ) {
//	cout << "Phuong trinh vo nghiem: " << endl;
//}
//else {
//	cout << "Phuong trinh co 1 nghiem: " << endl;
//}
    //4 Nhập vào tháng của 1 năm. Cho biết tháng thuộc quý mấy trong năm?
//int thang;
//cout << "Nhap thang: ";
//cin >> thang;
//if (thang < 4) {
//	cout << "Quy 1: " << endl;
//}
//else if (thang < 7) {
//	cout << "Quy 2: " << endl;
//}
//else if (thang < 10) {
//	cout << "Quy 3: " << endl;
//}
//else {
//	cout << "Quy 4:" << endl;
//}
    //Viết chương trình nhập 3 cạnh của 1 tam giác, cho biết đó là tam giác gì?
float a, b, c;
cout << "Nhap a, b, c: ";
cin >> a >> b >> c;
if (a == b && b == c) {
	cout << "tam giac deu: " << endl;
}
else if (a == b || b == c || c =a) {
	cout << "tam giac can: " << endl;
}



}







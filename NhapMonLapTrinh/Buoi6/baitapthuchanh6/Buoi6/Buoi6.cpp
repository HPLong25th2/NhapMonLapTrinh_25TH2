#include <iostream>
using namespace std;
void cau1() {
	//Tính S = 1 + 2 + 3 + ... + n
	int n, tong = 0;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		tong += i;
	}
	cout << "Tong tu 1 den " << "la: " << tong << endl;
}
void cau2() {
	//Tính T = 1 x 2 x 3...x n
	int n, tich = 1, i = 1;
	cout << "Nhap n: ";
	cin >> n;
	while (i <= n)  {
		tich *= i;
		i++;
	}
	cout << "Tich tu 1 den " << "la: " << tich << endl;
}
void cau3() {
	//Tính T(x, n) = x^n
	int x, n, tich = 1;
	cout << "Nhap x, n: ";
	cin >> x >> n;
	for (int i = 1; i <= n; i++) {
		tich *= x;
	}
	cout << "Tich luy thua " << "la: " << tich << endl;
}
void cau4() {
	//Viết chương trình in ra màn hình bảng cửu chương N.
	int n;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 1; i <= 10; i++) {
		cout << n << "x" << i << "=" << n * i << endl;
	}
	
}
void cau5() {
	//Liệt kê tất cả các "ước số" của số nguyên dương n
	int n;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			cout << "uoc so " << i << endl;
		}
	}
}
void cau6() {
	int n, tong = 0;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			tong += i;
		}
	}
	cout << "Tong cac uoc so cua " << n << "la: " << tong << endl;
}
void cau7() {
	int n, tong = 0;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			tong += i;
		}
	}
	if (n == tong)
		cout << n << " la so hoan thien." << endl;
	else
		cout << n << " khong la so hoan thien." << endl;
}
void cau8() {
	int n, dem = 0;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			dem++;
		}
	}
	if (dem == 2)
		cout << n << " la so nguyen to" << endl;
	else
		cout << n << " khong la so nguyen to" << endl;
}
void cau9() {
	int n , dem = 0;
	cout << "Nhap n: ";
	cin >> n;
	cout << n;
	while (n > 0) {
		dem++;
		n /= 10;
	}
	cout << " co " << dem << " chu so" << endl;
}
void cau10() {
	int a, b;
	cout << "Nhap a, b: ";
	cin >> a >> b;
	while (a != b) {
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	cout << " UCLN: " << a << endl;
}
void cau11() {
	int sotien;
	bool timthay = false;
	cout << "Nhap so tien: ";
	cin >> sotien;
	for (int i = 0; i <= 100; i++) {
		for (int j = 0; j <= 100; j++) {
			for (int k = 0; k <= 100; k++) {
				if (i * 100000 + j * 200000 + k * 500000 == sotien) {
					timthay = true;
					cout << i << "x100000 + " << j << "x200000 + " << k << "x500000 + " << endl;
				}
			}
		}
	}
	if (timthay == false)
		cout << "Khong tim thay phuong an phu hop" << endl;
}
void cau12() {

}
int main()
{
	cau12();
}
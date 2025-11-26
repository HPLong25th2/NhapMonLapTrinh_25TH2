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

}

int main()
{
	cau6();
}
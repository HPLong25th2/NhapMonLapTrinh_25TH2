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
	//5.Viết chương trình nhập 3 cạnh của 1 tam giác, cho biết đó là tam giác gì?
//float a, b, c;
//cout << "Nhap a, b, c: ";
//cin >> a >> b >> c;
//if (a + b > c || b + c > a || a + c > b) {
//	cout << "La mot tam giac: " << endl;
//}
//else if (a == b && b == c) {
//	cout << "La mot tam giac deu: " << endl;
//}
//else if (a == b || b == c || a == c) {
//	cout << "La mot tam giac can: " << endl;
//}
//else if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
//	cout << "La mot tam giac vuong: " << endl;
//}
	//6. Viết chương trình giải phương trình bậc 2?
	/*float a, b, c;
	cout << "Nhap a, b ,c: ";
	cin >> a >> b >> c;
	if (a == 0 && b == 0 && c == 0) {
		cout << "Phuong trinh vo so nghiem: " << endl;
	}
	else if (a == 0 && b == 0 && c != 0) {
		cout << "Phuong trinh vo nghiem: " << endl;
	}
	else if (a == 0 && b != 0) {
		cout << "Phuong trinh co nghiem: " << -c / b << endl;
	}
	else {
		float d = b * b - 4 * a * c;
		if (d < 0) {
			cout << "Phuong trinh vo nghiem: " << endl;
		}
		else if (d == 0) {
			cout << "Phuong trinh co nghiem: " << -b / (2 * a) << endl;
		}
		else {
			cout << "x1 = " << (-b - sqrt(d)) / (2 * a) << endl;
			cout << "x2 = " << (-b + sqrt(d)) / (2 * a) << endl;
		}
	}*/
	//7 .Viết chương trình nhập tháng, năm. Hãy cho biết tháng đó có bao nhiêu ngày?
	/*int thang, nam;
	cout << "Nhap thang: ";
	cin >> thang;
	if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
		cout << "Thang " << thang << " co 31 ngay" << endl;
	}
	else if (thang == 2) {
		cout << "Nhap nam: ";
		cin >> nam;
		if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
			cout << "Thang " << thang << " co 29 ngay" << endl;
		}
		else {
			cout << "Thang " << thang << " co 28 ngay" << endl;
		}
	}
	else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
		cout << "Thang " << thang << " co 30 ngay" << endl;
	}
	else {
		cout << "1 nam chi co 12 thang, vui long nhap lai." << endl;
	}*/
    //8. Viết chương trình nhập vào 1 ngày ( ngày, tháng, năm). Tìm ngày kế ngày vừa nhập (ngày, tháng, năm)?
//int ngay, thang, nam;
//cout << "Nhap ngay, thang, nam: ";
//cin >> ngay >> thang >> nam;
//if (ngay == 31 && thang == 12) {
//	cout << "Ngay tiep theo: 1/1" << nam + 1 << endl;
//}
//else {
//	int ngaycuoithang;
//	if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
//		ngaycuoithang = 31;
//	else if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
//		ngaycuoithang = 30;
//	else {
//		if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
//			ngaycuoithang = 29;
//		else
//			ngaycuoithang = 28;
//	}
//	if (ngay < ngaycuoithang)
//		cout << "Ngay tiep theo la: " << ngay + 1 << "/" << thang << "/" << nam << endl;
//	else
//		cout << "Ngay tiep theo la: 1/" << thang + 1 << "/" << nam << endl;
//}
    //9. Viết chương trình nhập vào 1 ngày ( ngày, tháng, năm). Tìm ngày trước ngày vừa nhập (ngày, tháng, năm)?

    int ngay, thang, nam;
    cout << "Nhap ngay, thang, nam: ";
    cin >> ngay >> thang >> nam;
    if (ngay == 1 && thang == 1) {
        cout << "Ngay truoc do: 31/12/" << nam - 1;
    }
    else {
        int ngaytruoc;
        int thangtruoc = thang;
        int namtruoc = nam;
        if (ngay > 1) {
            cout << "Ngay truoc do la: " << ngay - 1 << "/" << thang << "/" << nam << endl;
        }
        else {
            thangtruoc = thang - 1;
            if (thangtruoc == 0) {
                thangtruoc = 12;
                namtruoc = nam - 1;
            }
            if (thangtruoc == 1 || thangtruoc == 3 || thangtruoc == 5 || thangtruoc == 7 || thangtruoc == 8 || thangtruoc == 10 || thangtruoc == 12)
                ngaytruoc = 31;
            else if (thangtruoc == 4 || thangtruoc == 6 || thangtruoc == 9 || thangtruoc == 11)
                ngaytruoc = 30;
            else {
                if ((namtruoc % 4 == 0 && namtruoc % 100 != 0) || (namtruoc % 400 == 0))
                    ngaytruoc = 29;
                else
                    ngaytruoc = 28;
            }
            cout << "Ngay truoc do la: " << ngaytruoc << "/" << thangtruoc << "/" << namtruoc << endl;
        }
    }

























void cau1()
{
	//Viết chương trình C++ để tính cước điện thoại bàn cho một hộ gia đình với các thông số như sau :

	//Phí thuê bao bắt buộc là 25 nghìn.
	//	600 đồng cho mỗi phút gọi của 50 phút đầu tiên.
		//400 đồng cho mỗi phút gọi của 150 phút tiếp theo.
		//200 đồng cho bất kỳ phút gọi nào sau 200 phút đầu tiên.
	
	int phithuebao = 25000;

	int sophut;
	cout << "Nhap so phut goi dien: ";
	cin >> sophut;
	int tongcuoc;
	if (sophut <= 50)
	{
		tongcuoc = phithuebao + sophut * 600;
	}
	else if (sophut <= 200)
	{
		tongcuoc = phithuebao + 50 * 600 + (sophut - 50) * 400;
	}
	else
	{
		tongcuoc = phithuebao + 50 * 600 + 150 * 400 + (sophut - 200) * 200;
	}
	cout << "Tong cuoc dien thoai la: " << tongcuoc << " dong" << endl;

	

}




//Viết một chương trình C++ để nhập lương nhân viên, tính thuế thu nhập và lương ròng (số tiền lương thực sự mà nhân viên đó nhận được). Với các thông số giả sử như sau (không theo luật lương, chỉ là con số giả sử để dễ tính toán):

//30 % thuế thu nhập nếu lương là 15 triệu.
//20 % thuế thu nhập nếu lương từ 7 đến 15 triệu.
//10 % thuế thu nhập nếu lương dưới 7 triệu.
#include <iostream>
using namespace std;
void cau2 ()
{

	double luong;
	cout << "Nhap luong nhan vien: ";
	cin >> luong;
	double thue;
	if (luong > 15000000)
	{
		thue = luong * 0.3;
	}
	else if (luong >= 7000000)
	{
		thue = luong * 0.2;
	}
	else
	{
		thue = luong * 0.1;
	}
	double luongrong = luong - thue;
	cout << "Thue thu nhap: " << thue << " VND" << endl;
	cout << "Luong rong: " << luongrong << " VND" << endl;
	return 0;
}
int main()
{
	void cau2()
}

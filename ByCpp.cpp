#include <iostream>
using namespace std;

int main() {
	int ArrayA[10] = { 1,3,5,7,9,0,2,4,6,8 };
	int N;
	cout << "Nhap so phan tu (nho hon 15) cho mang B, C va D: ";
	cin >> N;
	float ArrayB[14];
	float sumArrayB = 0;
	for (int i = 0; i < N; i++) {
		cout << "Gia tri thuc cua phan tu thu " << i + 1 << " cua mang B la : ";
		cin >> ArrayB[i];
		sumArrayB += ArrayB[i];
	}
	float ArrayC[14];
	float* p = ArrayC;
	for (int i = 0; i < N; i++) {
		cout << "Gia tri thuc cua phan tu thu " << i + 1 << " cua mang C la : ";
		cin >> *p;
		p++;
	}
	p = ArrayC;
	cout << "Mang C vua nhap la: ";
	for (int i = 0; i < N; i++) {
		cout << *p << ", ";
		p++;
	}
	cout << "\nGia tri trung binh cua mang B la: " << sumArrayB / N;
	float ArrayD[14];
	for (int i = 0; i < N; i++) {
		ArrayD[i] = ArrayB[i] + ArrayC[i];
	}
	return 0;
}
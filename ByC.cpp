#include <stdio.h>

int main() {
	int ArrayA[10] = { 1,3,5,7,9,0,2,4,6,8 };
	int N;
	printf("Nhap so phan tu (nho hon 15) cho mang B, C va D: ");
	scanf_s("%d", &N);
	float ArrayB[14];
	float sumArrayB = 0;
	for (int i = 0; i < N; i++) {
		printf("Gia tri thuc cua phan tu thu %d cua mang B la: ", i + 1);
		scanf_s("%f", &ArrayB[i]);
		sumArrayB += ArrayB[i];
	}
	float ArrayC[14];
	float* p = ArrayC;
	for (int i = 0; i < N; i++) {
		printf("Gia tri thuc cua phan tu thu %d cua mang C la: ", i + 1);
		scanf_s("%f", &*p);
		p++;
	}
	p = ArrayC;
	printf("Mang C vua nhap la:");
	for (int i = 0; i < N; i++) {
		printf(" %f,", *p);
		p++;
	}
	printf("\nGia tri trung binh cua mang B la: %f", sumArrayB / N);
	float ArrayD[14];
	for (int i = 0; i < N; i++) {
		ArrayD[i] = ArrayB[i] + ArrayC[i];
	}
	return 0;
}
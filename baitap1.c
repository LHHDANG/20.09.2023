#include <stdio.h>

int hcn(int a, int b);

int main() {
	int num1, num2;
	printf("\nChieu dai = ");
	scanf("%d", &num1);
	printf("\nChieu rong = ");
	scanf("%d", &num2);
	
	int ok = hcn(num1, num2);
	
	return 0;
}

int hcn(int a, int b) {
	int chuvi, dientich;
	chuvi = (a + b) * 2;
	dientich = a * b;
	
	printf("\nChu vi hcn la %d\n", chuvi);
	printf("\nDien tich hcn la %d", dientich);
}

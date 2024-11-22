#include <stdio.h>
int main(){
	float r;
	float pi = 3.14;
	float chuvi, dientich;
	//tao ra cac bien  luu chu vi, dien tich 
	printf("nhap ban kinh \n");
	scanf("%f",&r);
	// doc cac gia tri duoc nhap tu ban phim  
	chuvi = 2 * pi * r;
	dientich = pi * r * r;
	//in ra ket qua 
	printf ("chu vi la %.2f\n", chuvi);
	printf ("dien tich la %.2f\n", dientich);
	return 0;
}

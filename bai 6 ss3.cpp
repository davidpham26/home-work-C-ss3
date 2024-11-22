#include <stdio.h>
int main(){
	float canh, chieucao, dientich;
	//tao ra bien luu canh, chieu cao va dien tich 
	printf("nhap canh\n");
	//nhap va doc cac bien da tao ra 
	scanf("%f", &canh);
	printf("nhap chieu cao\n");
	scanf("%f", &chieucao);
	dientich = (chieucao * canh) / 2;
	//in ra ket qua 
	printf("dien tich la %.2f\n", dientich);
}

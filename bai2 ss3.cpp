#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    //khai bao luu bien nhiet do
    printf("Nhap nhiet do C: ");
    scanf("%f", &celsius);
	//doc gia tri nhiet do cuar user   
    fahrenheit = (celsius * 9 / 5) + 32;  
    printf("Nhiet do theo do F: %.2f\n", fahrenheit);
    return 0;
}

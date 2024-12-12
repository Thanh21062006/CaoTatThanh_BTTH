#include <stdio.h>

int main(){
	float time, luong, luongCoBan;
	printf("Moi ban nhap so gio lam viec trong thang: ");
	scanf("%f", &time);
	printf("Moi ban nhap so luong lam viec tren gio: ");
	scanf("%f", &luong);
	luongCoBan = time*luong;
	if(time>=0 && time<=160){
			printf("Luong co ban cua ban voi %.0f gio la: %.3f",time,luongCoBan);
	}

	else{
		printf("Luong co ban cua ban voi %.0f gio la: %.3f",time,luongCoBan+luongCoBan*0.1);
	}
	
	return 0; 
	
}

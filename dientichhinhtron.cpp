#include <stdio.h>
 const float PI=3.14;
int main(){
	float r;
	printf ("Nhap ban kinh hinh tron:");
	scanf("%f",&r);
	printf("Chu vi hinh tron la:%f", 2*r*PI);
	printf("\nDien tich hinh tron la:%f", PI*r*r);
	return 0;
	
}

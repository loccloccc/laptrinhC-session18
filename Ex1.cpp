#include<stdio.h>
#include<string.h>

struct sinhVien
{
	char hoten[50];
	int age ; 
	char phonenumber[20];	
};


int main()
{
	sinhVien x;
	strcpy(x.hoten,"Duong Duc Loc");
	x.age = 18 ; 
	strcpy(x.phonenumber,"0123456789");
	printf("Ho ten sinh vien : %s\n",x.hoten);
	printf("Tuoi : %d\n",x.age);
	printf("So dien thoai sinh vien la : %s\n",x.phonenumber);
	return 0 ; 
}
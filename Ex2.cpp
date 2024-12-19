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
	printf("Moi ban nhap ho va ten : ");
	fgets(x.hoten,sizeof(x.hoten),stdin);
	printf("Moi ban nhap tuoi : ");
	scanf("%d",&x.age);
	fflush(stdin);
	printf("Moi ban nhap so dien thoai :");
	fgets(x.phonenumber,sizeof(x.phonenumber),stdin);
	printf("-----------------------\n");
	printf("Ho ten : %s\n",x.hoten);
	printf("Tuoi : %d\n",x.age);
	printf("SDT : %s\n",x.phonenumber);
	return 0 ; 
}
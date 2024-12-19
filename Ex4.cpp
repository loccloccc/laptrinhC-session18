#include<stdio.h>
#include<string.h>

struct sinhVien
{
	int id;
	char hoten[50];
	int age ; 
	char phonenumber[20];	
};
int main()
{ 
	sinhVien x[5];
	for(int i = 0 ; i < 5 ; i++ )
	{
		x[i].id = i+1;
		printf("Moi ban nhap ho va ten : ");
		fgets(x[i].hoten,sizeof(x[i].hoten),stdin);
		printf("Moi ban nhap tuoi cho sinh vien : ");
		scanf("%d",&x[i].age);
		fflush(stdin);
		printf("Moi ban nhap sdt : ");
		fgets(x[i].phonenumber,sizeof(x[i].phonenumber),stdin);
		printf("-----------------\n");
	}
	printf("\n");
	printf("Danh sach sinh vien : \n");
	for(int i = 0 ; i < 5 ; i++)
	{
		printf("ID : %d\n",x[i].id);
		printf("Ho va ten : %s\n",x[i].hoten);
		printf("Tuoi : %d\n",x[i].age);
		printf("SDT : %s",x[i].phonenumber);
	}
	return 0 ; 
}
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
using namespace std;
struct DATE
{
    int d,m,y;
};
struct HS
{
    char MSHS[5];
    char Hoten[30];
    DATE Ngaysinh;
    char Diachi[50];
    char Gender[3];
    float Dtb;
};
int main()
{
    int ss;
    HS A[50];
    NhapSiSo(ss);
    NhapLop(A,ss);
    return 0;
}
void NhapSiSo(int &n)
{
    printf("Nhap si so: ");
    scanf("%d",&n);
    if(n>50)
    {
        printf("lop qua dong :(( ");
        exit(1);
    }
}
void NhapThongTinHS(HS &x)
{
    printf("Nhap ma so hoc sinh : ");
    cin.ignore();
    fgets()
}
void NhapLop(HS A[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Nhap thong tin hoc sinh %d :",i);
        NhapThongTinHS(A[i]);
    }
}
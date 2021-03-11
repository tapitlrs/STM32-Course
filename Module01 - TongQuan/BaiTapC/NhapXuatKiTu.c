/* --COPYRIGHT--,
 * Copyright (c) 2021, TAPIT Engineering Co., Ltd.
 * https://tapit.vn
 *
 ******************************Toggle USER LED**********************************
 *  Description: The program imports and exports a character
 *		
 *  Version:  	1.0
 *  Author: 	Hang Tran
 *  Release: 	March 7, 2021
 *******************************************************************************
 */

#include "stdio.h" /* Thu vien ho tro nhap xuat */

char character = 0; //Luu ky tu duoc nhap vao
char buff[11] = {0}; //Mang chua cac ky tu hop le
int count = 0; //So lan nhap hop le

int main() //Chuong trinh main
{
	while(1) //Vong lap vo han
	{
		printf("Nhap mot ky tu: "); //Cau lenh in len man hinh
		scanf("%c", &character); //Nhan ky tu va luu vao bien character
		fflush(stdin); //Xoa bo dem stdin trong truong hop nguoi dung nhap > 1 ky tu cung mot luc
		if(('a' <= character) && (character <= 'z')) //Neu ky tu hop le
		{
			buff[count++] = character; //Luu ky tu vao mang de thuc hien in tat ca ky tu vua nhap
			printf("Nhap lan thu %d. Ky tu vua nhap: %c\n",count, character-32); //Cau lenh in len man hinh so lan da nhap
																				 //va ky tu in hoa tuong ung
			if(count == 10) //Neu da nhap 10 ky tu hop le
			{
				printf("Chuoi vua nhap: %s\n",buff);
				int i;
				for(i = 0; i < 10; i++) //Xoa bo dem chua cac ky tu hop le
				{
					buff[i] = 0;
				}
				count = 0; //Dua bien dem ve lai gia tri 0
			}	
		}
		else
		{
			if(character == 'T') //Neu ky tu duoc nhap la T in hoa
			{
				printf("TAPIT\n"); //thi thuc hien in len man hinh "TAPIT"
			}
			else //Tat ca cac truong hop con lai
			{
				printf("Nhap khong hop le. Vui long nhap lai\n"); //Cau lenh in len man hinh
			}			
		}
	}
}

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
	int n;
    int arr[100];
    int Prime = 1; 
    int primeFound = 0;
	int choice;
	int count;
	
	do{
		printf("========MENU========\n");
		printf("1.Nhap phan tu va gan gia tri\n");
		printf("2.in ra cac gia tri trong mang\n");
		printf("3.So luong cac so nguyen to co trong mang\n");
		printf("4.Tim gia tri nho thu hai trong mang\n");
		printf("5.Them phan tu moi vao vi tri ngau nhien\n");
		printf("6.Xoa phan tu\n");
		printf("7.Sap xep mang theo thu tu giam dan\n");
		printf("8.Tim phan tu trong mang\n");
		printf("9.Xoa phan tu trung lap\n");
		printf("10.Dao nguoc thu tu cac phan tu co trong mang\n");
	
 printf("Moi ban dua ra lua chon: ");
	scanf("%d",&choice);
	switch(choice){
		case 1:{
			printf("Nhap so phan tu cho mang: ");
			scanf("%d",&n);
			printf("Nhap cac phan tu cua mang: \n");
			for(int i=0;i<n;i++){
				printf("arr[%d]:",i);
				scanf("%d",&arr[i]);
			}
			break;
	}
			case 2:{
				for(int i=0;i<n;i++)
				{
					printf("arr[%d]=%d\n",i,arr[i]);
				}
				printf("\n");
			break;
	}
			case 3:{int dem=0;
			 printf("So luong so nguyen to trong mang:\n");
                for (int i = 0; i < n; i++) {
                   int count=0;
                    int num = arr[i];
                   
                    
                        for (int j = 2; j <= sqrt(num); j++) {
                            if (num % j == 0) {
								count++;  
							 }   
						

if(count==0){	
	int tong=0;
for(int k=0;k<=count;k++)
{

	tong+=k;

}
dem+=tong;
		printf("%d",dem);				}
         }
		}
		printf("\n");
		
			break;
	}
			case 4:{
					printf("So nho thu 2 trong mang la: ");
			for(int i=0;i<n;i++)
			{ if(arr[i]>arr[i+1]){
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
					printf("%d ",i);
			}
				
			}
			printf("\n");
			break;
	}
			case 5:{ int newValue;
                printf("Nhap gia tri can them: ");
                scanf("%d", &newValue);
                arr[n] = newValue;
               n=rand()%n+1;
                printf("Da them phan tu vao mang.\n");
                break;
	}
			case 6:{ int del;
                printf("Nhap vi tri can xoa (0 - %d): ", n - 1);
                scanf("%d", &del);
                if (del >= 0 && del < n) {
                    for (int i = del; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Da xoa phan tu tai vi tri %d.\n", del);
                } else {
                    printf("Vi tri khong hop le.\n");
                }
                   
			break;
	}
			case 7:{
				for (int i = 1; i < n; i++) {
                        int key = arr[i];
                        int j = i - 1;
                        while (j >= 0 && arr[j] > key) {
                            arr[j+1] = arr[j];
                            j--;
                        }
                        arr[j] = key;
                         
                    }
                    printf("Mang da giam dan.\n");
                    for(int i=0;i<n;i++)
                    {
                    	printf("%d",arr[i]);
					}
					printf("\n");
			break;
	}
			case 8:{
			int x;
			printf("Nhap gia tri can tim: ");
                scanf("%d", &x);
                {
                    int left = 0, right = n - 1;
                    int found = 0;
                    while (left <= right) {
                        int mid = (left + right) / 2;
                        if (arr[mid] == x) {
                            found = 1;
                            break;
                        } else if (arr[mid] < x) {
                            left = mid + 1;
                        } else {
                            right = mid - 1;
                        }
                    }
                    if (found) {
                        printf("Tim thay phan tu %d trong mang.\n", x);
                    } else {
                        printf("Khong tim thay phan tu.\n");
                    }
                }
			break;
	}
			case 9:{for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++){
					if(arr[j]=arr[n]){
						arr[j]=arr[j+1];
						
					}
				}
			}
			break;
	}
			case 10:{
				for(int i=0;i<n;i++)
				{
					for(int j=0;j<n;j++)
					{
						int temp=0;
						temp=arr[j];
						arr[j+1]=arr[j];
						temp=arr[j+1];
						printf("%d",arr[j]);
						
					}
				
				}
				printf("\n");
			break;
	}
	case 0:{
		break;
	}
			default:{printf("Lua chon ko hop le!");
			break;
	}}}while(choice!=0);
	
	
	
	
	return 0;
}

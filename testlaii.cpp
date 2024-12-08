#include<stdio.h>
int main(){
	int arr[100];
	int Position, Value;
	int SSNT;
	int a=0, b=0, c=0, d=0, n, min, min1, max1, max, sum, check, Index, xoa, mid ,start, searchvalue, end, bien, repeat;
	int array[100];
	int choice;
	while(a<1){
		printf("\n---MENU---\n");
		printf("1.Nhap kich thuoc mang va phan tu mang\n");
		printf("2.In ra mang\n");
		printf("3.dem so luong so hoan hao\n");
		printf("4.Dem so luong so nguyen to\n");
		printf("5.Tim gia tri lon thu 2(Khong sap xep)\n");
		printf("6.Tim gia tri nho thu 2(Khong sap xep)\n");
		printf("7.Sap xep tang dan(Chen)\n");
		printf("8.Sap xep giam dan(chen)\n");
		printf("9.Them phan tu vao mang\n");
		printf("10.Xoa phan tu trong mang\n");
		printf("11.Tim kiem phan tu(nhi phan)\n");
		printf("12.Xoa phan tu trung lap va in phan tu dong nhat\n");
		printf("13.Sap xep so chan dung truoc so le dung sau\n");
		printf("14.Dao nguoc mang\n");
		printf("15.Thoat\n");
		printf("Nhap lua chon cua ban: ");
		scanf("%d", &choice);
		switch(choice){
			case 1://Nhap kich thuoc va cac phan tu
			while(b<1){
				printf("Nhap kich thuoc cho mang: ");
				scanf("%d", &n);
				if(n<0){
					printf("Kich thuoc khong hop le!");
				}else{
					printf("Kich thuoc hop le!");
					b++;
				}
			}
				printf("Nhap cac phan tu cho mang: ");
				for(int i=0; i<n; i++){
					printf("\narr[%d] = ", i);
					scanf("%d", &arr[i]);
				}
			break;
			case 2://In ra mang
				printf("Cac phan tu trong mang la: ");
				for(int i=0; i<n; i++){
					printf("\narr[%d] = %d", i, arr[i]);
				}
			break;
			case 3://Dem so luong so nguyen to
			{
				printf("Co so nguyen to trong mang: ");
				for(int i=0; i<n; i++){
				int SNT = arr[i];
				int KT = 1;
	                if(SNT < 2){
	                        KT = 0;
	                }else{
	                    for (int j = 2; j * j <= SNT; j++) {
	                        if (SNT % j == 0) {
	                            KT = 0;
	                            break;
	                            }
	                        }
	                    }
	
	                    if(KT){
	                       SSNT++;
	                       
	                    }
	                }
	                printf("%d", SSNT);
			}
			break;
			case 4://Dem so luong so hoan hao
				index=0;
				for(int i=0; i<n; i++){
					sum=0;
					for(int j=1; j<arr[i]; j++){
						if(arr[i]%j == 0){
							sum = sum+j;
						}
					}
					if(sum==arr[i]){
						index++;
					}
				}
			break;
			case 5://Tim gia tri lon thu 2
				max = arr[0];
				for(int i=0; i<n; i++){
					if(arr[i]>max){
						max1=max;
						max=arr[i];
					}else{
						max1=arr[i];
					}
				}
				printf("So lon tu hai trong mang la: %d", max1);
			break;
			case 6://Tim gia tri nho thu 2
				min = arr[0];
				for(int i=0; i<n; i++){
					if(arr[i]<min){
						min1=min;
						min=arr[i];
					}else{
						min1=arr[i];
					}
				}
				printf("So nho thu hai trong mang la: %d", min1);
			break;
			case 7://Them phan tu vao mang
				while(c<1){
					printf("Nhap vi tri can them: ");
					scanf("%d", &Position);
					if(Position<0 || Position>n){
						printf("Vi tri them khong hop le");
					}else{
						printf("Vi tri them hop le");
						c++;
					}
				}
					printf("Nhap phan tu muon them: ");
					scanf("%d", &Value);
					for(int i=n; i>Position; i--){
						arr[i]=arr[i-1];
					}
					arr[Position] = Value;
					n++;
					printf("Mang sau khi them la: ");
					for(int i=0; i<n; i++){
						printf("\narr[%d] = %d", i, arr[i]);
					}
			break;
			case 8://Xoa phan tu trong mang
				while(d<2){
				printf("Nhap vi tri can xoa: ");
				scanf("%d", &xoa);
				if(xoa<0 || xoa>=n){
					printf("Vi tri khong hop le");
				}else{
					printf("Vi tri xoa hop le");
					d++;
				}
			}
				for(int i = xoa; i < n-1; i++){
					arr[i]=arr[i+1];
				}
				n--;
				printf("Mang sau khi xoa la: ");
				for(int i=0; i<n; i++){
					printf("arr[%d]=%d\t", i, arr[i]);
				}
			break;
			case 9://Sap xep mang tang dan
			{
				int key;
				for(int i=1;i<n;i++){
					key=arr[i];
					for(int j=i-1;j>=0&&arr[j]>key;j--){
						arr[j+1]=arr[j];
						arr[j]=key;
						}
					}
				printf("Mang da hoan doi la: ");
				for(int i=0;i<n;i++){
					printf("%d ",arr[i]);
				}
			}
			break;
			case 10://Sap xep mang giam dan
			{
				int key;
				for(int i=1;i<n;i++){
					key=arr[i];
					for(int j=i-1;j>=0&&arr[j]<key;j--){
						arr[j+1]=arr[j];
						arr[j]=key;
						}
					}
				printf("Mang da hoan doi la: ");
				for(int i=0;i<n;i++){
					printf("%d ",arr[i]);
				}
			}
			break;
			case 11://Tim kiem phan tu(nhi phan)
					start=0;
			    	end=n;
			    	printf("Nhap phan tu can tim: ");
			    	scanf("%d",&searchvalue);
			    	while(start<=end){
			    		mid = (start+end)/2;
			    		if(arr[mid]==searchvalue){
			    			break;
						}else if (arr[mid]>searchvalue){
							end = mid-1;
						}else{
							start=mid+1;
						}
				    }
				    if(arr[mid]==searchvalue){
				    	printf("Phan tu can tim nam o vi tri %d", mid);
					}else{
						printf("Ko tim thay phan tu can tim");
					}
					printf("\n");
			break;
			case 12://Xoa phan tu trung lap va in ra phan tu doc nhat
					check=0;
			    	for(int i = 0; i<n; i++){
			    		check=0;
			    		for(int j = 0; j<repeat; j++){
			    			if(arr[i]==array[j]){
			    				check=1;
			    				break;
							}
						}
						if(!check){
							array[repeat++]=arr[i];
						}
					}
					for(int i = 0; i<repeat; i++){
						arr[i]=array[i];
					}
					n=repeat;
					printf("Mang sau khi xoa phan tu trung lap\n");
					for(int i = 0; i<n; i++){
						printf("%d ",arr[i]);
					}
					printf("\n");
			break;
			case 13://Sap xe so cahn dung troc so le dung sau
				for(int i = 0; i<n; i++){
			    		for(int j = 0; j<n-i-1 ; j++){
			    			if((arr[j]%2<arr[j+1]%2) || (arr[j]%2==arr[j+1]%2 && arr[j]>arr[j+1])){
			    				bien=arr[j];
			    				arr[j]=arr[j+1];
			    				arr[j+1]=bien;
							}
						}
					}
					printf("Mang sau khi sap xep le truoc , chan sau\n");
					for(int i = 0; i<n; i++){
						printf("%d ",arr[i]);
					}
					printf("\n");
			break;
			case 14://Dao nguoc mang
				printf("Cac gia tri trong mang\n");
					for(int i = n-1; i>=0; i--){
						printf("arr[%d]= %d\n",i,arr[i]);
			        }
			break;
			case 15://Thoat
				printf("Thoat!");
				return 0;
			break;
			default:
				printf("Khong co lua chon nay");
			break;
				
	}
	}
}

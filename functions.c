#include "functions.h"
#include <stdio.h>
#include <string.h>
//case 1 cua menu chinh
void menu1(){
	system("cls");
    int value2;  // bien luu lua chon quan ly danh muc
    int n=0;  // bien lu so luong danh muc
    Category user[100];
   do {
        system("cls");   	
        printmenu();
        printf("Moi ban nhap lua chon: ");
        scanf("%d", &value2);
        getchar();
        switch (value2) {
            case 1://hien danh sach
                system("cls");
                readfilecategory(user,&n);            
                print(user,&n);
                printf ("moi ban nhap phim bat ky de tro ve:");
				getchar();
				getchar(); 
                break;
            case 2://them danh muc
                system("cls");
                printf("moi nhap so luong muon them:");
                scanf("%d",&n);
                getchar();
                scan(user,&n);
                savefilecategory(user,&n);
                readfilecategory(user,&n); 
                check(user,&n);
                savefilecategory2(user,&n);
                readfilecategory(user,&n); 
                print(user,&n);
                printf ("moi ban nhap phim bat ky de tro ve:");
				getchar();
				getchar(); 
                break;
            case 3: //sua danh muc
                system("cls");
                readfilecategory(user,&n); 
                repair(user,&n);
                savefilecategory2(user,&n);
                readfilecategory(user,&n); 
                print(user,&n);
                savefilecategory2(user,&n);
                printf ("moi ban nhap phim bat ky de tro ve:");
				getchar();
				getchar(); 
                break;
            case 4://xoa
                system("cls");            
                readfilecategory(user,&n); 
            	erase(user,&n);
                savefilecategory2(user,&n);
                readfilecategory(user,&n);
                print(user,&n);
                printf ("moi ban nhap phim bat ky de tro ve:");
				getchar();
				getchar(); 
                break;
            case 5://tim kiem
            	system("cls");
            	readfilecategory(user,&n);
            	search(user,&n);
            	printf ("moi ban nhap phim bat ky de tro ve:");
				getchar();
				getchar();
            	break;
            case 6://sap xep
            	system("cls");
            	readfilecategory(user,&n);
            	menumini(user,&n); 
                break;
            case 7://luu file
                system("cls");
            	savefilecategory2(user,&n); 
            	printf("Luu thong tin thanh cong");
            	printf ("moi ban nhap phim bat ky de tro ve:");
				getchar();
				getchar(); 
                break;
            case 8://thoat           
                printf("Thoat\n");
                system("cls"); 
                return; 
            default:
                printf("Khong hop le\n");
                break;
       }
   } while (1);         
}
//case2 menu chinh 
void menu2(){
	system("cls");
	int value3;  // bien luu lua chon quan ly san ph?m 
    int length=0;  
    int n;
    Product count[100];
    Category user[100];
   do {
   	    system("cls");
        printmenuproduct();
        printf("Moi ban nhap lua chon: ");
        scanf("%d", &value3);
        getchar();
        switch(value3){
        	case 1://hien thi danh sach san pham
        		system("cls");
        		readfileproduct(count,&length); 
        		print2(count,&length); 
        		printf ("moi ban nhap phim bat ky de tro ve:");
				getchar();
				getchar(); 
        		break;
        	case 2://them san pham
        		system("cls"); 
        		printf ("moi ban nhap so luong san pham muon them:");
        		scanf ("%d",&length);
        		getchar();
        		readfilecategory(user,&n);
        		scanproduct(count,&length,&n,user);
        		checkproduct(count,&length); 
        		savefileproduct2(count,&length);
				readfileproduct(count,&length);  
        		print2(count,&length); 
        		printf ("moi ban nhap phim bat ky de tro ve:");
				getchar();
				getchar(); 
				break;
			case 3://sua san pham
			    system("cls");
			    readfileproduct(count,&length); 
			    repairproduct(count,&length);
			    savefileproduct2(count,&length);
				print2(count,&length); 
				printf ("moi ban nhap phim bat ky de tro ve:");
				getchar();
				getchar(); 
				break;
			case 4://xoa san pham
			    system("cls");
			    readfileproduct(count,&length); 
			    eraseproduct(count,&length);
			    savefileproduct2(count,&length);
			    print2(count,&length);
			    printf ("moi ban nhap phim bat ky de tro ve:");
				getchar();
				getchar(); 
				break;
			case 5://tim kiem san pham theo ten
				system("cls");
				readfileproduct(count,&length); 
			    searchproduct(count,&length);
			    printf ("moi ban nhap phim bat ky de tro ve:");
				getchar();
				getchar(); 
				break;
			case 6://sap xep san pham
			    system("cls");
			    readfileproduct(count,&length); 
			    menuminiproduct(count,&length);
				break;
	        case 7://loc san pham
	        	system("cls");
	        	readfileproduct(count,&length); 
	        	detect(count,&length);
	        	printf ("moi ban nhap phim bat ky de tro ve:");
				getchar();
				getchar(); 
	        	break;
			case 8://luu file
			    system("cls");
			    savefileproduct2(count,&length);
				break;
			case 9:
				printf("Thoat\n");
                return; 
            default:
                printf("Khong hop le\n");
                break;
		}
    }while(1); 
}  
//in menu quan ly san ph?m 
void printmenuproduct(){
	printf("\n-------Quan Ly San pham-------\n");
    printf("[1]. Hien thi danh sach san pham\n");
    printf("[2]. Them san pham\n");
    printf("[3]. Sua san pham\n");
    printf("[4]. Xoa san pham\n");
    printf("[5]. Tim kiem san pham\n");
    printf("[6]. Sap xep san pham theo gia tien\n");
    printf("[7]. loc san pham\n");
    printf("[8]. Luu du lieu\n");
    printf("[9]. Thoat\n");
    printf("================================\n");
} 
//menu chinh
void printfunction() {
    printf("\t QUAN LY CUA HANG\n");
    printf("================================\n");
    printf("[1]. Quan ly danh muc\n");
    printf("[2]. Quan ly san pham\n");
    printf("[3]. Dang nhap\n");
    printf("[4]. Thoat\n");
    printf("================================\n");
}
// menu quan ly danh muc
void printmenu() {
    printf("\n-------Quan Ly Danh Muc-------\n");
    printf("[1]. Hien thi danh sach danh muc\n");
    printf("[2]. Them danh muc\n");
    printf("[3]. Sua danh muc\n");
    printf("[4]. Xoa danh muc\n");
    printf("[5]. Tim kiem danh muc\n");
    printf("[6]. Sap xep danh muc theo ten\n");
    printf("[7]. Luu du lieu\n");
    printf("[8]. Thoat\n");
    printf("================================\n");
}
//them danh muc
void scan(Category *user, int *n) {
    int i;
    for (i = 0; i < *n; i++) {
        printf("Danh muc thu %d:\n", i + 1);
        printf("Moi nhap id: ");
        fgets(user[i].categoryId, 10, stdin);
        user[i].categoryId[strcspn(user[i].categoryId, "\n")] = '\0';
        printf("Moi nhap ten danh muc: ");
        fgets(user[i].categoryName,50, stdin);
        user[i].categoryName[strcspn(user[i].categoryName, "\n")] = '\0';
    }
}
//in cac danh muc ra man hinh
void print(Category *user, int *n) {
int i; 
printf("============================================\n"); 
printf("|\t     QUAN LY DANH MUC              |\n"); 
printf("============================================\n"); 
printf("| %-4s | %-10s | %-20s |\n", "STT", "ID", "TEN DANH MUC"); 
printf("============================================\n");
 for (i = 0; i < *n; i++) { 
 printf("| %-4d | %-10s | %-20s |\n", i + 1, user[i].categoryId, user[i].categoryName); 
 } 
 printf("============================================\n"); 
}
//sua danh muc
void repair(Category *user,int*n){
	char addindex[10];
	int flag=-1;
	printf ("moi ban nhap id muon sua:");
	fgets(addindex,10,stdin);
	addindex[strcspn(addindex,"\n")]='\0';
	int i;
	for (i=0;i<*n; i++){
		if(strcmp(addindex,user[i].categoryId)==0)
		{
			flag=i;
		}
	}
	if(flag==-1){
		printf("khong ton tai\n");
		return;
	}else{
		printf ("id : %s\n",user[flag].categoryId);
		printf ("danh muc : %s\n",user[flag].categoryName);
		printf ("moi ban sua ten danh muc:");
	    fgets(user[flag].categoryName,50,stdin);
	    user[flag].categoryName[strcspn(user[flag].categoryName,"\n")]='\0';
	    printf ("sua thanh cong!!\n");
	}
}
//xoa danh muc
void erase(Category *user,int*n){
	char addindex[10];
	int choice;
	int flag=-1;
	printf ("moi ban nhap id danh muc muon xoa:");
	fgets(addindex,10,stdin);
	addindex[strcspn(addindex,"\n")]='\0';
	int i;
	for (i=0;i<*n; i++){
		if(strcmp(addindex,user[i].categoryId)==0)
		{
			flag=i;
		}
	}
	if(flag==-1){
		printf("khong ton tai\n");
		return;
	}else{
		printf ("nhan 1 de xoa hoac nhan 0 de tu choi:");
		scanf ("%d",&choice);
		switch(choice){
			case 1:
				printf ("id : %s\n",user[flag].categoryId);
		        printf ("danh muc : %s\n",user[flag].categoryName);
		        for (i=flag; i<*n; i++){
			    user[i]=user[i+1];
		      }
		        (*n)--;
	             printf ("xoa thanh cong!!\n");
	             break;
	        case 0:
			     return;
			     break;
			default:
			     printf ("khong hop le!!\n");
			     break;
		}
	}
}
//tim kiem danh muc theo ten
void search(Category *user,int*n){
	char searchName[50];
	int flag=-1;
	printf("moi nhap ten tim kiem:");
	fgets(searchName,50,stdin);
	searchName[strcspn(searchName,"\n")]='\0';
	int i;
	for(i=0;i<*n;i++){
		if(strstr(searchName,user[i].categoryName)!=NULL){
			flag=i;
			break;
		}
	}
	if(flag==-1){
		printf ("khong tim thay!!\n");
		return;
	}else{
		printf("============================================\n"); 
        printf("|\t     QUAN LY DANH MUC              |\n"); 
        printf("============================================\n"); 
        printf("| %-4s | %-10s | %-20s |\n", "STT", "ID", "TEN DANH MUC"); 
        printf("============================================\n");
        printf("| %-4d | %-10s | %-20s |\n", flag + 1, user[flag].categoryId, user[flag].categoryName); 
        printf("============================================\n");
	}
}
//menu lua chon sap xep
void menumini(Category *user,int*n){
	int choice;
	int i,j;
	Category temp;
	do{
		printf("\t SAP XEP DANH MUC\n");
        printf("================================\n");
        printf("[1]. A-Z\n");
        printf("[2]. Z-A\n");
        printf("[3]. Thoat\n");
        printf("================================\n");
        printf ("moi ban nhap lua chon:");
        scanf ("%d",&choice);
        getchar();
        switch(choice){
        	case 1:
        		system("cls");
        		for(i=0; i<(*n)-1; i++){
        			for(j=0; j<(*n)-1-i;j++){
        				if(strcmp(user[j].categoryName,user[j+1].categoryName)>0){
        					temp=user[j];
        					user[j]=user[j+1];
        					user[j+1]=temp;
						}
					}
				}
				print(user, n);
				printf ("moi ban nhap phim bat ky de tro ve:");
				getchar();
				getchar();
				break;
			case 2:
				system("cls");
				for(i=0; i<(*n)-1; i++){
        			for(j=0; j<(*n)-1-i;j++){
        				if(strcmp(user[j].categoryName,user[j+1].categoryName)<0){
        					temp=user[j];
        					user[j]=user[j+1];
        					user[j+1]=temp;
						}
					}
				}
				print(user, n);
				printf ("moi ban nhap phim bat ky de tro ve:");
				getchar();
				getchar();
				break;
			case 3:
				return;
			default:
				printf ("khong hop le!!\n");
				break;
		}
	}while(1);
}
//kiem tra du lieu
void check(Category *user,int*n){
	int i,j;
	for(i=0;i<(*n);i++){
		if(strlen(user[i].categoryId)>strlen(user[i].categoryName)){
		printf("do dai id khong hop le!!\n");
		printf("moi ban nhap lai:");
		fgets(user[i].categoryId,10,stdin);
		user[i].categoryId[strcspn(user[i].categoryId,"\n")]='\0';
		}
	}
	for (i=0;i<(*n)-1;i++){
		for(j=0;j<(*n);j++){
		    if(i!=j && strcmp(user[i].categoryId,user[j].categoryId)==0){
			printf ("ma hang khong duoc trung nhau!!\n");
			printf("moi ban nhap lai :");
			fgets(user[i].categoryId,10,stdin);
			user[i].categoryId[strcspn(user[i].categoryId,"\n")]='\0';
			j--; 
			break;
			} 
		}
	}
	for (i=0;i<(*n)-1;i++){
		for(j=0;j<(*n);j++){
			if(i!=j && strcmp(user[i].categoryName,user[j].categoryName)==0){
			printf ("ten danh muc khong duoc trung nhau!!\n");
			printf("moi ban nhap lai ten danh muc :");
			fgets(user[i].categoryName,50,stdin);
			user[i].categoryName[strcspn(user[i].categoryName,"\n")]='\0';
			j--; 
			break;
			} 
		}
	}
	for (i=0;i<*n;i++){
	  if(strlen(user[i].categoryId)==0){
		printf("ma hang khong duoc bo trong!!\n");
		printf("moi ban nhap lai ma hang cua:");
		fgets(user[i].categoryId,10,stdin);
		user[i].categoryId[strcspn(user[i].categoryId,"\n")]='\0'; 
	 }
	  if(strlen(user[i].categoryName)==0){
		printf("ten danh muc khong duoc bo trong!!\n");
		printf("moi ban nhap lai ten danh muc :");
		fgets(user[i].categoryName,50,stdin);
		user[i].categoryName[strcspn(user[i].categoryName,"\n")]='\0'; 
	 }
  } 
}
//luu file
void savefilecategory(Category *user,int*n){
	int i; 
	FILE *ptr=fopen("store.dat","ab");
	if(ptr==NULL){
		printf("Khong mo duoc file");
	}
	fwrite(user, sizeof(Category), *n, ptr);
	fclose(ptr);
}
void savefilecategory2(Category *user,int*n){
	// Mo file 
	int i; 
	FILE *ptr=fopen("store.dat","wb");
	if(ptr==NULL){
		printf("Khong mo duoc file");
	}
	fwrite(user, sizeof(Category), *n, ptr);
	fclose(ptr);
}
//doc file
void readfilecategory(Category *user,int*n){
	FILE *ptr = fopen("store.dat", "rb"); 
 if (ptr == NULL) { 
 printf("Khong mo duoc file\n"); 
 return; 
 } 
 *n = 0; 
   while (fread(&user[*n], sizeof(Category), 1, ptr) == 1) {
    (*n)++; 
	}
   fclose(ptr); 
}
//in cac san pham ra man hinh
void print2(Product *count,int *length){
    int i; 
    printf("===============================================================================\n"); 
    printf("|                               QUAN LY SAN PHAM                              |\n"); 
    printf("===============================================================================\n"); 
    printf("| %-4s | %-10s | %-10s | %-20s | %-8s | %-8s |\n", "STT", "PRODUCTID", "CATEGORYID","TEN SAN PHAM","SO LUONG","GIA TIEN"); 
    printf("===============================================================================\n");
    for (i = 0; i < *length; i++) { 
    printf("| %-4d | %-10s | %-10s | %-20s | %-8d | %-8d |\n", i + 1, count[i].productId, count[i].categoryId, count[i].productName,count[i].quantity, count[i].price); 
     } 
    printf("===============================================================================\n"); 
}
//nhap san pham
void scanproduct(Product *count,int*length,int *n,Category*user){
	    int i,j;
    	int flag=-1;
        for (i = 0; i < *length; i++) {
        printf("san pham thu %d:\n", i + 1);
        printf("Moi nhap ma san pham: ");
        fgets(count[i].productId, 10, stdin);
        count[i].productId[strcspn(count[i].productId, "\n")] = '\0';
        do{
        	printf("Moi nhap ma danh muc: ");
            fgets(count[i].categoryId, 10, stdin);
            count[i].categoryId[strcspn(count[i].categoryId, "\n")] = '\0';
            for(j=0; j<*n;j++){
            	if(strcmp(count[i].categoryId,user[j].categoryId)==0){
            		flag=i;
            		break;
				}
			}
			if(flag==-1){
				printf("moi ban nhap lai danh muc khong ton tai!!\n");
			}
		}while(flag==-1);
        printf("Moi nhap ten san pham: ");
        fgets(count[i].productName,50, stdin);
        count[i].productName[strcspn(count[i].productName, "\n")] = '\0';
        printf("Moi nhap so luong san pham: ");
        scanf("%d",&count[i].quantity);
        getchar();
        printf("Moi nhap gia tien san pham: ");
        scanf("%d",&count[i].price);
        getchar();
       }
}
//sua san pham 
void  repairproduct(Product *count,int*length){
	char addindex[10];
	int flag=-1;
	printf ("moi ban nhap id muon sua:");
	fgets(addindex,10,stdin);
	addindex[strcspn(addindex,"\n")]='\0';
	int i;
	for (i=0;i<*length; i++){
		if(strcmp(addindex,count[i].productId)==0)
		{
			flag=i;
			break;
		}
	}
	if(flag==-1){
		printf("khong ton tai\n");
		return;
	}else{
		printf("===============================================================================\n"); 
        printf("|                               QUAN LY SAN PHAM                              |\n"); 
        printf("===============================================================================\n"); 
        printf("| %-4s | %-10s | %-10s | %-20s | %-8s | %-8s |\n", "STT", "PRODUCTID", "CATEGORYID","TEN SAN PHAM","SO LUONG","GIA TIEN"); 
        printf("===============================================================================\n");
        printf("| %-4d | %-10s | %-10s | %-20s | %-8d | %-8d |\n", flag , count[flag].productId, count[flag].categoryId, count[flag].productName,count[flag].quantity, count[flag].price); 
        printf("===============================================================================\n"); 
		printf("Moi nhap ma danh muc: ");
        fgets(count[i].categoryId,10, stdin);
        count[i].categoryId[strcspn(count[i].categoryId, "\n")] = '\0';
        printf("Moi nhap ten san pham: ");
        fgets(count[i].productName,50, stdin);
        count[i].productName[strcspn(count[i].productName, "\n")] = '\0';
        printf("Moi nhap so luong san pham: ");
        scanf("%d",&count[i].quantity);
        getchar();
        printf("Moi nhap gia tien san pham: ");
        scanf("%d",&count[i].price);
        getchar();
	    printf ("sua thanh cong!!\n");
	}
}
//xoa san pham
void eraseproduct(Product *count,int*length){
	char addindex[10];
	int flag=-1;
	printf ("moi ban nhap ma san pham muon xoa:");
	fgets(addindex,10,stdin);
	addindex[strcspn(addindex,"\n")]='\0';
	int i;
	for (i=0;i<*length; i++){
		if(strcmp(addindex,count[i].productId)==0)
		{
			flag=i;
			break;
		}
	}
	if(flag==-1){
		printf("khong ton tai\n");
		return;
	}else{
		printf("===============================================================================\n"); 
        printf("|                               QUAN LY SAN PHAM                              |\n"); 
        printf("===============================================================================\n"); 
        printf("| %-4s | %-10s | %-10s | %-20s | %-8s | %-8s |\n", "STT", "PRODUCTID", "CATEGORYID","TEN SAN PHAM","SO LUONG","GIA TIEN"); 
        printf("===============================================================================\n");
        printf("| %-4d | %-10s | %-10s | %-20s | %-8d | %-8d |\n", i + 1, count[flag].productId, count[flag].categoryId, count[flag].productName,count[flag].quantity, count[flag].price); 
        printf("===============================================================================\n"); 
		for (i=flag; i<*length; i++){
			count[i]=count[i+1];
		}
		(*length)--;
	    printf ("xoa thanh cong!!\n");
 }
}
//tim kiem san pham theo ten
void searchproduct(Product *count,int*length){
	char searchName2[50];
	int flag=-1;
	printf("moi nhap ten tim kiem:");
	fgets(searchName2,50,stdin);
	searchName2[strcspn(searchName2,"\n")]='\0';
	int i;
	for(i=0;i<*length;i++){
		if(strstr(searchName2,count[i].productName)!=NULL){
			flag=i;
			break;
		}
	}
	if(flag==-1){
		printf ("khong tim thay!!\n");
		return;
	}else{
		printf("===============================================================================\n"); 
        printf("|                               QUAN LY SAN PHAM                              |\n"); 
        printf("===============================================================================\n"); 
        printf("| %-4s | %-10s | %-10s | %-20s | %-8s | %-8s |\n", "STT", "PRODUCTID", "CATEGORYID","TEN SAN PHAM","SO LUONG","GIA TIEN"); 
        printf("===============================================================================\n");
        printf("| %-4d | %-10s | %-10s | %-20s | %-8d | %-8d |\n", flag+1, count[flag].productId, count[flag].categoryId, count[flag].productName,count[flag].quantity, count[flag].price); 
        printf("===============================================================================\n");
	}
}
//sap xep san pham
void menuminiproduct(Product *count, int *length){
	int choice2;
	int i,j;
	Product temp;
	do{
		printf("\t SAP XEP SAN PHAM\n");
        printf("================================\n");
        printf("[1]. sap xep theo tu thap den cao\n");
        printf("[2]. sap xep theo tu cao den thap\n");
        printf("[3]. Thoat\n");
        printf("================================\n");
        printf ("moi ban nhap lua chon:");
        scanf ("%d",&choice2);
        getchar();
        switch(choice2){
        	case 1:
        		system("cls");
        		for(i=0; i<(*length)-1; i++){
        			for(j=0; j<(*length)-1-i;j++){
        				if(count[j].price>count[j+1].price){
        					temp=count[j];
        					count[j]=count[j+1];
        					count[j+1]=temp;
						}
					}
				}
				print2(count, length);
				printf ("moi ban nhap phim bat ky de tro ve:");
				getchar();
				getchar();
				break;
			case 2:
				system("cls");
				for(i=0; i<(*length)-1; i++){
        			for(j=0; j<(*length)-1-i;j++){
        				if(count[j].price<count[j+1].price){
        					temp=count[j];
        					count[j]=count[j+1];
        					count[j+1]=temp;
						}
					}
				}
				print2(count, length);
				printf ("moi ban nhap phim bat ky de tro ve:");
				getchar();
				getchar();
				break;
			case 3:
				return;
			default:
				printf ("khong hop le!!\n");
				break;
		}
	}while(1);
}
//loc san pham
void detect(Product *count, int *length){
	char addindex[10];
	int min;
	int max;
	int choice;
	int arr[100];
	int index=0;
	int flag=-1;
	int i;
	do{
		printf("\t LOC TIM SAN PHAM\n");
        printf("================================\n");
        printf("[1]. san pham theo danh muc\n");
        printf("[2]. san pham theo gia tien\n");
        printf("[3]. Thoat\n");
        printf("================================\n");
        printf ("moi ban nhap lua chon:");
        scanf ("%d",&choice);
        getchar();
        switch (choice){
        	case 1:
        		printf ("moi ban nhap ma danh muc:");
        		fgets(addindex,10,stdin);
        		addindex[strcspn(addindex,"\n")]='\0';
        		for(i=0;i<*length;i++){
        			if(strcmp(addindex,count[i].categoryId)==0){
        				arr[index]=i;
        				index++;
        				flag=i;
					}
				}
				if(flag==-1){
					printf("khong tim thay san pham!!!\n");
					return;
				}
				  printf("===============================================================================\n"); 
                  printf("|                               QUAN LY SAN PHAM                              |\n"); 
                  printf("===============================================================================\n"); 
                  printf("| %-4s | %-10s | %-10s | %-20s | %-8s | %-8s |\n", "STT", "PRODUCTID", "CATEGORYID","TEN SAN PHAM","SO LUONG","GIA TIEN"); 
                  printf("===============================================================================\n");
                  for (i = 0; i <index; i++) { 
                  printf("| %-4d | %-10s | %-10s | %-20s | %-8d | %-8d |\n", i + 1, count[arr[i]].productId, count[arr[i]].categoryId, count[arr[i]].productName,count[arr[i]].quantity, count[arr[i]].price); 
                 } 
                  printf("===============================================================================\n");
        		break;
        	case 2:
        		index=0;
        		flag=-1;
        		printf ("moi ban nhap khoang gia tien thap nhat muon tim:");
        		scanf ("%d",&min);
        		getchar();
        		printf ("moi ban nhap khoang gia tien cao nhat muon tim:");
        		scanf ("%d",&max);
        		getchar();
        		for(i=0;i<*length;i++){
        			if(min<count[i].price && count[i].price<max){
        				arr[index]=i;
        				index++;
        				flag=i;
					}
				}
				if(flag==-1){
					printf("khong tim thay san pham!!!\n");
					return;
				}
				  printf("===============================================================================\n"); 
                  printf("|                               QUAN LY SAN PHAM                              |\n"); 
                  printf("===============================================================================\n"); 
                  printf("| %-4s | %-10s | %-10s | %-20s | %-8s | %-8s |\n", "STT", "PRODUCTID", "CATEGORYID","TEN SAN PHAM","SO LUONG","GIA TIEN"); 
                  printf("===============================================================================\n");
                  for (i = 0; i <index; i++) { 
                  printf("| %-4d | %-10s | %-10s | %-20s | %-8d | %-8d |\n", i + 1, count[arr[i]].productId, count[arr[i]].categoryId, count[arr[i]].productName,count[arr[i]].quantity, count[arr[i]].price); 
                 } 
                  printf("===============================================================================\n");
				break;
			case 3:
				return;
			default:
				printf("khong hop le\n");
				break;
		}
	}while(1);
} 
//kiem tra du lieu san pham
void checkproduct(Product*count,int*length){
	int i,j;
	int flag=-1; 
	for(i=0;i<(*length);i++){
		if(strlen(count[i].productId)>strlen(count[i].productName)){
		printf("do dai id khong hop le!!\n");
		printf("moi ban nhap lai ma san pham cua %s\n:",count[i].productName);
		fgets(count[i].productId,10,stdin);
		count[i].productId[strcspn(count[i].productId,"\n")]='\0';
		flag=i; 
		}
	}
	for (i=0;i<(*length)-1;i++){
		for(j=0;j<(*length);j++){
		    if(i!=j && strcmp(count[i].productId,count[j].productId)==0){
			printf ("ma san pham khong duoc trung nhau!!\n");
			printf("moi ban nhap lai ma san pham cua %s:\n",count[i].productName);
			fgets(count[i].productId,10,stdin);
			count[i].productId[strcspn(count[i].productId,"\n")]='\0';
			j--; 
			flag=i; 
			break;
			} 
		}
	}
	for (i=0;i<(*length)-1;i++){
		for(j=0;j<(*length);j++){
			if(i!=j && strcmp(count[i].productName,count[j].productName)==0){
			printf ("ten san pham khong duoc trung nhau!!\n");
			printf("moi ban nhap lai ten san pham cua %s:\n",count[i].productId);
			fgets(count[i].productName,50,stdin);
			count[i].productName[strcspn(count[i].productName,"\n")]='\0';
			j--; 
			flag=i; 
			break;
			} 
		}
	}
	for (i=0;i<*length;i++){
	  if(strlen(count[i].productId)==0){
		printf("ma san pham khong duoc bo trong!!\n");
		printf("moi ban nhap lai ma san pham cua %s:\n",count[i].productName);
		fgets(count[i].productId,10,stdin);
		count[i].productId[strcspn(count[i].productId,"\n")]='\0';
		flag=i; 
	 }
	  if(strlen(count[i].productName)==0){
		printf("ten san pham khong duoc bo trong!!\n");
		printf("moi ban nhap lai ten san pham cua %s:\n",count[i].productName);
		fgets(count[i].productName,50,stdin);
		count[i].productName[strcspn(count[i].productName,"\n")]='\0';
		flag=i; 
	 }
  }
  if(flag==-1){
  	printf ("du lieu da dung!!\n"); 
  } 
}
//luu file san pham
void savefileproduct(Product*count,int *length){
	int i; 
	FILE *ptr=fopen("product.dat","ab");
	if(ptr==NULL){
		printf("Khong mo duoc file");
	}
	fwrite(count, sizeof(Product), *length, ptr);
	fclose(ptr);
} 
void savefileproduct2(Product*count,int *length){
	int i; 
	FILE *ptr=fopen("product.dat","wb");
	if(ptr==NULL){
		printf("Khong mo duoc file");
	}
	fwrite(count, sizeof(Product), *length, ptr);
	fclose(ptr);
} 
//doc file 
void readfileproduct(Product *count, int *length) {
 FILE *ptr = fopen("product.dat", "rb"); 
 if (ptr == NULL) { 
 printf("Khong mo duoc file\n"); 
 return; 
 } 
 *length = 0; 
   while (fread(&count[*length], sizeof(Product), 1, ptr) == 1) {
    (*length)++; 
	}
   fclose(ptr); 
}

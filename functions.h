#include "datatype.h"
//nguyen mau ham
//hien thi chuc nang chinh
void printmenu();//menu quan ly danh muc
void menu1(); //menu phu
void printfunction();//print quan ly danh muc
void scan(Category *user,int *n);//them danh muc
void print(Category *user,int*n);//in danh muc 
void repair(Category *user,int*n);//sua danh muc 
void erase(Category *user,int*n);//xoa danh muc
void search(Category *user,int*n);//tim kiem danh muc theo ten
void menumini(Category *user,int*n);//menu lua chon sap xep danh muc 
void check(Category *user,int*n);//kiem tra du lieu nhap 
void savefilecategory(Category *user,int*n);//luu file quan ly du lieu
void savefilecategory2(Category *user,int*n);
void readfilecategory(Category *user,int*n);//doc file 
void menu2();//quan ly san pham
void printmenuproduct();//in menu san pham 
void print2(Product *count,int *length);//in bang quan ly san pham
void scanproduct(Product *count,int*length,int*n,Category*user);//nhap san pham
void repairproduct(Product *count,int*length);//sua san pham 
void eraseproduct(Product *count,int*length);//xoa san pham
void searchproduct(Product *count,int*length);//tim kiem san pham theo ten
void menuminiproduct(Product *count, int *length);// menu lua chon sap xep san pham
void detect(Product *count, int *length);//loc san pham
void checkproduct(Product*count,int*length);//kiem tra du lieu san pham 
void savefileproduct(Product*count,int *length);//luu file san pham ab
void savefileproduct2(Product*count,int *length);//luu file san pham wb
void readfileproduct(Product*count,int *length);//doc file san pham rb

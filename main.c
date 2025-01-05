#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
int main(int argc, char *argv[]) {
    int value1;  // bien luu lua chon ben ngoai
    Category user[100];
    Product count[100];
    do {
        printfunction();
        printf("Moi ban nhap lua chon: ");
        scanf("%d", &value1);
        getchar();
        switch (value1) {
            case 1:
                menu1(); 
                break;
            case 2:
            	menu2();
                break;
            case 3:
                break;
            case 4:
                printf("Thoat\n");
                return 1;
            default:
                printf("Khong hop le\n");
                break;
        }
    } while (value1 != 0);
    return 0;
}

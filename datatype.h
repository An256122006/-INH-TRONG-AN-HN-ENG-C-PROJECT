#include <stdbool.h>
typedef struct Product {
    char productId[10];  // id s?n ph?m
    char categoryId[10];  // id lo?i s?n ph?m
    char productName[50];  // tên s?n ph?m
    int quantity;  // s? lu?ng
    int price;  // giá ti?n
} Product;
typedef struct Category {
    char categoryId[10];  // id danh m?c
    char categoryName[50];  // tên danh m?c
} Category;


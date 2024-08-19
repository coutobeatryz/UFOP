#include <stdio.h>
 #include <stdlib.h>

  typedef struct {
    int code;
    char name[50];
    int quantity;
    float price;
  } Product;

int main() {
    int products_num;

    printf("Enter the products number to be registrated: ");
    scanf("%d", &products_num);

    Product* products = (Product*)malloc(products_num * sizeof(Product));
    if (products == NULL) {
        printf("Alocation Memory Error!");
        return 1;
    }

    for (int i = 0; i < products_num; i++){
        printf("\nProduct registration: \n", i + 1);
        printf("Code: ");
        scanf("%d", &products[i].code);
        printf("Name: ");
        scanf("%s", products[i].name);
        printf("Available quantity: ");
        scanf("%d", &products[i].quantity);
        printf("Sale price: ");
        scanf("%f", &products[i].price);
    }

    int idx_biggest_price = 0;
    
    for (int i = 1; i < products_num; i++){
        if(products[i].price > products[idx_biggest_price].price){
            idx_biggest_price = i;
        }
    }

    int idx_biggest_quantity = 0;
    for(int i = 1; i < products_num; i++){
        if(products[i].price > products[idx_biggest_quantity].quantity){
            idx_biggest_quantity = i;
        }
    }

    printf("\nProduct with highest selling price: %s\n", products[idx_biggest_price].name);
    printf("Price: %f", products[idx_biggest_price].price);
    printf("Product with the largest quantity available in stock: %s", products[idx_biggest_quantity].name);
    printf("Quantity: %d", products[idx_biggest_quantity].quantity);

    free(products);

    return 0;
}

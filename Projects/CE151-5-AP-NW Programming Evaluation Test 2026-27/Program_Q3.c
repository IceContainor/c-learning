#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    BY_ITEM,
    BY_WEIGHT,
} SaleType;

typedef union {
    int number;
    double weight;
} StockInfo;

typedef struct {
    int product_code;
    char product_name[31];
    SaleType type;
    StockInfo info;
} Product ;

void print_product(const Product *p) {


    printf("Code : %d\n", p->product_code);
    printf("Name : %s\n", p->product_name);
    if (p->type == BY_ITEM) {
        printf("The type : BY_ITEM\n");
        printf("In stock : %d items\n", p->info.number);
    }
    else {
        printf("The type : BY_WEIGHT\n");
        printf("In stock : %.2lf k\n", p->info.weight);
    }
    printf("-----------------------------------------------------\n");
}

Product *largest_weight_product(Product *products, int n) {     ///find the largest weight
    Product *best =NULL;
    for (int i=0;i<n;i++){
        if (products[i].type == BY_WEIGHT) {
            if ( products[i].info.weight > best ->info.weight) {
                best = &products[i];
            }
        }
    }
    return best;
}

int main(void){
    int quantity;
    printf("Enter the quantity of products :");
    while (1) {
        scanf("%d", &quantity);
        if (quantity > 0) {break;}
        else {printf("Please enter a valid number.");}
    }

    Product *products = (Product *)malloc(sizeof(Product) * quantity);
    if (products == NULL) {
        printf("error, the storage can't be allocated!");
        return 1;
    }

    for (int i = 0;i<quantity;i++) {        ///enter the information about the items
        printf("Product %d code :", i+1);
        scanf("%d", &products[i].product_code);

        printf("Product %d name :", i+1);
        scanf("%30s", products[i].product_name);

        int t;
        printf("Sale type (0=BY_ITEM, 1=BY_WEIGHT)");
        scanf("%d", &t);
        switch(t) {
            case 0:
                products[i].type = BY_ITEM;
                break;
            case 1:
                products[i].type = BY_WEIGHT;
                break;
            default:
                printf("Invalid type, defaulting to BY_ITEM.\n");
                products[i].type = BY_ITEM;
                break;
        }

        if (products[i].type == BY_ITEM) {
            printf("Number of items in stock :");
            scanf("%d", &products[i].info.number);
        }
        else if (products[i].type == BY_WEIGHT) {
            printf("Weight of the item : ");
            scanf("%lf", &products[i].info.weight);
        }
    }

    printf("\n==========ALL PRODUCTS==========\n");
    for (int i = 0;i<quantity;i++) {        ///print the information of items
        printf("\n==============================\n");
        print_product(&products[i]);
    }

    char target[31];
    printf("Enter product name to search : ");
    scanf("%30s", target);
    int count =0;
    for (int i=0;i<quantity;i++) {      ///search items
        if (strcmp(target, products[i].product_name) == 0) {
            print_product(&products[i]);
            count ++;
        }
        if (count == 0) {
            printf("Product not found.\n");
        }
    }

    printf("\n==========Largest weight==========\n");
    Product *lw = largest_weight_product(products, quantity);
    if (lw == NULL) {
        printf("No product is sold by weight.\n");
    }
    else {
        print_product(lw);
    }
    free (products);
    products = NULL;

    return 0;
}

///delet a node
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Contact {
    int ID;
    char name[30];
    struct Contact *next;
} Contact;      ///构建联系人信息

int main(void) {

    Contact *head = NULL;       ///确定头指针
    Contact *tail =NULL;        ///确定尾指针

    int quantity;
    printf("Enter the quantity of contactors :");   ///获取联系人数量
    scanf("%d", &quantity);

    for (int i=0;i<quantity;i++) {
        Contact *newnode = (Contact *)malloc(sizeof(Contact));
        newnode->next = NULL;

        printf("Enter the ID:");
        scanf("%d", &newnode->ID);      ///获取ID

        printf("Enter the name:")
    }

}

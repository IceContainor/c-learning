///delet a node
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Contact {
    long long phone;
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
        if (newnode == NULL) {
            printf("Memory can't be allocated!\n\n");
            return 1;
        }
        newnode->next = NULL;

        printf("Enter the phone number:");
        scanf("%lld", &newnode->phone);      ///获取电话号码

        getchar();                          ///获取姓名
        printf("Enter the name:");
        scanf("%s", newnode->name);

        if (head == NULL) {
            head = newnode;
            tail = newnode;
        }
        else {
            tail->next = newnode;
            tail = newnode;                 ///接入节点
        }
    }

    Contact *curr = head;
    printf("==========CONTACTOR INFOMATION==========\n\n");
    while (curr != NULL) {
        printf("Phone number:%lld\nName:%s\n\n", curr->phone, curr->name);
        curr = curr->next;
    }
    printf("========================================\n\n");       ///打印已有名单

    curr = head;
    Contact *target = NULL;         ///准备curr指针和target指针

    long long int target_phone_number;
    printf("Enter the phone number of the contactor you want to delet :");
    scanf("%lld", &target_phone_number);        ///获取目标信息

    int count = 1;
    if (head == NULL) {
        printf("No contactor in the list!\n\n");
        return 0;
    }
    else if (curr->phone == target_phone_number) {
        head = head->next;
        free(curr);
        count --;
        printf("Contactor deleted!\n\n");
    }
    else {
        while (curr->next != NULL) {
            if (curr->next->phone == target_phone_number) {
                target = curr->next;
                curr->next = target->next;
                free(target);
                target = NULL;
                count --;
                printf("Contactor deleted!\n\n");
                break;
            }
            curr = curr->next;
        }
    }
    if (count) printf("Contactor not found!\n\n");      ///删除节点

    if (head == NULL) {
        printf("No contactor in the list!\n\n");
    }
    else {
        curr = head;
        printf("==========CONTACTOR INFOMATION==========\n\n");
        while (curr != NULL) {
            printf("Phone number:%lld\nName:%s\n\n", curr->phone, curr->name);
            curr = curr->next;
        }
        printf("========================================\n\n");       ///打印修改后的名单
    }
    return 0;
}

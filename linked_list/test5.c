///replace a struct
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

    Contact *newndode = (Contact *)malloc(sizeof(Contact));     ///构建替换信息
    if (newndode == NULL) {
        printf("Memory can't be allocated!");
        return 1;
    }
    newndode->next = NULL;
    printf("Enter the phone number:");
    scanf("%lld", &newndode->phone);      ///获取电话号码

    getchar();                          ///获取姓名
    printf("Enter the name:");
    scanf("%s", newndode->name);

    curr = head;
    Contact *target = NULL;
    int count = 1;
    printf("Enter the contacor's phone number you want to replace:");
    long long int target_phone_number;
    scanf("%lld", &target_phone_number);        ///获取被替换目标的电话

    if  (head == NULL) {
        printf("No contactors in the list!");       ///情况1：头指针为NULL
        return 0;
    }
    else if (curr->phone == target_phone_number) {
        target = head;
        newndode->next = head->next;
        head = newndode;
        printf("Information replaced!\n\n");
        free(target);
        target = NULL;          ///头节点为被替换节点
        count--;
    }
    else {
        while (curr->next != NULL) {
            if (curr->next->phone == target_phone_number) {
                target = curr->next;
                newndode = curr->next->next;
                curr = newndode;
                printf("Information replaced!\n\n");
                free(target);
                target = NULL;      ///其余节点为被替换节点
                count--;
            }
        }
    }

    if (count) printf("Contactor not found!");

    curr = head;
    printf("==========CONTACTOR INFOMATION==========\n\n");
    while (curr != NULL) {
        printf("Phone number:%lld\nName:%s\n\n", curr->phone, curr->name);
        curr = curr->next;
    }
    printf("========================================\n\n");       ///打印最终名单

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct item{
    char* itemName;
    int quantity;
    float price;
    float amount;
};

void readItem(struct item* obj);
void printItem(struct item* obj);

int main() {
    struct item* hardware = (struct item*)calloc(1, sizeof(struct item));
    readItem(hardware);
    printItem(hardware);
    return 0;
}

void readItem(struct item* obj){
    char itembuff[100];
    printf("\nEnter the name of the item: ");
    scanf("%s",itembuff);
    printf("\nEnter the quantity: ");
    scanf("%d",&obj->quantity);
    printf("\nEnter the price of a single item: ");
    scanf("%f", &obj->price);

    obj->itemName = (char*)calloc(strlen(itembuff)+1, sizeof(char));
    strcpy(obj->itemName, itembuff);
    obj->amount = (float)obj->quantity * obj->price;
};

void printItem(struct item* obj){
    printf("\nItem name: %s\n",obj->itemName);
    printf("Quantity: %d\n",obj->quantity);
    printf("Price: %.2f\n",obj->price);
    printf("Amount: %.2f",obj->amount);
}
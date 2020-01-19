#include <stdio.h>
#include <string.h>

struct item{
    char* itemName;
    int quantity;
    float price;
    float amount;
};

void readItem(struct item* obj);
void printItem(struct item* obj);

int main() {

    return 0;
}

void printItem(struct item* obj){
    printf("Item name: %s\n",*obj->itemName);
    printf("Quantity: %d\n",obj->quantity);
    printf("Price: %.2f\n",obj->price);
    printf("Amount: %.2f",obj->amount);
}
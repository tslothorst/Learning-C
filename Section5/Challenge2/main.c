#include <stdio.h>

int main() {
    enum companies {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum companies Company1 = XEROX;
    enum companies Company2 = GOOGLE;
    enum companies Company3 = EBAY;

    printf("%d \n",Company1);
    printf("%d \n",Company2);
    printf("%d \n",Company3);

    return 0;
}

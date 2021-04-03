#include <stdio.h>

int main() {

    int ticketQuantity = 100;
    char ticketBuy;

    for (; ticketQuantity > 0;) {
        printf("Would you like to buy a ticket? [Yes/yes/YES...\n");
        scanf(" %c", &ticketBuy);

        if (ticketBuy == 'yes') {

            int boughtTicketQuantity;
            printf("How many tickets do you wanna?\n");
            scanf("%d", &boughtTicketQuantity);

            if (boughtTicketQuantity <= ticketQuantity) {
                ticketQuantity -= boughtTicketQuantity;
            } else {
                printf("Please enter valid quantity of needed tickets...\n");
            }
            printf("The Tickets left in Stock: %d\n", ticketQuantity);

        } else {
            break;
        }
    }
        if (ticketQuantity == 0) {
            printf("The tickets bought by you: %d...\n", 100-ticketQuantity);
            printf("The Ticket stock is empty...\n");
        }
        else {
            printf("Bought tickets quantity: %d \n Left ticket quantity: %d", 100 - ticketQuantity, ticketQuantity);
        }

    return 0;
}
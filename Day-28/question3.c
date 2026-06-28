#include <stdio.h>
#include <string.h>

struct Ticket {
    int ticketID;
    char passengerName[50];
    char destination[50];
    int seats;
};

int main() {
    struct Ticket ticket;
    int choice;

    printf("Enter Ticket ID: ");
    scanf("%d", &ticket.ticketID);

    printf("Enter Passenger Name: ");
    scanf("%s", ticket.passengerName);

    printf("Enter Destination: ");
    scanf("%s", ticket.destination);

    ticket.seats = 0; // Initially no seats booked

    while(1) {
        printf("\n--- Ticket Booking Menu ---\n");
        printf("1. Book Seats\n");
        printf("2. Cancel Seats\n");
        printf("3. Show Ticket Details\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter number of seats to book: ");
                int book;
                scanf("%d", &book);
                ticket.seats += book;
                printf("%d seats booked successfully!\n", book);
                break;

            case 2:
                printf("Enter number of seats to cancel: ");
                int cancel;
                scanf("%d", &cancel);
                if(cancel <= ticket.seats) {
                    ticket.seats -= cancel;
                    printf("%d seats cancelled successfully!\n", cancel);
                } else {
                    printf("Not enough seats booked to cancel!\n");
                }
                break;

            case 3:
                printf("\n--- Ticket Details ---\n");
                printf("Ticket ID: %d\n", ticket.ticketID);
                printf("Passenger Name: %s\n", ticket.passengerName);
                printf("Destination: %s\n", ticket.destination);
                printf("Seats Booked: %d\n", ticket.seats);
                break;

            case 4:
                printf("Thank you for using Ticket Booking System!\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}

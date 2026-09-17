#include <stdio.h>
int main() {
    int seat[100] = {0}; // Initialize all seats as available (0)
    int seatNumber, choice;
    while (1) {
        printf("\n1. Book a seat\n");
        printf("2. Cancel a seat\n");
        printf("3. Display seat status\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: // Book a seat
                printf("Enter seat number (1-100) to book: ");
                scanf("%d", &seatNumber);
                if (seatNumber >= 1 && seatNumber <= 100 && seat[seatNumber - 1] == 0) {
                    seat[seatNumber - 1] = 1;
                    printf("Seat %d booked successfully.\n", seatNumber);
                } else {
                    printf("Seat is either already booked or invalid.\n");
                }
                break;
            case 2: // Cancel a seat
                printf("Enter seat number (1-100) to cancel: ");
                scanf("%d", &seatNumber);
                if (seatNumber >= 1 && seatNumber <= 100 && seat[seatNumber - 1] == 1) {
                    seat[seatNumber - 1] = 0;
                    printf("Seat %d canceled successfully.\n", seatNumber);
                } else {
                printf("Seat is either not booked or invalid.\n");
                }
                break;
            case 3: // Display seat status
                printf("Seat status:\n");
                for (int i = 0; i < 100; i++) {
                    printf("Seat %d: %s\n", i + 1, (seat[i] == 0) ? "Available" : "Booked");
                }
                break;
            case 4: // Exit
                printf("Exiting the system.\n");
                return 0;
            }   
        }
        return 0;
    }
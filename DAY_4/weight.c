#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to store Address/Vehicle Details and Weights
typedef struct {
    long ticket_num;
    char vehicle_reg[20];
    float gross_weight;
    float tare_weight;
} Ticket;

// Helper Function 1: Computes and returns the net weight
float get_net_weight(const Ticket *t) {
    return t->gross_weight - t->tare_weight;
}

// Helper Function 2: Prints the formatted details of a single ticket
void print_ticket_details(const Ticket *t) {
    printf("Ticket No   : %ld\n", t->ticket_num);
    printf("Vehicle Reg : %s\n", t->vehicle_reg);
    printf("Gross Weight: %.2f kg\n", t->gross_weight);
    printf("Tare Weight : %.2f kg\n", t->tare_weight);
    printf("Net Weight  : %.2f kg\n", get_net_weight(t));
    printf("-------------------------------\n");
}

int main() {
    int n;
    
    printf("Enter the number of tickets: ");
    if (scanf("%d", &n) != 1) {
        printf("INVALID COUNT\n");
        return 1;
    }

    // Input Validation Rule: Reject 0, negative values, or values above 100,000
    if (n <= 0 || n > 100000) {
        printf("INVALID COUNT\n");
        return 0;
    }

    // Dynamic Memory Allocation on the Heap
    Ticket *tickets = (Ticket *) malloc(n * sizeof(Ticket));
    if (tickets == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input Processing Loop
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for ticket %d:\n", i + 1);
        
        printf("Enter Ticket Number: ");
        scanf("%ld", &tickets[i].ticket_num);
        
        printf("Enter Vehicle Registration: ");
        scanf("%s", tickets[i].vehicle_reg);
        
        printf("Enter Gross Weight: ");
        scanf("%f", &tickets[i].gross_weight);
        
        printf("Enter Tare Weight: ");
        scanf("%f", &tickets[i].tare_weight);
    }

    // Process and Print All Records
    printf("\n====================================\n");
    printf("          ALL VEHICLE TICKETS       \n");
    printf("====================================\n");
    
    float total_net_weight = 0.0f;
    int max_index = 0;
    float max_net_weight = get_net_weight(&tickets[0]);

    for (int i = 0; i < n; i++) {
        print_ticket_details(&tickets[i]);
        
        float current_net = get_net_weight(&tickets[i]);
        total_net_weight += current_net;

        // Keep track of the heaviest net load
        if (current_net > max_net_weight) {
            max_net_weight = current_net;
            max_index = i;
        }
    }

    // Print Computed Totals
    printf("Total Accumulated Net Weight: %.2f kg\n", total_net_weight);
    printf("====================================\n\n");

    // Reprint the ticket carrying the maximum net load
    printf("====================================\n");
    printf("       HEAVIEST VEHICLE LOAD       \n");
    printf("====================================\n");
    print_ticket_details(&tickets[max_index]);

    // Memory Management: Safely release heap allocation
    free(tickets);
    tickets = NULL; 
    return 0;
}
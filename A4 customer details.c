#include <stdio.h>


struct customer {
    int account_no;
    char name[50];
    float balance;
};


void print_customer_details(struct customer *cust, int size) {
    for (int i = 0; i < size; i++) {
        if (cust[i].balance < 100) {
            printf("Account No: %d\tName: %s\n", cust[i].account_no, cust[i].name);
        }
    }
}

int main() {
    
    struct customer cust[3];

   
    for (int i = 0; i < 3; i++) {
        printf("Enter details of customer %d:\n", i + 1);
        printf("Account No: ");
        scanf("%d", &cust[i].account_no);
        printf("Name: ");
        scanf("%s", cust[i].name);
        printf("Balance: ");
        scanf("%f", &cust[i].balance);
    }

    
    printf("\nCustomers with balance less than Rs. 100:\n");
    print_customer_details(cust, 3);

    return 0;
}

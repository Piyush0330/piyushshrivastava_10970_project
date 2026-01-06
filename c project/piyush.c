#include <stdio.h>

int main() {
    int balance = 10000;     
    int withdraw = 3000;     

    printf("Current Balance: %d\n", balance);
    printf("Withdrawal Amount: %d\n", withdraw);

    
    if (withdraw > 0) {

        if (withdraw <= balance) {

            balance = balance - withdraw;

            
            printf("Withdrawal successful!\n");
            printf("Updated Balance: %d\n", balance);
        } 
        else {
           
            printf("Insufficient balance!\n");
        }
    } 
    else {
        
        printf("Invalid withdrawal amount!\n");
    }

    return 0;
}
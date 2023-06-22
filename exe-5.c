#include <stdio.h>

int bit_operations(int num, int operator_type) {
    int result = num;

    switch (operator_type) {
        case 1:
            result = num | (1 << 0);  // Set 1st bit
            break;
        case 2:
            result = num & ~(1 << 31);  // Clear 31st bit
            break;
        case 3:
            result = num ^ (1 << 15);  // Toggle 16th bit
            break;
        default:
            printf("Error: Invalid operation type\n");
            break;
    }

    return result;
}

int main() {
    int num, operator_type;
    
    printf("Enter an integer (32 bits): ");
    scanf("%d", &num);
    
    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &operator_type);

    int result = bit_operations(num, operator_type);
    
    printf("Result: %d\n", result);

    return 0;
}

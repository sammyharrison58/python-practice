#include <stdio.h>

int inputValueInRange(int min, int max) {
    int value;
    do {
        printf("Enter a value between %d and %d: ", min, max);
        scanf("%d", &value);
        
        if (value < min || value > max) {
            printf("Invalid input! Please try again.\n");
        }
    } while (value < min || value > max);
    
    return value;
}

int main() {printf("Hello BDS");
	
    int result = inputValueInRange(4, 10);
    printf("You entered: %d\n", result);
    
    
    return 0;
}
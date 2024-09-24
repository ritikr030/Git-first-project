
    #include <stdio.h>

// Function to convert decimal to binary
void decimalToBinary(int num) {
    if (num == 0) {
        printf("Binary representation: 0\n");
        return;
    }

    int binary[32]; // Array to store binary digits
    int index = 0;

    while (num > 0) {
        binary[index] = num % 2;
        num /= 2;
        index++;
    }

    printf("Binary representation: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    decimalToBinary(decimalNumber);

    return 0;
}

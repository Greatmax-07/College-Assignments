#include<stdio.h>
#include<string.h> 

int binary(int n);

int main() {
    int n;
    char input[20];
    char trash;
    printf("**Natural Number to Binary Converter**\n\n");
    printf("Enter a Natural Number: ");

    while (1) {
        
        fgets(input, sizeof(input), stdin);
        
        if (input[0] == '\n' || strlen(input) == 1) {
            printf("Invalid Input.\nPlease Enter a Natural Number only: ");
            continue;
        }

        int result = sscanf(input, "%d %c", &n, &trash);
        if (result == 1) {
            if (n <= 0) {
                printf("Please Enter a Natural Number only: ");
            } else {
                printf("Binary representation of %d is: ", n);
                binary(n);
                break;  
            }
        } 
        else {
            printf("Invalid Input.\nPlease Enter a Natural Number only: ");
            while (getchar() != '\n');
        }
    }
    return 0;
}

int binary(int n) {
    if (n == 0) {
        return 0;    
    } else {
        binary(n / 2);
        printf("%d", n % 2);
    }
    return 0;
}

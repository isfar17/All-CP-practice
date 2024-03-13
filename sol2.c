#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];
    int n1, n2;

    printf("Enter a string: ");
    scanf("%s", inputString);

    printf("Enter two integers (n1, n2): ");
    scanf("%d %d", &n1, &n2);

    for (int i = n1, j = n2; i < j; i++, j--) {
        char temp = inputString[i];
        inputString[i] = inputString[j];
        inputString[j] = temp;
    }

    printf("Modified string: %s\n", inputString);

    return 0;
}

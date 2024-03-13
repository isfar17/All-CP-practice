#include <stdio.h>


int main() {
    int size;

    scanf("%d", &size);

    int sequence1[size], sequence2[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &sequence1[i]);
    }
    for (int i = 0; i < size; i++) {
        scanf("%d", &sequence2[i]);
    }
    int i = 0, j = 0;

    while (i < size && j < size) {
        if (sequence1[i] == sequence2[j]) {
            printf("%d ", sequence1[i]);
            i++;
            j++;
        } else if (sequence1[i] < sequence2[j]) {
            i++;
        } else {
            j++;
        }
    }

    printf("\n");

    return 0;
}

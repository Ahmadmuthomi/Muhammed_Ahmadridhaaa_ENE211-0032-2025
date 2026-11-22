#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
int head = 0;
int count = 0;

void insertSample(int value) {
    buffer[head] = value;
    head = (head + 1) % BUFFER_SIZE;
    if (count < BUFFER_SIZE)
        count++;
}

void printSamples(void) {
    if (count == 0) {
        printf("Buffer is empty.\n");
        return;
    }
    int start = (count < BUFFER_SIZE) ? 0 : head;

    printf("Samples (oldest -> newest): ");
    for (int i = 0; i < count; i++) {
        printf("%d ", buffer[(start + i) % BUFFER_SIZE]);
    }
    printf("\n");
}


void printRawBuffer(void) {
    printf("Raw buffer: [");
    for (int i = 0; i < count; i++) {
        printf("%d%s", buffer[i], (i < count - 1) ? " " : "");
    }
    printf("]\n");
}

int main(void) {
    int choice, value;

    printf("Circular Data Logger (BUFFER_SIZE = %d)\n", BUFFER_SIZE);

    do {
        printf("\n1. Insert new sample\n");
        printf("2. Print all samples (chronological)\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        if (scanf("%d", &choice) != 1)
            break;

        switch (choice) {
            case 1:
                printf("Enter sensor value: ");
                if (scanf("%d", &value) == 1) {
                    insertSample(value);
                    printRawBuffer();
                }
                break;
            case 2:
                printSamples();
                break;
            case 3:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 3);

    return 0;
}

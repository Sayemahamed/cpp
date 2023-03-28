#include <stdio.h>
const int MAX= 100;

int pq[MAX];
int front = -1, rear = -1;

void insert(int item) {
    int i;
    if (rear == MAX - 1) {
        printf("Queue Overflow\n");
        return;
    }
    if (front == -1) {
        front = rear = 0;
        pq[rear] = item;
        return;
    }
    else {
        for (i = rear; i >= front; i--) {
            if (item > pq[i]) {
                pq[i + 1] = pq[i];
            }
            else {
                break;
            }
        }
        pq[i + 1] = item;
        rear++;
    }
}

int delet() {
    int item;
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
        return -1;
    }
    else {
        item = pq[front];
        front++;
        return item;
    }
}

void display() {
    int i;
    if (front == -1) {
        printf("Queue is empty\n");
    }
    else {
        for (i = front; i <= rear; i++) {
            printf("%d ", pq[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, item;

    while (1) {
        printf("1.Insert\n");
        printf("2.delete\n");
        printf("3.Display\n");
        printf("4.Quit\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to be inserted : ");
                scanf("%d", &item);
                insert(item);
                break;
            case 2:
                delet();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Wrong choice\n");
                break;
        }
    }

    return 0;
}
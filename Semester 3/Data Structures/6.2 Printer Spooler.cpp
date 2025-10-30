/*In a multi-user environment, printers often use a circular queue to manage print jobs. Each
print job is added to the queue, and the printer processes them in the order they arrive. Once a
print job is completed, it moves out of the queue, and the next job is processed, efficiently
managing the flow of print tasks. Implement the Printer Spooler system using a circular queue
without using built-in queues.*/
#include <iostream>
using namespace std;

class Printer {
private:
    int rear = -1, front = 0, limit = 10, total = 0;
    string jobs[10];
public:
    void enqueue(string name);
    void dequeue();
    bool isEmpty();
    bool isFull();
};

void Printer::dequeue() {
    if (isEmpty()) {
        cout << "No Prints Present\n";
        return;
    }
    else if (!isEmpty()) {
        cout << "Print of " << jobs[front] << " is Ready to Collect\n";
        jobs[front] = "";
        front = (front + 1) % limit;
        total--;
    };
};

void Printer::enqueue(string name) {
    if (!isFull()) {
        rear = (rear + 1) % limit;
        jobs[rear] = name;
        total++;
        cout << "Print Added to Queue\n";
    };
};

bool Printer::isFull() {
    if (total == limit) {
        cout << "Queue is full, please process tokens first\n";
        return 1;
    }
    else {
        return 0;
    };
};

bool Printer::isEmpty() {
    if (total == 0) {
        cout << "Queue is empty, please issue token first\n";
        return 1;
    }
    else {
        return 0;
    };
};

int main() {
    Printer press;
    int choice = 0;
    string filename;

    while (choice != 3) {
        cout << "--------------Welcome to Printing Press--------------" << endl;
        cout << "1) Issue Print\n";
        cout << "2) Process Print\n";
        cout << "3) Exit\n";
        cout << "Enter Choice Number: ";
        cin >> choice;

        if (choice == 0) {
            cout << "Please Enter Choice Correctly";
            break;
        }
        else if (choice == 1) {
            cout << "Enter Print Name: ";
            cin >> filename;
            press.enqueue(filename);
        }
        else if (choice == 2) {
            press.dequeue();
        };
    };

    cout << "Goodbye, Come Again!!!!!!!\n";
    return 0;
};

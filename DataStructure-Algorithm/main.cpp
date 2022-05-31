#include <iostream>
#include <string>
using namespace std;

class Deque {

public:
    Deque(const int size = 16);
    ~Deque();

    bool empty() const;
    bool full() const;
    int size() const;
    int front() const;
    int back() const;
    void pushFront(const int data);
    void pushBack(const int data);
    int popFront();
    int popBack();

    void display() const;

public:
    int* deque;
    int maxSize;
    int dataSize;
    int frontIndex;
    int rearIndex;

};

int main(void) 
{
    Deque dq(10);
    dq.pushBack(100);
    dq.pushFront(200);
    dq.pushFront(300);
    //dq.pushBack(200);
    //dq.pushBack(300);
    //dq.pushBack(400);
    //dq.pushBack(500);
    //dq.pushFront(800);
    //dq.pushFront(900);
    //dq.pushFront(1000);
    cout << "front : " << dq.front() << endl;
    cout << "back : " << dq.back() << endl;
    dq.display();
    for (int i = 0; i < 10; i++)
    {
        cout << dq.deque[i] << ' ';
    }
    return 0;
}

inline void error(const char* message) {
    puts(message);
    exit(EXIT_FAILURE);
}

Deque::Deque(const int size) {
    deque = new int[size];
    maxSize = size;
    dataSize = 0;
    frontIndex = 0;
    rearIndex = 1;
}

Deque::~Deque() {
    delete[] deque;
}

bool Deque::empty() const {
    return dataSize == 0;
}

bool Deque::full() const {
    return dataSize == maxSize;
}

int Deque::size() const {
    return dataSize;
}

int Deque::front() const {
    if (empty()) {
        error("Deque is empty!");
    }
    int tempIndex = (frontIndex + 1) % maxSize;
    return deque[tempIndex];
}

int Deque::back() const {
    if (empty()) {
        error("Deque is empty!");
    }
    int tempIndex = ((rearIndex - 1) + maxSize) % maxSize;
    return deque[tempIndex];
}

void Deque::pushFront(const int data) {
    if (full()) {
        error("Deque is full!");
    }
    deque[frontIndex] = data;
    frontIndex = ((frontIndex - 1) + maxSize) % maxSize;
    dataSize++;
}

void Deque::pushBack(const int data) {
    if (full()) {
        error("Deque is full!");
    }
    deque[rearIndex] = data;
    rearIndex = (rearIndex + 1) % maxSize;
    dataSize++;
}

int Deque::popFront() {
    int frontData = front();// if empty, error occurred
    frontIndex = (frontIndex + 1) % maxSize;
    dataSize--;
    return frontData;
}

int Deque::popBack() {
    int backData = back();// if empty, error occurred
    rearIndex = ((rearIndex - 1) + maxSize) % maxSize;
    dataSize--;
    return backData;
}

void Deque::display() const {
    puts("====================================================================================================");
    if (empty()) {
        puts("Deque is empty!");
        puts("====================================================================================================");
        return;
    }
    printf("%-5s : %s\n", "full", full() ? "true" : "false");
    printf("%-5s : %d\n", "size", size());
    printf("%-5s : %d\n", "front", front());
    printf("%-5s : %d\n", "back", back());
    printf("(FRONT) ");
    for (int i = 1; i <= dataSize; i++) {
        int tempIndex = (frontIndex + i) % maxSize;
        printf("[%d] ", deque[tempIndex]);
    }
    puts("(BACK)");
    puts("====================================================================================================");
}
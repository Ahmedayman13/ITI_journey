#include <iostream>
using namespace std;

class Stack {
    int size;
    int tos;
    int* arr;
public:
    Stack(const Stack& s) {
        tos = s.tos;
        size = s.size;
        arr = new int[size];
        for (int i = 0; i <= tos; i++) {
            arr[i] = s.arr[i];
        }
    }

    Stack(int _size = 5) {
        tos = -1;
        size = _size;
        arr = new int[size];
    }

    void push(int d) {
        if (tos < size - 1) {
            tos++;
            arr[tos] = d;
        } else {
            cout << "Stack is full" << endl;
        }
    }

    int pop(int& d) {
        if (tos < 0) {
            cout << "Stack is Empty" << endl;
            return 0;
        } else {
            d = arr[tos];
            tos--;
            return 1;
        }
    }

    ~Stack() {
        delete[] arr;
    }

    Stack& operator=(const Stack& s) {
        if (this != &s) {
            delete[] arr;
            size = s.size;
            tos = s.tos;
            arr = new int[size];
            for (int i = 0; i <= tos; i++) {
                arr[i] = s.arr[i];
            }
        }
        return *this;
    }

    Stack operator+(const Stack& s) {
        Stack res(size + s.size);
        for (int i = 0; i <= tos; i++) {
            res.arr[i] = arr[i];
        }
        for (int i = 0; i <= s.tos; i++) {
            res.arr[tos + 1 + i] = s.arr[i];
        }
        res.tos = tos + s.tos + 1;
        return res;
    }
};

void show(const char* name, Stack s) {
    int d;
    cout << name << ": ";
    while (s.pop(d) == 1) {
        cout << d << " ";
    }
}

int main() {
    int d;

    Stack s1, s2, s3;
    s1.push(5);
    s1.push(6);
    s2.push(8);
    s2.push(9);
    s2.push(10);

    s3 = s1 + s2;
    show("s3", s3);

    Stack s4(s1);
    s4.pop(d);
    cout << "popped from s4: " << d << endl;
    show("s1", s1);

    Stack s5;
    s5 = s1;
    s5.push(7);
    show("s5", s5);
    show("s1", s1);

    Stack s6, s7;
    s6 = s7 = s1;
    show("s6", s6);
    show("s7", s7);

    s1 = s1;
    show("s1", s1);

    Stack s8;
    for (int i = 1; i <= 6; i++) {
        s8.push(i);
    }
    show("s8", s8);

    Stack e1, e2, e3;
    e3 = e1 + e2;
    show("e3 (empty+empty)", e3);
    e3 = e1 + s1;
    show("e3 (empty+s1)", e3);

    Stack dbl = s1 + s1;
    show("dbl", dbl);

    return 0;
}

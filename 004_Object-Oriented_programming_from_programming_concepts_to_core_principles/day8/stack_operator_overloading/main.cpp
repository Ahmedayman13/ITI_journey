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

int main() {
    int d;
    Stack s1, s2, s3, s4;

    s1.push(5);
    s1.push(6);
    s2.push(8);
    s2.push(9);
    s2.push(10);

    s3 = s1 + s2;

    s4 = s3;

    cout << "s3: ";
    while (s3.pop(d) == 1) cout << d << " ";
    cout << endl;

    cout << "s4: ";
    while (s4.pop(d) == 1) cout << d << " ";
    cout << endl;

    return 0;
}

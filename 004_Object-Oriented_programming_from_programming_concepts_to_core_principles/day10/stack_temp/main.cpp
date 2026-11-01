#include <iostream>
using namespace std;

template <typename t>
class Stack {
    int size;
    int tos;
    t* arr;
public:
    Stack(int _size = 5) {
        tos = -1;
        size = _size;
        arr = new t[size];
    }

    Stack(const Stack& s) {
        tos = s.tos;
        size = s.size;
        arr = new t[size];
        for (int i = 0; i <= tos; i++) {
            arr[i] = s.arr[i];
        }
    }

    ~Stack() {
        delete[] arr;
    }

    void push(t d) {
        if (tos < size - 1) {
            arr[++tos] = d;
        } else {
            cout << "Stack is full" << endl;
        }
    }

    bool pop(t& d) {
        if (tos < 0) {
            cout << "Stack is Empty" << endl;
            return false;
        }
        d = arr[tos--];
        return true;
    }

    Stack& operator=(const Stack& s) {
        if (this != &s) {
            delete[] arr;
            size = s.size;
            tos = s.tos;
            arr = new t[size];
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
    Stack<int> s1;
    Stack<int> s2;

    s1.push(1);
    s1.push(2);
    s1.push(3);

    s2.push(4);
    s2.push(5);

    Stack<int> s3 = s1 + s2;

    int d;
    while (s3.pop(d)) {
        cout << d << " ";
    }
    cout << endl;

    Stack<float> f;
    f.push(1.5f);
    f.push(2.5f);
    float x;
    f.pop(x);
    cout << x << endl;

    return 0;
}

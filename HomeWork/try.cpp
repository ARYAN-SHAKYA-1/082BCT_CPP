#include <iostream>
using namespace std;

class A;   // Forward declaration

class B {
private:
    int b;

public:
    void input();
    int addition(A a1);
};

class A {
private:
    int a;

public:
    void input();

    friend int B::addition(A);
};

void A::input() {
    cin >> a;
}

void B::input() {
    cin >> b;
}

int B::addition(A a1) {
    return a1.a + b;
}

int main() {
    A a1;
    B b1;

    cout << "Enter a: ";
    a1.input();

    cout << "Enter b: ";
    b1.input();

    cout << "Sum = " << b1.addition(a1);

    return 0;
}

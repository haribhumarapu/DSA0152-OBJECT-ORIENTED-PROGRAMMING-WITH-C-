#include <iostream>
class A {
protected:
    int x;
public:
    A(int value) : x(value) {}
    void display() const {
        std::cout << "Value of x in class A: " << x << std::endl;
    }
};
class B : private A {
public:
    
    B(int value) : A(value) {}
     void show() {
        \
        display();
    }
};

int main() {
    B obj(10);
    obj.show(); 
    return 0;
}


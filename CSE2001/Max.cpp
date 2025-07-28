#include <iostream>
using namespace std;

// Forward declaration of class numTwo
class numTwo;

class numOne {
private:
    int num;
public:
    
    numOne(int n) : num(n) {}
    friend int findMax(numOne, numTwo);
};

class numTwo {
private:
    int num;
public:
    numTwo(int n) : num(n) {}
    friend int findMax(numOne, numTwo);
};

// Friend function definition
int findMax(numOne a, numTwo b) {
    if (a.num > b.num)
        return a.num;
    else
        return b.num;
}

int main() {
    int num1, num2;
    
    cout << "Enter number for class numOne: ";
    cin >> num1;
    cout << "Enter number for class numTwo: ";
    cin >> num2;
    
    numOne a(num1);
    numTwo b(num2);
    
    cout << "The maximum number is: " << findMax(a, b) << endl;
    
    return 0;
}
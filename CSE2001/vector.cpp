#include <iostream>
using namespace std;

template <class T>
class Vector {
    T* arr;
    int size;

public:
    Vector(int s) : size(s), arr(new T[s]) {}

    void input() {
        for (int i = 0; i < size; i++) cin >> arr[i];
    }

    T smallest() {
        T min = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] < min) min = arr[i];
        }
        return min;
    }

    int search(T key) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == key) return i; // return the index if found
        }
        return -1; // return -1 if not found
    }

    double average() {
        double sum = 0;
        for (int i = 0; i < size; i++) sum += arr[i];
        return sum / size;
    }

    ~Vector() { delete[] arr; }
};

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    Vector<int> v(n);
    cout << "Enter elements: ";
    v.input();

    cout << "Smallest: " << v.smallest() << endl;
    int key;
    cout << "Enter key: ";
    cin >> key;
    int index = v.search(key);
    if (index != -1) {
        cout << "Found at index " << index << endl;
    } else {
        cout << "Not found" << endl;
    }
    cout << "Average: " << v.average() << endl;

    return 0;
}
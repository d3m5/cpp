#include <iostream>
using namespace std;
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    setlocale(LC_ALL, "ru"); 
    int x = 5, y = 10;
    cout << "x до обмена: " << x << endl;
    cout << "y до обмена: " << y << endl;
    swap(&x, &y);
    cout << "x после обмена: " << x << endl;
    cout << "y после обмена: " << y << endl;
    return 0;
}
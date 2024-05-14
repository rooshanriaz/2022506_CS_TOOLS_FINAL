#include <iostream>

using namespace std;

int main() {
    int a = 5;
    int b = 0;
    int result = 0;

    
    for (int i = 0; i <= a; ++i) {
        b += i;
    }

    result = b / a;
 
    cout << "Result: " << result << endl;

    int c;
    cout << "Uninitialized variable c: " << c << endl;

    int d = 0;
    while (d <= 10) {
        cout << "d: " << d << endl;
        d++;
        
    }

    int array[3] = {1, 2, 3};
    for (int i = 0; i < 3; ++i) {
        cout << "array[" << i << "]: " << array[i] << endl;
    }

    return 0;
}
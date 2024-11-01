#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "Masukkan dua bilangan: ";
    cin >> num1 >> num2;

    cout << "Pilih operasi matematika yang ingin Anda lakukan (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                cout << "Pembagian oleh nol tidak diizinkan";
            break;
        default:
            // operator yang dimasukkan tidak valid
            cout << "Operasi matematika tidak valid";
            break;
    }

    cout << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    // 基礎四則運算
    int num1 = 20, num2 = 5;
    int addition = num1 + num2;
    int subtraction = num1 - num2;
    int multiplication = num1 * num2;
    float division = static_cast<float>(num1) / num2;

    // 條件判斷式
    if (num1 > num2) {
        cout << "num1 is greater than num2" << endl;
    } else {
        cout << "num1 is not greater than num2" << endl;
    }

    // 輸出結果
    cout << "Addition: " << addition << endl;
    cout << "Subtraction: " << subtraction << endl;
    cout << "Multiplication: " << multiplication << endl;
    cout << "Division: " << division << endl;

    return 0;
}

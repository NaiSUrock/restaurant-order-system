#include <iostream>
using namespace std;

int main() {
    // For迴圈
    for (int i = 0; i < 5; ++i) {
        cout << "Iteration " << i << endl;
    }

    // While迴圈
    int j = 0;
    while (j < 5) {
        cout << "Iteration " << j << endl;
        ++j;
    }

    // 簡單的陣列動態宣告
    int* dynamicArray = new int[3];
    dynamicArray[0] = 10;
    dynamicArray[1] = 20;
    dynamicArray[2] = 30;

    // 輸出結果
    cout << "Dynamic Array: " << dynamicArray[0] << ", " << dynamicArray[1] << ", " << dynamicArray[2] << endl;

    // 釋放動態宣告的陣列
    delete[] dynamicArray;

    return 0;
}

#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 5;


// Функция для ввода двумерного массива с клавиатуры
void inputArray(float arr[ROWS][COLS]) {
    setlocale(LC_ALL, "Russian");
    cout << "Введите элементы массива:\n";
    for (int i = 0; i < ROWS; ++i) {
        cout << "Строка " << i + 1 << ":\n";
        for (int j = 0; j < COLS; ++j) {
            cout << "Элемент " << j + 1 << ": ";
            cin >> arr[i][j];
        }
    }
}

// Функция для вычисления среднего арифметического элементов строки
float averageOfRow(float row[COLS]) {
    float sum = 0;
    for (int i = 0; i < COLS; ++i) {
        sum += row[i];
    }
    return sum / COLS;
}

int main() {
    float array[ROWS][COLS];

    inputArray(array);

    for (int i = 0; i < ROWS; ++i) {
        float average = averageOfRow(array[i]);
        cout << "Среднее арифметическое элементов строки " << i + 1 << ": " << average << endl;
    }

    return 0;
}

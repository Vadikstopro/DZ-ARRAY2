﻿Массивы


Задание 1
#include <iostream>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "ru");
    // Ввод начального значения
    int n;
    cout << "Введите начальное значение: ";
    cin >> n;

    // Определение размера массива
    int size = 1;
    while (n > 1) {
        size++;
        n /= 2;
    }

    // Создание двухмерного массива
    int** array = new int* [size];
    for (int i = 0; i < size; ++i) 
    {
        array[i] = new int[1];
    }

    // Заполнение массива
    array[0][0] = n;
    for (int i = 1; i < size; ++i) 
    {
        array[i][0] = array[i - 1][0] * 2;
    }

    // Вывод массива
    for (int i = 0; i < size; ++i) 
    {
        cout << array[i][0] << endl;
    }

 

    return 0;
}
 задание 2
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
  
    int n;
    cout << "Введите число: ";
    cin >> n;

    // Создание двухмерного массива
    int** array = new int* [n];
    for (int i = 0; i < n; i++) {
        array[i] = new int[n];
    }

    // Заполнение массива
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0) {
                array[i][j] = n;
            }
            else if (j == 0) {
                array[i][j] = array[i - 1][j] + 1;
            }
            else {
                array[i][j] = array[i][j - 1] + 1;
            }
        }
    }

    // Вывод массива на экран
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
 
 Задание 3 (Не сделал)

//Задача 4
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <cstring>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    // Ввод размеров массива
    int rows, columns;
    cout << "Введите количество строк: ";
    cin >> rows;
    cout << "Введите количество столбцов: ";
    cin >> columns;

    // Создание двухмерного массива
    int** array = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new int[columns];
    }

    // Заполнение массива случайными числами
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            array[i][j] = rand() % 10;
        }
    }

    // Вывод исходного массива
    cout << "Исходный массив:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // Подсчет суммы
    int sum = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            sum += array[i][j];
        }
    }

    // Подсчет среднего арифметического
    double average = (double)sum / (rows * columns);

    // Поиск минимального элемента
    int min = array[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if (array[i][j] < min) {
                min = array[i][j];
            }
        }
    }

    // Поиск максимального элемента
    int max = array[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if (array[i][j] > max) {
                max = array[i][j];
            }
        }
    }

    // Вывод результатов
    cout << "Сумма: " << sum << endl;
    cout << "Среднее арифметическое: " << average << endl;
    cout << "Минимальный элемент: " << min << endl;
    cout << "Максимальный элемент: " << max << endl;



    return 0;
}
 Задача 5
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <cstring>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "ru");
    // Ввод размеров массива
    int rows, columns;
    cout << "Введите количество строк: ";
    cin >> rows;
    cout << "Введите количество столбцов: ";
    cin >> columns;

    // Создание двухмерного массива
    int** array = new int* [rows];
    for (int i = 0; i < rows; ++i)
    {
        array[i] = new int[columns];
    }

    // Заполнение массива случайными числами
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < columns; ++j) 
        {
            array[i][j] = rand() % 10;
        }
    }

    // Вывод исходного массива
    cout << "Исходный массив:" << endl;
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < columns; ++j) 
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // Подсчет суммы элементов в каждой строке
    for (int i = 0; i < rows; ++i) 
    {
        int sum_row = 0;
        for (int j = 0; j < columns; ++j) 
        {
            sum_row += array[i][j];
        }
        cout << sum_row << " ";
    }
    cout << endl;

    // Подсчет суммы элементов в каждом столбце
    for (int j = 0; j < columns; ++j) 
    {
        int sum_column = 0;
        for (int i = 0; i < rows; ++i) 
        {
            sum_column += array[i][j];
        }
        cout << sum_column << " ";
    }
    cout << endl;

    // Подсчет суммы элементов одновременно по всем строкам и всем столбцам
    int sum_total = 0;
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < columns; ++j) 
        {
            sum_total += array[i][j];
        }
    }
    cout << sum_total << endl;



    return 0;
}
Задача 6
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <cstring>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "ru");
    // Размеры массивов
    const int rows1 = 5, columns1 = 10;
    const int rows2 = 5, columns2 = 5;

    // Создание двухмерных массивов
    int** array1 = new int* [rows1];
    for (int i = 0; i < rows1; ++i) {
        array1[i] = new int[columns1];
    }

    int** array2 = new int* [rows2];
    for (int i = 0; i < rows2; ++i) {
        array2[i] = new int[columns2];
    }

    // Заполнение первого массива случайными числами
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < columns1; ++j) {
            array1[i][j] = rand() % 51;
        }
    }

    // Заполнение второго массива
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < columns2; ++j) {
            if (j == 0) {
                array2[i][j] = array1[i][j] + array1[i][j + 1];
            }
            else {
                array2[i][j] = array1[i][j + 1] + array1[i][j + 2];
            }
        }
    }

    // Вывод первого массива
    cout << "Первый массив:" << endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < columns1; ++j) {
            cout << array1[i][j] << " ";
        }
        cout << endl;
    }

    // Вывод второго массива
    cout << "Второй массив:" << endl;
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < columns2; ++j) {
            cout << array2[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}

Функции

Задача 1
#include <iostream>

using namespace std;

int power(int base, int exponent) 
{
    if (exponent == 0) 
    {
        return 1;
    }
    else if (exponent > 0) 
    {
        int result = 1;
        for (int i = 0; i < exponent; ++i) 
        {
            result *= base;
        }
        return result;
    }
    else {
        return 1.0 / power(base, -exponent);
    }
}

int main() 
{
    setlocale(LC_ALL, "ru");
    int base, exponent;
    cout << "Введите основание степени: ";
    cin >> base;
    cout << "Введите показатель степени: ";
    cin >> exponent;

    int result = power(base, exponent);
    cout << base << " в степени " << exponent << " = " << result << endl;

    return 0;
}
//Задача 2
#include <iostream>

using namespace std;

int sumOfRange(int start, int end) 
{
    int sum = 0;
    for (int i = start; i <= end; ++i) 
    {
        sum += i;
    }
    return sum;
}

int main() 
{
    setlocale(LC_ALL, "ru");
    int start, end;
    cout << "Введите начальное число: ";
    cin >> start;
    cout << "Введите конечное число: ";
    cin >> end;

    int sum = sumOfRange(start, end);
    cout << "Сумма чисел в диапазоне от " << start << " до " << end << " = " << sum << endl;

    return 0;
}
 Задача 3
#include <iostream>

using namespace std;

bool isPerfectNumber(int n) {
    if (n <= 1) {
        return false;
    }
    int sum = 1;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            sum += i;
            if (i * i != n) {
                sum += n / i;
            }
        }
    }
    return sum == n;
}

void findPerfectNumbers(int start, int end) 
{
    setlocale(LC_ALL, "ru");
    bool found = false;
    for (int i = start; i <= end; ++i) {
        if (isPerfectNumber(i)) {
            if (!found) {
                cout << "Совершенные числа в диапазоне от " << start << " до " << end << ": ";
                found = true;
            }
            cout << i << " ";
        }
    }
    if (!found) {
        cout << "В данном интервале совершенных чисел нет." << endl;
    }
    cout << endl;
}

int main() 
{
    setlocale(LC_ALL, "ru");
    int start, end;
    cout << "Введите начальное число: ";
    cin >> start;
    cout << "Введите конечное число: ";
    cin >> end;

    findPerfectNumbers(start, end);

    return 0;
}
Задача 4 (не сделал)
 Задача 5
#include <iostream>
using namespace std;

bool isHappyNumber(int number) {
    // Проверка длины числа
    if (number < 100000 || number > 999999) {
        return false;
    }

    // Подсчет суммы цифр
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }

    // Проверка, является ли сумма цифр "счастливой"
    return sum == 10 || sum == 13 || sum == 19 || sum == 23 || sum == 28 || sum == 31;
}

int main() 
{
    setlocale(LC_ALL, "ru");
    int number;
    cout << "Введите шестизначное число: ";
    cin >> number;

    if (isHappyNumber(number)) {
        cout << "Число " << number << " является счастливым." << endl;
    }
    else {
        cout << "Число " << number << " не является счастливым." << endl;
    }

    return 0;
}
 Задача 6
#include <iostream>
using namespace std;
bool isLeapYear(int year) 
{
	return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}
int daysBetweenDates(int d1, int m1, int y1, int d2, int m2, int y2) {
    // Проверка корректности дат
    if (y1 > y2 || (y1 == y2 && m1 > m2) || (y1 == y2 && m1 == m2 && d1 > d2)) {
        return -1;
    }

    int days = 0;

    // Разница дней в текущем году
    if (y1 == y2) {
        for (int i = m1 + 1; i < m2; ++i) {
            days += 31 - (i == 4 || i == 6 || i == 9 || i == 11 ? 1 : 0);
        }
        days += d2 - d1;
    }
    else {
        // Разница дней в оставшихся месяцах y1
        for (int i = m1 + 1; i <= 12; ++i) {
            days += 31 - (i == 4 || i == 6 || i == 9 || i == 11 ? 1 : 0);
        }
        days += d1;

        // Разница дней в y2
        for (int i = 1; i < m2; ++i) {
            days += 31 - (i == 4 || i == 6 || i == 9 || i == 11 ? 1 : 0);
        }
        days += d2;

        // Разница дней в полных годах между y1 и y2
        for (int i = y1 + 1; i < y2; ++i) {
            days += isLeapYear(i) ? 366 : 365;
        }
    }

    return days;
}
int main() 
{
    setlocale(LC_ALL, "ru");
    int d1, m1, y1, d2, m2, y2;

    // Ввод первой даты
    cout << "Введите день первой даты: ";
    cin >> d1;
    cout << "Введите месяц первой даты: ";
    cin >> m1;
    cout << "Введите год первой даты: ";
    cin >> y1;

    // Ввод второй даты
    cout << "Введите день второй даты: ";
    cin >> d2;
    cout << "Введите месяц второй даты: ";
    cin >> m2;
    cout << "Введите год второй даты: ";
    cin >> y2;

    int days = daysBetweenDates(d1, m1, y1, d2, m2, y2);

    if (days == -1) {
        cout << "Первая дата должна быть раньше или равна второй." << endl;
    }
    else {
        cout << "Разница между датами " << d1 << "." << m1 << "." << y1 << " и " << d2 << "." << m2 << "." << y2 << " составляет " << days << " дней." << endl;
    }

    return 0;
}
//Задача 7
#include <iostream>

using namespace std;

double average(int n, double* numbers) 
{
    if (n <= 0) {
        return 0.0;
    }

    double sum = 0.0;
    for (int i = 0; i < n; ++i) 
    {
        sum += numbers[i];
    }

    return sum / n;
}

int main()
{
    setlocale(LC_ALL, "ru");
    int n;
    double numbers[100];

    // Ввод количества элементов
    cout << "Введите количество элементов массива (не более 100): ";
    cin >> n;

    // Ввод элементов массива
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    // Вычисление среднего арифметического
    double averageValue = average(n, numbers);

    // Вывод результата
    cout << "Среднее арифметическое элементов массива: " << averageValue << endl;

    return 0;
}
// Задача 8
#include <iostream>

using namespace std;

void countElements(int n, int* numbers, int& positiveCount, int& negativeCount, int& zeroCount) {
    positiveCount = 0;
    negativeCount = 0;
    zeroCount = 0;

    for (int i = 0; i < n; ++i) {
        if (numbers[i] > 0) {
            positiveCount++;
        }
        else if (numbers[i] < 0) {
            negativeCount++;
        }
        else {
            zeroCount++;
        }
    }
}

int main() 
{
    setlocale(LC_ALL, "ru");
    int n;
    int numbers[100];

    // Ввод количества элементов
    cout << "Введите количество элементов массива (не более 100): ";
    cin >> n;

    // Ввод элементов массива
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    // Подсчет количества элементов
    int positiveCount, negativeCount, zeroCount;
    countElements(n, numbers, positiveCount, negativeCount, zeroCount);

    // Вывод результата
    cout << "Количество положительных элементов: " << positiveCount << endl;
    cout << "Количество отрицательных элементов: " << negativeCount << endl;
    cout << "Количество нулевых элементов: " << zeroCount << endl;

    return 0;
}
/* Задача 1. Среднее арифметическое чисел.
Ввести с клавиатуры массив из 5 элементов, найти среднее арифметическое всех элементов массива.

Данные на входе: 5 целых ненулевых чисел через пробел
Данные на выходе: Одно число в формате "%.3f"

Пример № 1
Данные на входе: 4 15 3 10 14
Данные на выходе: 9.200

Пример № 2
Данные на входе: 1 2 3 4 5
Данные на выходе: 3.000 */
#include <stdio.h>
#define SIZE 5

float getAverage(int array[], int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
        sum += array[i];

    float average = sum / size;

    return average;
}

int main(void)
{
    int arr[SIZE] = {0};

    for (int i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);

    printf("%.3f\n", getAverage(arr, SIZE));

    return 0;
}
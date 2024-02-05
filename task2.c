/* Задача 2. Найти минимум
Ввести с клавиатуры массив из 5 элементов, найти минимальный из них.

Данные на входе: 5 целых чисел через пробел
Данные на выходе: Одно единственное целое число

Пример № 1
Данные на входе: 4 15 3 10 14
Данные на выходе: 3

Пример № 2
Данные на входе: 1 2 3 4 -5
Данные на выходе: -5 */
#include <stdio.h>
#define SIZE 5

int getMin(int array[], int size)
{
    int min = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] < min)
            min = array[i];
    }

    return min;
}

int main(void)
{
    int arr[SIZE] = {0};

    for (int i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);

    printf("%d\n", getMin(arr, SIZE));

    return 0;
}
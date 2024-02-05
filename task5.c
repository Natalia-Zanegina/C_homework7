/* Задача 5. Вторая с конца ноль
Считать массив из 10 элементов и отобрать в другой массив все числа, у которых вторая с конца цифра
(число десятков) – ноль.

Данные на входе: 10 целых чисел через пробел.
Данные на выходе: Целые числа через пробел, у которых вторая с конца цифра - ноль

Пример
Данные на входе: 40 105 203 1 14 1000 22 33 44 55
Данные на выходе: 105 203 1 1000 */

#include <stdio.h>
#define SIZE 10

// В этом решении, если на вход подан 0, он войдет в результирующий массив, но не будет учитываться в выводе.

void secondZero(int array[], int size)
{
    int result[SIZE] = {0};
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (!((array[i] % 100) / 10))
        {
            result[j] = array[i];
            j++;
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        if (result[i])
            printf("%d ", result[i]);
    }
    printf("\n");
}

int main(void)
{
    int arr[SIZE] = {0};

    for (int i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);

    secondZero(arr, SIZE);

    return 0;
}
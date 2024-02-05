/* Задача 3. Циклический сдвиг массива вправо на 4
Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4 элемента.

Данные на входе: 12 целых чисел через пробел
Данные на выходе: 12 целых чисел через пробел

Пример № 1
Данные на входе: 4 -5 3 10 -4 -6 8 -10 1 0 5 7
Данные на выходе: 1 0 5 7 4 -5 3 10 -4 -6 8 -10

Пример № 2
Данные на входе: 1 2 3 4 5 6 7 8 9 10 11 12
Данные на выходе: 9 10 11 12 1 2 3 4 5 6 7 8 */
#include <stdio.h>
#define SIZE 12
#define SHIFT 4

void shiftArray(int array[], int size)
{
    for (int i = 0; i < SHIFT; i++)
    {
        int temp = array[i];
        for (int j = SHIFT; j < size; j += SHIFT)
        {
            int temp2 = array[i + j];
            array[i + j] = temp;
            temp = temp2;
        }
        array[i] = temp;
    }
}

int main(void)
{
    int arr[SIZE] = {0};

    for (int i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);

    shiftArray(arr, SIZE);

    for (int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}
/* Задача 6. Чаще других
Дан массив из 10 элементов. Определить, какое число в массиве встречается чаще всего.
Гарантируется, что такое число ровно 1. 

Данные на входе: 10 целых чисел через пробел 
Данные на выходе: Одно число, которое встречается чаще других. 

Пример
Данные на входе: 4 1 2 1 11 2 34 11 0 11 
Данные на выходе: 11
*/

#include <stdio.h>
#define SIZE 10

// В этом решении получаются лишние прогоны, но пока не знаю, как сделать лучше на Си.

int mostFreqNumber(int array[], int size)
{
    int count1 = 0, count2, num = -1;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size; j++)
        {
            count2 = 0;
            if (array[j] == array[i])
                count2++;
        }
        if (count2 > count1)
        {
            count1 = count2;
            num = array[i];
        }   
    }
    return num;
    
}

int main(void)
{
    int arr[SIZE] = {0};

    for (int i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);

    printf("%d\n", mostFreqNumber(arr, SIZE));

    return 0;
}
//random function
#include <stdio.h>
#include <stdlib.h>
#define n 10
void printArray(int a[])
{
    printf("\n Array \n");
    for (int i = 0; i < 10; i++)
        printf("%d  ", a[i]);
}
/*
61  37  40  34  83  82  100  22  86  48
 0   1   2   3   4   5   6   7   8   9
 i
 j
 a[j] = 61      a[j+1] = 37
37  61  40  34  83  82  100  22  86  48
 0   1   2   3   4   5   6   7   8   9
    j
*/
void bubble_sort(int arr[])
{
    int i, j, key;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {

                key = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = key;
            }
        }
    }
    printArray(arr);
}
int main()
{
    int a[20], min = 20, max = 101;
    for (int i = 0; i < n; i++)
        a[i] = (rand() % (max - min + 1)) + min;
    printArray(a);
    bubble_sort(a);
    return 0;
}

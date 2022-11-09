#include <iostream>

using namespace std;

int Count(int a[], int size)
{
    int count = 0;

    for (int i = 0; i < size; i++)
        if (a[i] % 2 != 0 && i % 13 != 0) count++;

    return count;
}

int Sum(int a[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
        if (a[i] % 2 != 0 && i % 13 != 0) sum += a[i];

    return sum;
}

void Create(int a[], int size)
{
    for (int i = 0; i < size; i++)
        a[i] = 15 + rand() % 85;

    return;
}

void Modify(int a[], int size)
{
    for (int i = 0; i < size; i++)
        if (a[i] % 2 != 0 && i % 13 != 0) a[i] = 0;

    return;
}

void Print(int a[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%s%i%s%s", (i == 0 ? "{ " : ""), a[i], (i < size - 1 ? ", " : ""), (i == size - 1 ? " }\n" : ""));
}

int main()
{
    srand(time(NULL));

    const int SIZE = 21;

    int* c = new int[SIZE];

    printf("Array before modification:\n");

    Create(c, SIZE);

    Print(c, SIZE);

    printf("Count: %i\nSum: %i\nArray after modification:\n", Count(c, SIZE), Sum(c, SIZE));

    Modify(c, SIZE);

    Print(c, SIZE);

    return 0;
}
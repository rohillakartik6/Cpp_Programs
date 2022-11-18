#include <iostream>
using namespace std;

void PrintArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void InsertElement(int a[], int n, int item, int k)
{
    int i, j;
    i = 0;
    j = n;

    n = n + 1;
    while (j >= k)
    {
        a[j + 1] = a[j];
        j = j - 1;
    }

    a[k] = item;
    PrintArray(a, n);
}

// void DeleteElement(int a[], int n, int DeletedIndex)
// {
//     int i, j;
//     i = 0;
//     j = n;

//     while (j < n)
//     {
//         a[DeletedIndex] = a[DeletedIndex + 1];
//         j = j - 1;
//     }
//     n = n - 1;
//     PrintArray(a, n);
// }

void DeleteElement(int a[], int n, int DeletedIndex)
{
    int i;
    for(i = DeletedIndex; i < n - 1; i++){
        a[DeletedIndex] = a[DeletedIndex + 1];
    }
    n--;
    PrintArray(a, n);
}

void InputArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

int main()
{
    int n = 5;
    // cin >> n;
    int a[n] = {1, 3, 5, 7, 8};
    int item = 10;
    int k = 2;
    int DeletedIndex = 2;

    // InputArray(a, n);
    PrintArray(a, n);
    // InsertElement(a, n, item, k);
    DeleteElement(a, n, DeletedIndex);
}
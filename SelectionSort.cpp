#include <iostream>
using namespace std;
void tsla(int a[], int length)
{
    int i, j, temp;
    for (i = 0; i < length - 1; i++)
    {
        for (j = i + 1; j < length; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int k = 0; k < length; k++)
    {
        cout << a[k] << endl;
    }
}
int main()//Driver code
{
    int arr[] = {232, 44545, 123, 5656, 534, 234};
    int len = sizeof(arr) / sizeof(arr[0]);
    tsla(arr, len);
    return 0;
}

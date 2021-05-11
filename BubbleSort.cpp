#include <iostream>
using namespace std;
void bubble(int a[], int length)
{
    int temp;
    for (int k = 0; k < length; k++)
    {
        for (int i = 0; i < length; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    for (int j = 0; j < length; j++)
    {
        cout << a[j] << endl;
    }
}
int main()
{
    int arr[] = {23, 12, 54, 21, 1};
    int len = sizeof(arr) / sizeof(arr[0]);
    bubble(arr, len);
    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n, position;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Display original array
    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nEnter position to delete: ";
    cin >> position;

    if (position < 1 || position > n)
    {
        cout << "Invalid position";
        return 0;
    }

    // Delete element
    for (int i = position - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n = n - 1;

    // Display updated array
    cout << "\nUpdated Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}


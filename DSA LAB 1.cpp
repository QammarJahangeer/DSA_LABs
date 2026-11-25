
#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, element, position;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Display original array
    cout << "\nOriginal Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nEnter element to insert: ";
    cin >> element;

    cout << "Enter position (1 to " << n + 1 << "): ";
    cin >> position;

    if (position < 1 || position > n + 1)
    {
        cout << "Invalid position!";
        return 0;
    }

    // Shift elements to the right
    for (int i = n; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = element;
    n++;

    // Display updated array
    cout << "\nUpdated Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}


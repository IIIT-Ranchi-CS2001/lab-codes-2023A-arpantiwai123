// Insertion sort..yahan hum swap nhi krte shift krte hain
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array :";
    cin >> n;
    int arr[n]; 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    { // assuming 0th index element is sorted..rounds
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {                        // us element se pehle sare sorted hain and unko ek baar right shift kiya to place it
                arr[j + 1] = arr[j]; // right shift..
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
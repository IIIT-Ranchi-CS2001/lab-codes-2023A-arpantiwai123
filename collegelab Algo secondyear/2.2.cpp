// Quick sort algorithm..Taking first element as pivot index..
#include <iostream>
using namespace std;
// partition algorithm..
int partition(int arr[], int si, int ei)
{
    int pivotElement = arr[si];
    int count = 0;
    for (int i = si + 1; i <= ei; i++)
    {
        if (arr[i] <= pivotElement)
            count++;
    }
    int pivotIdx = count + si;
    swap(arr[si], arr[pivotIdx]);
    
    int i = si;
    int j = ei;
    while (i < pivotIdx && j > pivotIdx)
    {
        if (arr[i] <= pivotElement)
            i++;
        if (arr[j] > pivotElement)
            j--;
        else if (arr[i] > pivotElement && arr[j] <= pivotElement)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}
void quicksort(int arr[], int si, int ei)
{
    if (si >= ei)
        return; // base case..
    int pi = partition(arr, si, ei);
    quicksort(arr, si, pi - 1);
    quicksort(arr, pi + 1, ei);
}
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
    quicksort(arr, 0, n - 1);
    cout << "Sorted array using quick sort is as follows :\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
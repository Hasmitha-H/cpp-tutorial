#include <iostream>
using namespace std;
 
void quicksort (int [], int, int);
 
int main()
{
    int a[50];
    int n, i;
 
    cin>>n; 
    cout<<"Enter the elements to be sorted:"<<endl;
    for (i = 0; i < n; i++)
    {
        cin>>a[i];
    } 
    quicksort(a, 0, n - 1);
    cout<<"sorted elements are "<<endl;
    for (i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
void quicksort(int a[], int low, int high)
{
    int pivot, i, j, temp;
    if (low < high)
    {
        pivot = low;
        i = low;
        j = high;
        while (i < j) 
        {
            while (a[i] <= a[pivot] && i <= high)
            {
                i++;
            }
            while (a[j] > a[pivot] && j >= low)
            {
                j--;
            }
            if (i < j)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        temp = a[j];
        a[j] = a[pivot];
        a[pivot] = temp;
        quicksort(a, low, j - 1);
        quicksort(a, j + 1, high);
    }
}
#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int i,n_size;
    int even,odd;
    even = 0;
    odd = 0;
    cout << "Enter the size of the array: " << endl;
    cin >> n_size;

    cout << "Enter the elements in the array: " << endl;
    for(i=0;i<n_size;i++)
    {
        cout << "Enter the array elements ["<<i<<"]:";
        cin >> arr[i];
    }
    for (i=0;i<n_size;i++)
    {
        if (arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "The total even numbers in the list are: " << even << endl;
    cout << "The total odd numbers in the list are: " << odd << endl;
    return 0;
} // namespace std;

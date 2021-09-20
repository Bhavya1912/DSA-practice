#include<iostream>
using namespace std;

int main() {

    int arr[10], n, i, num, loc;

    cout << "Enter size of an array:";
    cin>>n;

    cout << "Enter array elements:";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element for insert:";
    cin>>num;
    cout << "Enter location:";
    cin>>loc;

    for (i = n; i >= loc; i--) {
        arr[i] = arr[i - 1];
    }
    n++;
    arr[loc - 1] = num;

    cout << "Array list after insertion:";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


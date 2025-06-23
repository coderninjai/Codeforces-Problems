// #include<iostream>
// #include<algorithm>
// using namespace std;

// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         // Optimization: Track if any swaps were made in this pass
//         bool swapped = false;

//         for (int j = 0; j < n - i - 1; j++) {
//             // Swap if elements are out of order
//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j + 1]);
//                 swapped = true;
//             }
//         }

//         // If no swaps happened, the array is already sorted
//         if (!swapped) break;
//     }
// }

// int main(){
//     int n,a,b;
//     cin>>n;
//     int arr[10000];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     bubbleSort(arr,n);
//     for(int i=0;i<n;i++){

//         if((arr[i])%2!=0){
//             a=a+arr[i];
//         }else{
//             b=b+arr[i];
//         }
//     }
//     cout<<a<<endl;
//     cout<<b;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int sereja = 0, dima = 0, left = 0, right = n - 1;
    bool turn = true;

    while (left <= right)
    {
        if (a[left] > a[right])
        {
            if (turn)
            {
                sereja += a[left];
            }
            else
            {
                dima += a[left];
            }
            left++;
        }
        else
        {
            if (turn)
            {
                sereja += a[right];
            }
            else
            {
                dima += a[right];
            }
            right--;
        }
        turn = !turn;
    }
    cout << sereja << " ";
    cout << dima;
    return 0;
}
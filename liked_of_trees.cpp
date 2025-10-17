#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,max_k=0;
    cin>>n;

    vector<int>a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>max_k){
            max_k=a[i];
        }

    }
    vector<int> liked_numbers;
    int num = 1;
    while (liked_numbers.size() < max_k) {
        if (num % 3 != 0 && num % 10 != 3) {
            liked_numbers.push_back(num);   
        }
        num++;
    }

    // Output the k-th liked number for each test case
    for (int i = 0; i < n; i++) {
        cout << liked_numbers[a[i] - 1] << endl;
    }
    return 0;
}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n; 
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
       cin >> arr[i];
    }

    for(int i = n; i > 0; i--){
        int out;
        out = arr[i-1];
        cout << out << ' ';
    }


    return 0;
}

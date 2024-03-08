#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[10];
    for(int i = 0; i<10; i++){
        cin >> arr[i];
    }
    cout << arr[2] + arr[4] + arr[9];
    return 0;
}
#include<iostream>
using namespace std;

int secLarge(int arr[], int n) {

    int a = 0;
    int c = 0;

    for(int i = 0; i<n; i++) {
        if(arr[i]>a) 
            a = arr[i];
    }

    for(int i = 0; i<n; i++) {
        if(arr[i]>c && arr[i]<a) {
            c = arr[i];
            return c;
        }
    }

    return -1;
}

int main() {

    int n;
    cin>>n;

    int arr[1000];
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
    }

    int ans = secLarge(arr,n);

    cout<<ans<<endl;
    return 0;
}

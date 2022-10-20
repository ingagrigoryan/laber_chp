#include<iostream> 
using namespace std; 
 
int main() { 
    int n, a1 = 1, a2 = 1, i, result; 
    cin >> n; 
    int a[n]; 
    for(i = 0; i < n; i++){ 
        cin >> a[i]; 
    } 
    i = 0; 
    while(i < n){ 
        a1 = a1 * a[i]; 
        i++; 
    } 
    i = 1; 
    while(i <= n + 1){ 
        a2 = a2 * i; 
        i++; 
    } 
    result = a2 / a1; 
    cout << "Pakasox tarry: " << result; 
}

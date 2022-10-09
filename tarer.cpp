#include <iostream>

using namespace std;

int main(){
    string myString;
    getline(cin, myString);
    for (int i = 0; i < myString.length(); i++) {
       cout<<((char)(myString[i]+1));
    }
}

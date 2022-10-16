#include <iostream>
#include <map>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    cout<<endl;
    std::map<char, int> myMap;
    int count = 1;
    for (int i = 0; i < s.length(); i++) {
        char a = s[i];
        for (int j = i+1; j < s.length(); j++) {
            if(a == s[j]){
                count++;
            }
        }
        myMap.insert({a, count});
        count = 1;
    }

    for (auto i = myMap.begin(); i!= myMap.end(); i++) {
        cout<<i->first<<i->second;
    }
    return 0;
}

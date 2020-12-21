#include <bits/stdc++.h>

using namespace std;

int main() {
    int c = 1;
    string s;
    map<string, string> m;
    m["HELLO"] = "ENGLISH";
    m["HOLA"] = "SPANISH";
    m["HALLO"] = "GERMAN";
    m["BONJOUR"] = "FRENCH";
    m["CIAO"] = "ITALIAN";
    m["ZDRAVSTVUJTE"]= "RUSSIAN";
    cin >> s;
    while (s != "#") {
        if(m.find(s) != m.end())printf("%s %d: %s\n", "Case", c++,m.find(s)->second.c_str());
        else printf("%s %d: %s\n", "Case",c++ ,"UNKNOWN");
        cin >> s;
    }
}
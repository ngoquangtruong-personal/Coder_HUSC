#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string Pretty(string S)
{
    string result = "";
    for (long unsigned int i = 0; i < S.size(); i++)
    {
        if (isalpha(S[i]))
            result += tolower(S[i]);
    }
    return result;
}
string isPalindrome(string S)
{
    for (long unsigned int i = 0; i < S.size(); i++)
        if (S[i] != S[S.size() - i - 1])
            return "No";
    return "Yes";
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("Input.inp", "r", stdin);
    freopen("Output.out", "w", stdout);
    #endif

    while (true)
    {
        string S;
        getline(cin, S);
        if (S.empty())
            break;

        cout << isPalindrome(Pretty(S)) << endl;
    }

    return 0;
}
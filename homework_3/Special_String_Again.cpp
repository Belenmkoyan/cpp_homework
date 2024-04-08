#include <bits/stdc++.h>
using namespace std;

long substrCount(int n, string s) {
    long count = 0;
    for (int i = 0; i < n; i++) {
        int repeatLength = 1;
        while (i + 1 < n && s[i] == s[i + 1]) {
            repeatLength++;
            i++;
        }
        count += (repeatLength * (repeatLength + 1)) / 2; 
        int pointer = 1;
        while (i - pointer >= 0 && i + pointer < n && s[i + pointer] == s[i - 1] && s[i - pointer] == s[i - 1]) {
            count++;
            pointer++;
        }
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    long result = substrCount(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

string isValid(string s) {
    unordered_map<char, int> freq;
    
    for (char c : s)
        freq[c]++;

    int firstFreq = freq[s[0]]; 
    bool removed = false; 

    for (const auto &pair : freq) {
        int currentFreq = pair.second;
        if (currentFreq != firstFreq) {
            if (!removed && ((currentFreq == firstFreq + 1) || (currentFreq == 1))) {
                removed = true;
                continue;
            } else {
                return "NO";
            }
        }
    }

    return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}


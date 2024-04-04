#include <bits/stdc++.h>

using namespace std;

int makeAnagram(string a, string b) {
     int count = 0 ;
     int result = 0;
    string str ="";
    for(int i =0 ; i<a.size();++i){
        for(int j = 0 ; j<b.size();++j){
            if(a[i]==b[j] and a[i]>0 and b[j]>0){
                a[i]=b[j]=-1;
                str+=a[i];
                count+=2;
                
            }
        }
      
    }
     result = (a.size()+b.size())-count;
    return result;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}

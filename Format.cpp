#include <bits/stdc++.h>
#include <unistd.h>
#include <unwind.h>

using namespace std;

class Format
{
public:
    void print(string s)
    {
        cout << setw(32) << "||"<<flush;
        for (int i = 0; i < s.length() + 12; i++)
        {
            sleep(.001);
            cout << "="<<flush;
        }
        cout << "||";
        cout << endl
             << setw(32) << "||" << endl;
        cout << setw(32)<< "||"<< setw(5);
        for (auto i : s)
        {
            sleep(.001);
            cout << i<<flush;
        }
        cout << "||" << endl;
        cout << setw(32) << "||\t";
        for (int i = 0; i < s.length() + 12; i++)
        {
            sleep(.001);
            cout << "="<<flush;
        }
        cout << "||";
    }
};
// int main()
// {
//     Format f;
//     f.print("Hello");
//     return 0;
// }
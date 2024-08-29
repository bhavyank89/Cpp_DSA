#include <bits/stdc++.h>
using namespace std;
// Understanding nesting of memeber function

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void display(void);
    void ones_compliment(void);
};

void binary ::read(void)
{
    // nesting of member function
    chk_bin();
    cout << "Enter a valid binary number : ";
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Invalid binary number..." << endl;
            exit(0);
        }
    }
}
void binary ::display()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
void binary ::ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
}
int main()
{
    binary b;
    b.read();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}
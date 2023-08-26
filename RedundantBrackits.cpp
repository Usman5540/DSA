#include <iostream>
#include <stack>
using namespace std;
bool Redundant(string s)
{
    stack<char> st;
    int n = s.size();
    for (int i = 0; i < n; i++)

    {
        bool ans = false;
        if (s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i] == '/')
        {
            st.push(s[i]);
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')

        {
            if (st.top() == ')')
            {
                ans = true;
            }
            while (st.top() == '+' or st.top() == '-' or st.top() == '*' or st.top() == '/')
            {
                st.pop();
            }
            st.pop();
            return true;
        }
    }
}
int main()
{
    string s = '(a+b)';
    if (Redundant(s))
    {
        cout << "you brackets are not redundant";
    }
}
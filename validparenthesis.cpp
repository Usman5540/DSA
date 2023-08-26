#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' or s[i] == '{' or s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (!st.empty() &&
                 ((s[i] == ')' && st.top() == '(') ||
                  (s[i] == ']' && st.top() == '[') ||
                  (s[i] == '}' && st.top() == '{')))
        {
            st.pop();
        }
        else
        {
            return false;
        }
    }
    return st.empty();
    {
        return false;
    }
}
int main()

{

    string s = " (}) ";
    if (isValid(s))
    {
        cout << "you parentheses is valid ";
    }
    else
    {

        cout << "your parenthes is not valid ";
    }
    return 0;
}
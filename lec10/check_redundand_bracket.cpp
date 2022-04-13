#include<stack>
bool checkRedundantBrackets(string expression) {
	// Write your code here
    string A=expression;
     stack<char> s;
    auto size = A.length();
    auto i = 0;
    while(i<size)
    {
        char c = A[i];
        if (c == '(' || c == '+' || c == '*' || c == '-' || c == '/')
            s.push(c);
        else if (c == ')')
        {
            if (s.top() == '(')
                return 1;
            else
            {
                while (!s.empty() && s.top() != '(')
                    s.pop();
                s.pop();
            }
        }
        ++i;
    }
    return 0;
}
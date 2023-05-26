#include <iostream>
#include <stack>
#include <string>
using namespace std;

const int MAX_SIZE = 100;

struct node
{
    int data;
    struct node *nxtad;
};
struct node *top, *top1, *temp;
int count = 0, elr;

int isEmpty()
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


bool is_valid_code(const string &code)
{
    stack<string> stack;

    size_t pos = 0;
    while (pos < code.length())
    {
        if (code[pos] == '<')
        {
            size_t end_pos = code.find('>', pos);
            if (end_pos == string::npos)
            {
                return false; // opening tag without closing tag
            }
            string tag = code.substr(pos, end_pos - pos + 1);
            if (tag.substr(0, 2) == "</")
            {
                if (stack.empty() || stack.top() != tag.substr(2))
                {
                    return false; // closing tag doesn't match opening tag
                }
                stack.pop();
            }
            else
            {
                stack.push(tag.substr(1));
            }
            pos = end_pos + 1;
        }
        else
        {
            ++pos;
        }
    }

    return stack.empty();
}

int main()
{
    string code = "<START><READ>X</READ><DISPLAY>X</DISPLAY></START>";
    if (is_valid_code(code))
    {
        cout << "Code is valid.\n";
    }
    else
    {
        cout << "Code is invalid.\n";
    }
    return 0;
}

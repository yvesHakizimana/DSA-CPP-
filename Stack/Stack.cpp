#include <iostream>
using namespace std;
#include <stack>

void reverseString(const string& reversedStr){
    stack<char> stack1;
    for(char i : reversedStr)
        stack1.push(i);
    for (int i = 0; i < reversedStr.length(); ++i) {
        char letter = stack1.top();
        cout << letter;
        stack1.pop();
    }

}

bool balanceExpressions(const string& expression){
    stack<char> balanceStack;
    for (char ch : expression ){
        if(ch == '{' || ch == '(' || ch == '[' || ch == '<' )
            balanceStack.push(ch);
        else{
            //Checking if we have an empty stack and remaining with closed bracket
            if(balanceStack.empty())
                return false;

            //Check if there is a matching related to the top
            if((ch == '}' && balanceStack.top() == '{') or (ch == ']' && balanceStack.top() == '[') or (ch == ')' && balanceStack.top() == '(') or (ch == '>' && balanceStack.top() == '<') )
                balanceStack.pop();

            //If no matching happened return "false" because no matching
            else
                return false;
        }

    }
    return balanceStack.empty();
}


int main(){
    stack<char> stack1;
    string strToBeReversed = "yves";
//    reverseString(strToBeReversed);
    string expression = "{(([])[])[]]}";
    bool test = balanceExpressions(expression);
    if(test)
        cout << "The string entered is balanced";
    else
        cout << "The String entered is not balanced";
}
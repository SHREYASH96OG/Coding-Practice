
// CODE

#include<iostream>
using namespace std;


string rev_word(string word)
{
    string rev_str = "";
    for(char i:word)
    {
        rev_str = i+rev_str;

    }
    return rev_str;

}

int main()
{
    string word ;
    cin >> word;
    cout<< rev_word(word);

}

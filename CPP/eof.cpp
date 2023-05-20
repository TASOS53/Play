#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word;

    cout<<"give me a word"<<endl;
    cin>>word;
    while ( !cin.eof() )
    {
        cout<<"the word is : "<<word<<endl;
        cout<<"give me next word"<<endl;
        cin>>word;
    }
    
    


    return 0;
}
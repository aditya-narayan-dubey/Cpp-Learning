#include<iostream>
using namespace std;

int main()
{
    string input;

    cout<<"AI Chatbot has started 🤖"<<endl;
    cout<<"Now u can ask him questions like:(hello, how, who, bye)"<<endl;

    while(true){
        
        cout<<"\nYou: ";
        cin>>input;

        if(input == "hello"){
            cout<<"AI: Hello there how r u"<<endl;
        }
        else if(input == "how"){
            cout<<"AI: I am fine"<<endl;
        }
        else if(input == "who"){
            cout<<"AI: Aditya sir is the big daddy 😎"<<endl;
        }
        else if(input == "bye"){
            cout<<"AI: Goodbye 👋"<<endl;
            break;
        }
        else{
            cout<<"AI: Sorry I dont understand"<<endl;
        }
    }

    return 0;
}
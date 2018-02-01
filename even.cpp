#include <iostream>
#include <string>

using namespace std;

int main(){
    int userInput;
    bool allEven = true;
    cout<<"Please enter a number: "<<endl;
    while(cin>>userInput){
        if(userInput % 2 != 0){
            allEven = false;
        }
    }
    if (allEven == true){
        cout<<"all even"<<endl;
        return 0;
    }
    else{
        cerr<<"not all even"<<endl;
        return 1;
    }
    
}

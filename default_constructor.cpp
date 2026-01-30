#include <iostream>
using namespace std;
class GFG{
    string name;
    int roll;
    public:
    GFG(){
        name = "Anay";
        roll = 34;
        cout<< "Default constructor called";
    }

    void display(){
        cout<<"name: "<<name<<" "<<"roll no: "<<roll;
    }
};

int main(){
    GFG S1;
    S1.display();
    return 0;
}
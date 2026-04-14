#include<iostream>
using namespace std;
class add
{
    public :
    add(int a, int b)
    {
        int c = a+b;
        cout << "Sum =" " " << c;    
    } 
};
int main ()
{
    add ab(10,20);
    return 0;
}
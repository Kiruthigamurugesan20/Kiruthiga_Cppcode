// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class vericoreengine{
    public:
    ~vericoreengine(){
        cout<<"engine deleted"<<endl;
    }
    
    
};

class Tatacar{
    vericoreengine* engineObj;
    public:
    Tatacar(){
        engineObj=new vericoreengine();
    }
    ~Tatacar(){
        cout<<"Tatacar deleted"<<endl;
        delete engineObj;
    }
};


int main() {
    // Write C++ code here
    Tatacar hexa;

    return 0;
}

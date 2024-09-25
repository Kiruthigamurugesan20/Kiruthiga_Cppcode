// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>

using namespace std;

class Printer{
    private:
    string assetId;
    string model; 
    public:
     Printer(string assetIdArg, string modelArg): assetId{assetIdArg},model{modelArg}{
        cout<<"Printer instantiated"<<endl;
    }
    void print(string content){
        cout<<"printing info:"<<content<<endl;
    }
    ~Printer(){
        cout<<"printer destructor"<<endl;
        
    }
};

class Scanner{
    private:
    string assetId;
    string model; 
    public:
    Scanner(string assetIdArg, string modelArg): assetId{assetIdArg},model{modelArg}{
        cout<<"scanner instantiated"<<endl;
    }
    void scan(string content){
        cout<<"Scanning info:"<<content<<endl;
    }
    ~Scanner(){
        cout<<"scanner destructor"<<endl;
        
    }
};
int main() {
    // Write C++ code here
    Printer printerobj{"p1", "HP"};
    Scanner scannerobj{"s1", "HP"};
    
    printerobj.print("doc1.txt");
    scannerobj.scan("doc2.txt");

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

// IPrinter interface defined
class IPrinter {
public:
    virtual void print(string path) = 0; 
};

// IScanner interface defined
class IScanner {
public:
    virtual void scan(string path) = 0; 
};

// Printer class inheriting from IPrinter
class Printer : public IPrinter {
public:
    void print(string path) {
        cout << "Printing ..... " << path << endl;
    }
};

// Scanner class inheriting from IScanner
class Scanner : public IScanner {
public:
    void scan(string path) {
        cout << "Scanning ..... " << path << endl;
    }
};

// PrintScanner class inheriting both IPrinter and IScanner
class PrintScanner : public IPrinter, public IScanner {
public:
    void print(string path) {
        cout << "PrintScanner printing ..... " << path << endl;
    }
    void scan(string path) {
        cout << "PrintScanner scanning ..... " << path << endl;
    }
};

// execute printing and scanning tasks
class TaskManager {
public:
    static void executePrintTask(IPrinter *printer, string documentPath) {
        printer->print(documentPath);
    }

    static void executeScanTask(IScanner *scanner, string documentPath) {
        scanner->scan(documentPath);
    }
};

int main() {
    Printer printerObj;
    Scanner scannerObj;
    PrintScanner printScannerObj;

    // Execute print and scan tasks
    TaskManager::executePrintTask(&printerObj, "Test.doc");
    TaskManager::executeScanTask(&scannerObj, "MyImage.png");

    // PrintScanner can both print and scan
    TaskManager::executePrintTask(&printScannerObj, "NewDoc.doc");
    TaskManager::executeScanTask(&printScannerObj, "YourImage.png");

    return 0;
}

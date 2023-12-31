#include <iostream>
#include <new>
#include <string>

using namespace std;
const int BUF = 512;

class JustTesting {
private:
    string words;
    int number;

public:
    JustTesting(const string& s = "Testing object", int n = 0) {
        words = s;
        number = n;
        cout << words << " constructed. \n";
    }
    ~JustTesting() {
        cout << words << " deleted\n";
    }
    void Show() const {
        cout << words << ", " << number << endl;
    }
};

int main() {
    char* buffer = new char[BUF];
    JustTesting *pc1, *pc2;

    pc1 = new (buffer) JustTesting;
    pc2 = new JustTesting("heap1", 20);

    cout << "blok address: \n";
    cout << "buffer: " << (void*)buffer << " heap: " << pc2 << endl;
    cout << "Memory contents: \n";
    cout << pc1 << " : ";
    pc1->Show();
    cout << pc2 << " : ";
    pc2->Show();

    JustTesting *pc3, *pc4;
    pc3 = new (buffer+ sizeof(JustTesting)) JustTesting("Better idea", 6);
    pc4 = new JustTesting("Heap2", 10);

    cout << "Memory contents: \n";
    cout << pc3 << " : ";
    pc3->Show();
    cout << pc4 << " : ";
    pc4->Show();

    delete pc2;
    delete pc4;

    pc3->~JustTesting();
    pc1->~JustTesting();

    delete[] buffer;

    return 0;
}
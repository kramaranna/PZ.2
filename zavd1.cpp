#include <iostream>
#include <forward_list>
#include <string>
using namespace std;

int main() {
    forward_list<string> tech = { "HTML", "CSS", "JavaScript", "React", "PHP" };
    cout << "Вебтехнології:" << endl;
    for (string item : tech) {
        cout << item << endl;
    }
    return 0;
}

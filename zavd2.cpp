#include <iostream>
#include <forward_list>
#include <string>
using namespace std;

int main() {
    forward_list<string> tech = { "HTML" };
    tech.push_front("TypeScript");
    tech.push_front("Node.js");
    cout << "Список після додавання елементів:" << endl;
    for (string item : tech) {
        cout << item << endl;
    }
    tech.pop_front();
    cout << "\nПісля видалення першого елемента:" << endl;
    for (string item : tech) {
        cout << item << endl;
    }
    return 0;
}

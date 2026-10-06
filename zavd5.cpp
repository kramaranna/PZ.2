#include <iostream>
#include <forward_list>
#include <string>
using namespace std;

int main() {
    forward_list<string> tech = { "HTML", "CSS", "JavaScript", "React", "PHP" };
    string searchElement = "React";
    string newElement = "Vue.js";
    
    auto it = tech.begin();
    while (it != tech.end()) {
        if (*it == searchElement) {
            tech.insert_after(it, newElement);
            break;
        }
        ++it;
    }
    
    if (it == tech.end()) {
        cout << "Заданий елемент відсутній у списку." << endl;
    }
    
    cout << "Оновлений список:" << endl;
    for (string item : tech) {
        cout << item << " ";
    }
    
    return 0;
}

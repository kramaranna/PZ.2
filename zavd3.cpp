#include <iostream>
#include <forward_list>
#include <string>
using namespace std;

int main() {
    forward_list<string> tech = { "HTML", "CSS", "JavaScript", "React", "PHP" };
    string searchElement = "React";
    auto it = tech.begin();
    while (it != tech.end()) {
        if (*it == searchElement) {
            break;
        }
        ++it;
    }
    if (it != tech.end()) {
        cout << "Елемент знайдено";
    } 
    else {
        cout << "Елемент не знайдено";
    }
    return 0;
}

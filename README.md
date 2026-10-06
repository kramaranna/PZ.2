# PZ.2
# Практична робота №2: Реалізація списків. Однозв’язний список.
**Виконав:** студентка групи 4СОМ, Крамар Анна (Варіант № 4)

## Завдання.
**Завдання 1:** [Текст вашої задачі з банку варіантів]

### 💻 Коди програм 1-5:
```cpp
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
```
---
```cpp
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
```
---
```cpp
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
```
---
```cpp
#include <iostream>
#include <forward_list>
#include <string>
using namespace std;

int main() {
    forward_list<string> tech = { "HTML", "CSS", "JavaScript", "React", "PHP" };
    int sum = 0;
    for (string item : tech) {
        sum += item.length();
    }
    cout << "Загальна кількість символів: " << sum;
    return 0;
}
```
---
```cpp
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
```
### 💻 Результати кодів програм:

### 👁️ Візуалізація пам'яті:

### Висновок.
  Під час виконання практичної роботи я успішно реалізувала усі поставлені завдання, увесь написаний код працює коректно. 
   Цікаво було працювати з ітераторами, як на мене, вони відкривають зручні можливості для керування елементами списку. Цікаво було дослідити новий спосіб роботи зі списками.
   Візуалізація структури даних дуже допомогла краще зрозуміти логіку взаємозв'язків між елементами списку.

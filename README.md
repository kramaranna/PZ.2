# PZ.2
# Практична робота №2: Реалізація списків. Однозв’язний список.
**Виконав:** студентка групи 4СОМ, Крамар Анна (Варіант № 4)

## Завдання.
<img width="740" height="61" alt="image" src="https://github.com/user-attachments/assets/77e376b2-9fe5-43e2-9202-3a32dcc3ac26" />
<img width="738" height="47" alt="image" src="https://github.com/user-attachments/assets/fcd67e09-e7e2-49ba-82c2-5b8d8396ce73" />
<img width="534" height="55" alt="image" src="https://github.com/user-attachments/assets/abe38393-dd8f-49fb-804a-a5fbf4147952" />
<img width="538" height="65" alt="image" src="https://github.com/user-attachments/assets/6d1f6b0a-3341-4fa9-9c31-89aca30bf431" />
<img width="659" height="60" alt="image" src="https://github.com/user-attachments/assets/aaa8f9f2-e7e8-4dac-abbd-c1e007e60997" />
<img width="549" height="56" alt="image" src="https://github.com/user-attachments/assets/191e99e5-774c-4dea-876d-3772db89094f" />
<img width="467" height="77" alt="image" src="https://github.com/user-attachments/assets/24aa0ae0-49df-43ec-b73d-74b03fe1802e" />


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
<img width="591" height="1070" alt="2026-10-06 15 53 32" src="https://github.com/user-attachments/assets/f2f6d3e6-d000-473e-8305-f14cb9a3e2eb" />
<img width="591" height="1044" alt="2026-10-06 15 53 45" src="https://github.com/user-attachments/assets/03a8440b-d1d6-4689-b112-771332d006e9" />
<img width="591" height="875" alt="2026-10-06 15 53 49" src="https://github.com/user-attachments/assets/01432f72-3cec-498e-867c-35dbe6d0f368" />
<img width="591" height="900" alt="2026-10-06 15 53 53" src="https://github.com/user-attachments/assets/3c2cab1e-f929-477c-9869-6dc3d0ba7fd0" />
<img width="591" height="1071" alt="2026-10-06 15 53 55" src="https://github.com/user-attachments/assets/d7d6d159-3d4d-46a3-9f39-0ecc946e1549" />

### 👁️ Візуалізація пам'яті:
<img width="1512" height="604" alt="image" src="https://github.com/user-attachments/assets/3ef081d1-b054-4736-8d2b-4ee2f5d3cf09" />
<img width="1512" height="557" alt="image" src="https://github.com/user-attachments/assets/6401e893-a5cc-42f3-9a6d-9087af0c4d47" />
<img width="1259" height="434" alt="image" src="https://github.com/user-attachments/assets/c14e4b0c-e852-4a3d-b1f2-9f09015163ff" />
<img width="1404" height="525" alt="image" src="https://github.com/user-attachments/assets/26605fcf-f8e6-4938-bb80-3e2344d54fa8" />
<img width="1286" height="575" alt="image" src="https://github.com/user-attachments/assets/1834f1bd-31e6-4350-aced-cdd9159ac7e9" />
<img width="1287" height="525" alt="image" src="https://github.com/user-attachments/assets/56db12f8-e249-469f-a9c8-2686b940fb81" />
<img width="1502" height="556" alt="image" src="https://github.com/user-attachments/assets/7309ecb9-ca9f-4a8e-8a10-d832be5a3b19" />
<img width="1381" height="347" alt="image" src="https://github.com/user-attachments/assets/ed0c1d65-df36-415a-b650-2de2d27fa488" />
<img width="1512" height="494" alt="image" src="https://github.com/user-attachments/assets/1867f3a3-835f-4074-85ad-09d082bbb3f4" />
<img width="1300" height="411" alt="image" src="https://github.com/user-attachments/assets/0fa13d61-53c4-4065-973a-0a5155e983a1" />
<img width="898" height="353" alt="image" src="https://github.com/user-attachments/assets/992b1b6d-eaef-4ce3-a260-63d6a6dae7da" />
<img width="999" height="401" alt="image" src="https://github.com/user-attachments/assets/6a37097b-05dc-4d56-8e6d-1831ad607f72" />
<img width="1509" height="508" alt="image" src="https://github.com/user-attachments/assets/e9a20bad-2cc9-409c-b6b4-c67324fead22" />
<img width="1502" height="588" alt="image" src="https://github.com/user-attachments/assets/a8edcca9-5acb-436f-9bc1-d335e6cc95ee" />
<img width="1451" height="556" alt="image" src="https://github.com/user-attachments/assets/6abe4fd5-cf08-4d98-b85e-8d41d69af983" />




### Висновок.
  Під час виконання практичної роботи я успішно реалізувала усі поставлені завдання, увесь написаний код працює коректно. 
   Цікаво було працювати з ітераторами, як на мене, вони відкривають зручні можливості для керування елементами списку. Цікаво було дослідити новий спосіб роботи зі списками.
   Візуалізація структури даних дуже допомогла краще зрозуміти логіку взаємозв'язків між елементами списку.

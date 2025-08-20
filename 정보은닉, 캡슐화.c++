#include <iostream>
#include <cstring>
#include <cctype>

#define NAME_LENGTH 10

using namespace std;

class Person {
private:
    char name[NAME_LENGTH + 1];
    char phone[15];
    char address[30];

    bool isValidPhone(const char* phoneNumber) {
        for (int i = 0; phoneNumber[i] != '\0'; ++i) {
            if (!isdigit(phoneNumber[i]) && phoneNumber[i] != '-') {
                return false;
            }
        }
        return true;
    }

public:
    void setName(const char* newName) {
        strncpy(name, newName, NAME_LENGTH);
        name[NAME_LENGTH] = '\0';
    }

    void setPhone(const char* newPhone) {
        if (isValidPhone(newPhone)) {
            strncpy(phone, newPhone, 14);
            phone[14] = '\0';
        } else {
            cout << "Invalid phone number format!" << endl;
            phone[0] = '\0';
        }
    }

    void printInfo() const {
        cout << "Name: " << name << endl;
        cout << "Phone: " << (phone[0] ? phone : "Not set") << endl;
        cout << "Address: " << address << endl;
    }

    void join() {
        cout << "이름 입력 : ";
        cin >> name;
        cout << "전화번호 입력 : ";
        cin >> phone;
        cout << "주소 입력 :";
        cin >> address;
        if(isValidPhone(phone)) {
            cout << "전화번호 O" << endl;
            cout << "회원가입 완료" << endl;
            printInfo();
        } else {
            cout << "전화번호 X" << endl;
            cout << "회원가입 실패" << endl;
        }
    }
};

int main() {
    Person p1;
    p1.join();

    return 0;
}

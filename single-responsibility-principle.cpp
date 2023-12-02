/***************************************************
*
* This example shows the correct way of implementing the Single Responsability Principle of SOLID
*
* (One way of do it would be join all methods into a single class User ... not a good programming principle!)
*
* "User" has 2 responsibilities = 1) authentication (login and logout) and 2) printing
*
****************************************************/

class Authentication {
public:
    void login() {
        cout << "User logged in" << endl;
    }
    void logout() {
        cout << "User logged out" << endl;
    }
};

class UserInfo {
public:
    void printUserInfo(string username) {
        cout << "Username: " << username << endl;
    }
};

class User : public Authentication, public UserInfo {
};

int main() {
    User user;
    user.login();
    user.printUserInfo("Abhishek");
    user.logout();
    return 0;
}{

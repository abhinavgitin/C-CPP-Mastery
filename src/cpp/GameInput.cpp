#include <iostream>
#include <string>
using namespace std;

class GameInput {
    private:
        string username;
        int id;
        string password;
    
    public:
        friend void display(GameInput &);
        friend void getUserName(GameInput &);
        friend void getId(GameInput &);
        friend void getPassword(GameInput &);
    
    public:
        GameInput() {
            this->username = "";
            this->id = 0;
            this-> password = "";
        }
        GameInput( string username , int id, string password ) {
            this->username = username;
            this->id = id;
            this->password = password;
        }
};

int getIntegerInput( string message ) {
    cout<<message<<endl;
    int temp;
    cin>>temp;
    cin.ignore();
    return temp;
}

string getStringInput( string message ) {
    cout<<message;
    string temp;
    getline(cin, temp);
    return temp;
}

void getUserName( GameInput &uname ) {
    uname.username = getStringInput("Enter your username : ");
    cout<<endl;
}

void getId(GameInput &userid ) {
    userid.id = getIntegerInput("Enter your User Id : ");
    cout<<endl;
}

void getPassword(GameInput &key ) {
    key.password = getStringInput("Enter the password for your account : ");
    cout<<endl;
}

void display(GameInput &show) {
    cout<<"================================================"<<endl;
    cout<<"The Username created is : "<<show.username<<endl;
    cout<<"The User ID created is : "<<show.id<<endl;
    cout<<"The password created is : "<<show.password<<endl;
    cout<<"================================================"<<endl;
}

int main() {
    GameInput game;
    getUserName(game);
    getId(game);
    getPassword(game);
    display(game);
    return 0;
}
#include <iostream>
using namespace std;

class Tree {
    private:
        int noOfLines;
        int steam;

    public: 
        friend void read(Tree &);
        friend void display(Tree);
};

int getIntegerInput( string promptMessage ) {
    int input;
    cout<<promptMessage;
    cin>>input;
    return input;
}

void read(Tree &input) {
    input.noOfLines = getIntegerInput("Enter the total No of the line of the tree you want to be printed : ");
    input.steam = (input.noOfLines/2)+2;
}

void display( Tree shape ) {
    for ( int i = 1 ; i <= shape.noOfLines ; i++ ) {
        for ( int j = i ; j <= shape.noOfLines ; j++ ) {
            cout<<" ";
        }
        for ( int k = 1 ; k <= i*2-1 ; k++ ) {
            cout<<"*";
        }
        cout<<endl;
    }
    for ( int m = 1 ; m < shape.steam ; m++ ) {
        for ( int n = 1 ; n < shape.noOfLines ; n++ ) {
            cout<<" ";
        }
        cout<<"**";
        cout<<endl;
    }
}

int main() {
    Tree tree;
    read(tree);
    display(tree);
    // it goes upto 69 😋
    return 0;
}
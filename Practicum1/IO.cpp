#include <vector>
#include <iostream>

using namespace std;

/* 
test takes a vector of ints (where the int is the id of the vertex)
and outputs it to test the group and returns True if any of the
members of the group is true
*/
bool test(vector<int> group) {
    int size = group.size();
    string answer = "";

    cout << "test ";
    for (int i = 0; i < size; i++) {
        cout << group[i] << " ";
    }
    cout << "\n";
    cin >> answer;
    if (answer.find("true")) {
        return true;
    }
    return false;
}

/*
confirm takes a group of positive tested people and verifies it with the assignment
input and returns true the group is correct and false if it is not correct
*/
bool verifies(vector<int> group) {
    int size = group.size();
    string answer = "";

    cout << "answer";
    for (int i = 0; i < size; i++) {
        cout << group[i] << " ";
    }
    cout << "\n";
    cin >> answer;
    if (answer.find("succes")) {
        return true;
    }
    return false;
}
#include <iostream>
#include <fstream>
#include <deque>

using namespace std;

int main() {

    // ifstream file("foods.txt"); INPUT FILE STREAM
    // ofstream file("foods.txt"); OUTPUT FILE STREAM

    ifstream file("foods.txt");



    string input_file_string;


    while (file >> food){
        foods.push_back(food);
    }

    file.close();



    //system("pause");
    return 0;



}

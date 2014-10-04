#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {

    char filenam3[100];     //The file name specified by the user
    char word[50];         //A given word in the file
    ifstream fil3;
    cin.getline(filenam3, 100);
    fil3.open(filenam3);
    cout << "Opened " << filenam3 << endl;

    if(!fil3.is_open()) {
        exit(EXIT_FAILURE);         //Exits if the file specified by the user
    }                              //isn't an existing file.
                                  //Prevents user from creating files!
    fil3 >> word;
    while(fil3.good()){
        cout << word << " ";
        fil3 >> word;
    }
    return 0;
}

    /*
    ofstream myfile;
    myfile.open("newfile.txt");
    myfile << "This is a test that should show up in the file that I just created!\n";
    std::cin.ignore();
    myfile.close();
*/
   //Prevents user from creating files!
                                 //}

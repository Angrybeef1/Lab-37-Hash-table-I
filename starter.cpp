// COMSC 210 | Lab 37 Hash Tables I | Robert Stonemetz

#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <list>

using namespace std;

//part 3 change part 1 hash to a gen_hash
int gen_hash_index(string str){
    int sum = 0;
    for(char c : str){
        sum += (int)c;
    }
    return sum;
}


int main() {
    
    char a = 'A';
    cout << a << endl;
    cout << (int) a << endl;
    int b = 66;
    cout << b << endl;
    cout << (char) b << endl;

    //part 3 create hash table as map
    map<int, list<string>> hash_table;

    //part 2 import data.txt part 3 changes to run the table
    ifstream file("data.txt");
    string line;
    
    while (getline(file,line)) {
        if (!line.empty()) {
            int hash_index = gen_hash_index(line);
            hash_table[hash_index].push_back(line);
        }
    }
    
    //cout << "\nGrand total of ASCII values: " << total << endl;
    cout << "\nFirst 100 hash table entries:" << endl;
    int count = 0;
    for (const auto& entry : hash_table){
        cout << "Hash index " << entry.first << ": ";
        for(const string& code : entry.second){
            cout << code<< " ";
        }
        cout << endl;

        count++;
        if (count >= 100) 
        break;
    }
    
    file.close();
    return 0;

    
}

/* 
These targets are present in the dataset and can be used for testing:
536B9DFC93AF
1DA9D64D02A0
666D109AA22E
E1D2665B21EA
*/

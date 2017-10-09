#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){

vector <vector <int> > table;

  table.resize(13);


for (int row=1;row<table.size();row++){
    table[row].resize(13);

    for (int column=1;column<table[row].size();column++){
     int num = row * column;
     cout << num << " ";
        

               
        }
    cout << endl;
    }   



return 0;
}

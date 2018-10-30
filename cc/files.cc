#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main(void){
    ofstream fout;
    string line;
    fout.open("/home/rohan/Sample.txt");
    while(fout){
        getline(cin,line);
        if(line=="0")
            break;
        fout<<line<<endl;
    }
    fout.close();
    return 0;
}

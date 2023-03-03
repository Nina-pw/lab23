#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(int argc, char*argv[]){
    double sum = 0;
    double average;
    if(argc > 1){
        for(int i =0; i < argc; i++){
            sum += atof(argv[i]);
        }
        average = sum/(argc-1);
        cout << "---------------------------------\n";
        cout << "Average of " << argc-1 << " numbers = " << average << endl;
        cout << "---------------------------------\n";
    }else{
        cout << "Please input numbers to find average.";
    }
}  
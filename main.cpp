#include <iostream>
#include "geneticAL.cpp"

using namespace std;

int main(){
    GA ga(8, 300);
    ga.getBestServersPos(10);
}

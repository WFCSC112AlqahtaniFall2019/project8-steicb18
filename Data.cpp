//
// Created by stein on 11/21/2019.
//

#include "Data.h"
#include <ostream>
using namespace std;

//Default constructor
Data::Data() {
    numStudents = 0;
    mScore = 0;
    rScore = 0;
    wScore = 0;
    title = " ";
}

Data::Data(string sName, int testers, int math, int reading, int writing) {
    title = sName;
    numStudents = testers;
    mScore = math;
    rScore = reading;
    wScore = writing;
}

ostream& operator<<(ostream& os, const Data data){
    os<<data.title<<","<<data.numStudents<<","<<data.mScore<<","<<data.rScore<<","<<data.wScore<<endl;
    return os;
}

bool operator>=(const Data& nm, const Data& dt){
    return nm.wScore>dt.wScore;
}
bool operator<(const Data& nm, const Data& dt){
    return nm.wScore<dt.wScore;
}
bool operator>(const Data& nm, const Data& dt){
    return nm.wScore>dt.wScore;
}


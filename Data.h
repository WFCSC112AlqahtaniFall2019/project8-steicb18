//
// Created by stein on 11/13/2019.
//

#ifndef PROJECT7_DATA_H
#define PROJECT7_DATA_H

using namespace std;
#include <string>
#include <fstream>
#include <iostream>


class Data{
public:
    Data();
    Data(string sName, int testers, int math, int reading, int writing);
    friend bool operator>=(const Data& nm, const Data& dt);
    friend bool operator<(const Data& nm, const Data& dt);
    friend bool operator>(const Data& nm, const Data& dt);
    friend ostream& operator<<(ostream& os, const Data data);

    string title;
    int numStudents;
    int mScore;
    int rScore;
    int wScore;
};
#endif //PROJECT7_DATA_H

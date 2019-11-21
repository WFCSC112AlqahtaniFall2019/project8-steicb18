#include <iostream>
#include <fstream>
#include <string>
#include "Data.h"
#include "stack"
#include "queue"

using namespace std;

int main() {



    stack <Data> stackn;

    queue <Data> queuen;
    priority_queue <Data> priorityQueuen;

    ifstream in;
    ofstream stacked;
    ofstream queued;
    ofstream priority;
    //Open Files
    in.open("2012_SAT_Results.csv");
    stacked.open("Stack.txt");
    queued.open("Queue.txt");
    priority.open("Sort.txt");
    //Check if files are open
    if (!in.is_open()) {
        cout << "input failed to open" << endl;
        return -1;
    }
    if (!stacked.is_open()) {
        cout << "stack failed to open" << endl;
        return -1;
    }
    if (!queued.is_open()) {
        cout << "queue failed to open" << endl;
        return -1;
    }
    if (!priority.is_open()) {
        cout << "sort failed to open" << endl;
        return -1;
    }
    string name, count, read, math, write;
    //input csv file header
    getline(in, name, ',');
    getline(in, count, ',');
    getline(in, read, ',');
    getline(in, math, ',');
    getline(in, write);
    //input csv file data until end is reached
    while (!in.eof()) {

        getline(in, name, ',');
        getline(in, count, ',');
        getline(in, read, ',');
        getline(in, math, ',');
        getline(in, write);

        //create object
        Data object (name, stoi(count), stoi(read), stoi(math), stoi(write));
        //execute push_head, enqueue_tail, and linkedList functions
        stackn.push(object);
        queuen.push(object);
        priorityQueuen.push(object);
    }
    //print and remove
    while (!queuen.empty()){
        queued << queuen.front() << endl;
        queuen.pop();
    }
    while (!stackn.empty()){
        stacked << stackn.top() << endl;
        stackn.pop();
    }
    while (!priorityQueuen.empty()){
        priority << priorityQueuen.top() << endl;
        priorityQueuen.pop();
    }
    //close txt files.
    in.close();
    stacked.close();
    queued.close();
    priority.close();
    return 0;
}
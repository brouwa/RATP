//
//  main.cpp
//  RATP2
//
//  Created by Benoît Guillard on 17/05/2017.
//  Copyright © 2017 Benoît Guillard. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "mission.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    vector<Mission*> missions;
    
    for(int i = 0; i<10; i++)
    {
        missions.push_back(new Mission("a","b","c","d","e","f"));
    }
    
    for(int i = 0; i<10; i++)
    {
        cout << missions[i]->station << endl;
    }
    
    // use full path instead and check manully whether the file is there or not
    // to do it : drag the text file into a terminal window for example : full path will appear
    
    std::ifstream file("/Users/lucleflem/Desktop/test_read.txt");
    std::string line;
    
    if(file.fail())
        cout << "Opening file failed!" << endl;
    else{
        while(std::getline(file, line))
        {
            cout << line;
        }
    }
    return 0;
}

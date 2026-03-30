//
//  main.cpp
//  monster
//
//  Created by Mingmanas Sivaraksa on 30/3/2566 BE.
//

#include <iostream>
using namespace std;
#include "monster.h"

int main(int argc, const char * argv[]) {
    
    monster *p;

    monster m1("Shane", 90 , 15);
    monster m2("Fang") , m4("kkkkk");
    monster x[4]={{"joj0",50},{"jelly", 40}, {"Soda",40,46}};

    p = new monster("Lulu", 60 , 25);
    delete p; //destructor p pointer
    return 0; 
}

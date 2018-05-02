//
//  main.cpp
//  base7-3
//
//  Created by suchao on 5/2/18.
//  Copyright © 2018 cs.nju. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int a, b, c, d, n;
    for(int i=0; i<100; i++){
        n = i*i;
        a = n % 10;
        b = n / 10 % 10;
        c = n / 100 % 10;
        d = n / 1000 % 10;
        
        if(a==b && c==d && a!=c)
            cout << n << endl;
    }
    
    
    return 0;
}

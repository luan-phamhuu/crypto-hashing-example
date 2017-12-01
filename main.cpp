#include <iostream>
#include <math.h>
#include "picosha2.h"

using namespace std;
int main(int argc, const char * argv[]) {
    std::string src_str = "1";
    std::string hash_hex_str = picosha2::hash256_hex_string(src_str);
    cout << hash_hex_str << "\n";
    
    
    
    
    
    return 0;
}


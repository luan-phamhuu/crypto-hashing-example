#include <iostream>
#include <math.h>
#include "picosha2.h"

using namespace std;
int main(int argc, const char * argv[]) {
    std::string src_str = "hkadhfkdsfgdfk.12313";
    std::string hash_hex_str = picosha2::hash256_hex_string(src_str);
    cout << hash_hex_str << "\n";
    
    for (int i = 0; i <= pow(10, 6); i++) {
      if (picosha2::hash256_hex_string(to_string(i)) == hash_hex_str) {
        cout << i;
        break;
      }
    }    
    
    
    
    return 0;
}


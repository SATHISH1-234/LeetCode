#include <stdbool.h>
#include <string.h>

bool isIsomorphic(char* s, char* t) {
    int map_s[256] = {0};
    int map_t[256] = {0};
    int len = strlen(s);
    
    for (int i = 0; i < len; i++) {
        char c1 = s[i];
        char c2 = t[i];
        
       
        if (map_s[c1] != map_t[c2]) {
            return false;
        }
        
       
        map_s[c1] = i + 1;
        map_t[c2] = i + 1;
    }
    
    return true;
}

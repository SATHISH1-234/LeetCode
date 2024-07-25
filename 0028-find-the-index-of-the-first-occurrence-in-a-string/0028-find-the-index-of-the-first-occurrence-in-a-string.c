int strStr(char* s1, char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int i, j;

    // If s2 is longer than s1, return -1
    if (len1 < len2) return -1;

    // If s1 and s2 have the same length, check if they are equal
    if (len1 == len2) {
        if (strcmp(s1, s2) == 0) return 0;
        else return -1;
    }

    // Iterate through s1 to find s2
    for (i = 0; i <= len1 - len2; i++) {
        int flag = 0;
        for (j = 0; j < len2; j++) {
            if (s1[i + j] != s2[j]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) return i; // Found s2 at position i
    }

    return -1; // s2 not found in s1
}
    

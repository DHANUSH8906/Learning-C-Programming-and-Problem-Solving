#include<stdio.h>
#include<string.h>
bool isAnagram(char *s, char *t) {
    int freq[26] = {0};
    if(strlen(s) != strlen(t)) {
        return false;
    }
    for(int i = 0; s[i] != '\0'; i++) {
        int index = s[i] - 'a';
        freq[index]++;
    }
    for(int i = 0; t[i] != '\0'; i++) {
        int index = t[i] - 'a';
        freq[index]--;
    }
    for(int i = 0; i < 26; i++) {
        if(freq[i] != 0) {
            return false;
        }
    }
    return true;
}
int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    
    if(isAnagram(str1, str2)) {
        printf("\"%s\" and \"%s\" are anagrams.\n", str1, str2);
    } else {
        printf("\"%s\" and \"%s\" are not anagrams.\n", str1, str2);
    }
    
    return 0;
}
//Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    int freq[26] = {0};
    int i, anagram = 1;

    scanf("%999s %999s", s, t);

    if (strlen(s) != strlen(t)) {
        anagram = 0;
    } else {
        for (i = 0; s[i] != '\0'; i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for (i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                anagram = 0;
                break;
            }
        }
    }

    if (anagram)
        printf("Anagram");
    else
        printf("Not Anagram");

    return 0;
}


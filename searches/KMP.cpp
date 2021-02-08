//
// Created by Олег Игоревич on 07.02.2021.
//
#include "..\prototypes.h"
#include "..\libs.h"

int* prefixFunction(std::string s) {
    int* p = new int[s.length()];
    p[0] = 0;
    int k;
    for (int i = 1; i<s.length(); i++){
        k = p[i - 1];
        while (k > 0 && s[i] != s[k])
            k = p[k - 1];
        if (s[i] == s[k])
            k++;
        p[i] = k;
    }
return p;
}
//https://www.youtube.com/watch?v=-lQzG0BmH1A
std::vector<int> kmp(std::string P, std::string T)
{
    std::vector<int> v;
    int pl = P.size();
    int tl = T.size();

    int *p = prefixFunction(P + "#" + T);
    int count = 0;
    for (int i = 0; i < tl; i++)
    {
        if (p[pl + i + 1] == pl) {
            v.push_back(i);
//            v[count++] = i;
        }
    }
    return v;
}
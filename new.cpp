#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalin(string s){
    if (equal(s.begin(),s.begin() + s.size()/2, s.rbegin()))
        return true;
    else
        return false;    
}

int checklexi(string s1,string s2){
    if (lexicographical_compare(s1.begin(),s1.end(),s2.begin(),s2.end()))
        return true;
    else 
        return false;
}

int countPali(string s, int n, int K){   //abcdd -->  aaaaa, aaaab , aaaac, aaaad, aaabc ,
    

}


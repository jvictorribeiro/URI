#include <iostream>
#include <cmath>
 
using namespace std;
main(){
    string s;
 
    while(getline(cin, s)){
        char ant = s[0];
        char ant2;
 
        if(ant >= 'a') ant2 = ant - 32;
        else ant2 = ant + 32;
 
        int cont = 0;
        bool flag = false;
 
         for(int i = 1; i < s.size(); i++){
            if(s[i] == ' '){
                if((s[i+1] == ant || s[i+1] == ant2) && !flag){
                    flag = true;
                    cont++;
                }
            }
 
            if(s[i] == ' ' && (ant != s[i+1] && ant2 != s[i+1]) ){
                flag = false;
                ant = s[i+1];
 
                if(ant >= 'a') ant2 = ant - 32;
                else ant2 = ant + 32;
            }
        }
 
        cout << cont << endl;
    }
    return 0;
}

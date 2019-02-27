#include <bits/stdc++.h>
#include <vector>
 
using namespace std;
 
int main(){
    int in, out;
 
    while(cin >> in >> out){
        int went[in+1], returned[out];
        memset(went, 0, sizeof(went));
 
        for(int i =0; i < out; i++)
           cin >> returned[i];
            
        sort(returned, returned + out);
         
        if(in == out)
            printf("*\n");
        else{
            for(int i = 0; i < out; i++){
                for(int j = 1; j < in+1; j++){
                    if(returned[i] == j)
                        went[j] = j;
                }
            }
             
            vector <int>missing;
 
            for(int i = 1; i < in+1; i++)
                if(went[i] == 0)
                    missing.push_back(i);
 
            for(int i = 0; i < missing.size(); i++)
                    cout << missing[i] << " ";
            cout << endl;
        }
    }
}

#include <iostream>
#include <map>
 
using namespace std;
 
int main(){
    int N, M;
 
    while(cin >> N >> M && N && M){
        int c = 0, g;
        map <int, int> mapa;
 
        for(int i = 0; i < M; i++){
            cin >> g;
 
            if(mapa[g] == 0) mapa[g] = 1;
            else mapa[g]++;
        }
 
        map <int, int>::iterator it;
 
 
        for(it = mapa.begin(); it != mapa.end(); it++){
            if(it-> second > 1) c++;
        }
 
        cout << c << endl;
    }
    return 0;
}

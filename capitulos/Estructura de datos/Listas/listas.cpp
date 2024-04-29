#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)


int main(){
    //input;
    output;
    list<int> listita;
    listita.push_back(1);
    listita.push_back(2);
    listita.push_back(3);
    list<int>::iterator it; //el iterador esta agarrando 
   
    it =listita.begin();
    cout << *it << endl; 
    
    for (it = listita.begin(); it != listita.end(); it++) { //el iterador pregunta si esta al final de la lista
    cout << *it << endl;
}
return 0;
}

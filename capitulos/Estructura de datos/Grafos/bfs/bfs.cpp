#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)


bool vis[10000];
vec<int> grafo [nodos];
int niveles[10000];
void bfs(int nodoInicial) {
        colita.pop();
        if(!vis[nodoActual]){
          vis(nodoActual) = true;//Marco como visitado al nodo
        //empezar a visitar a sus amigos
           for(int i = 0; i < grafo[nodoActual].size(); i++){
            int amigo = grafo[nodoActual][i];
            niveles[amigo] = niveles[nodoActual] + 1;
            if(!vis[amigo]){
                colita.push(amigo);
            }
        }
       }
    }



int main(){
    int nodos, aristas;
    cin>>nodos>>aristas;
    for(int i = 0; i < aristas; i++){
        int nodoInicial, nodoFinal;
        cin>>nodoInicial>>nodoFinal;
        grafo[nodoInicial].push_back(nodoFinal);

    }
    //Si el nodo S puede llegar al nodo T
    int S,T; // 1 7
    cin>>S>>T;
    dfs(S);
    if(vis[T]){ // logre visitar al 7?
    cout<<"Si lo podria conocer"<<endl;
    }else{
        cout<<"No lo podria conocer"<<endl;
    }
}
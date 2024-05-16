#include<iostream>
#include<vector>
using namespace std;

//Adjacent list matrix
//undirected unweighted graph

int main(){
    int vertex,edges;
    cin >> vertex >> edges;

    vector<int>AdjList[vertex];


    int u,v;   //1-2 edge hai,0-1 edge hai,3-4 edge hai 
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        AdjList[u].push_back(v);
        AdjList[v].push_back(u);
    }


//print the list
    for(int i=0;i<vertex;i++)
    {
        cout<<i<<" -> ";
        for(int j=0;j<AdjList[i].size();j++){
            cout<<AdjList[i][j]<<" ";
        }
        
            cout<<endl;
    }
}
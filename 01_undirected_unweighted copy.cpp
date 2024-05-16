#include<iostream>
#include<vector>
using namespace std;

//Adjacency matrix
//undirected unweighted graph

int main(){
    int vertex,edges;
    cin>>vertex>>edges;

    vector<vector<bool> >AdjMat(vertex, vector<bool>(vertex,0));

    int u,v;   //1-2 edge hai,0-1 edge hai,3-4 edge hai 
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        AdjMat[u][v]=1;
        AdjMat[v][u]=1;
    }

    for(int i=0;i<vertex;i++)
    {
        for(int j=0;j<vertex;j++)
            cout<<AdjMat[i][j]<<" ";
        
            cout<<endl;
    }
}
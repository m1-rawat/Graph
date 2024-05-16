#include<iostream>
#include<vector>
using namespace std;

//Adjacency matrix
//undirected weighted graph

int main(){
    int vertex,edges;
    cin>>vertex>>edges;

    vector<vector<int> >AdjMat(vertex, vector<int>(vertex,0));


    int u,v,weight;   //1-2 edge hai,0-1 edge hai,3-4 edge hai 
    for(int i=0;i<edges;i++){
        cin>>u>>v>>weight;
        AdjMat[u][v]=weight;
        AdjMat[v][u]=weight;
    }

    for(int i=0;i<vertex;i++)
    {
        for(int j=0;j<vertex;j++)
            cout<<AdjMat[i][j]<<" ";
        
            cout<<endl;
    }
}
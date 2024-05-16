#include<iostream>
#include<vector>
using namespace std;

//Adjacent list matrix
//direct weight,unweighted graph

int main(){
    int vertex,edges;
    cin >> vertex >> edges;

    vector<pair<int,int> >AdjList[vertex];


    int u,v,weight;   //1-2 edge hai,0-1 edge hai,3-4 edge hai 
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        AdjList[u].push_back(make_pair(v,weight));
        AdjList[v].push_back(make_pair(u,weight));
    }


//print the list
    for(int i=0;i<vertex;i++)
    {
        cout<<i<<" -> ";
        for(int j=0;j<AdjList[i].size();j++){
            cout<<AdjList[i][j].first<<" "<<AdjList[i][j].second<<" ";
        }
        
            cout<<endl;
    }
}
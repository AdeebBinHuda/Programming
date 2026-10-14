#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string, int> mp;

    mp["Abir"]=1000;
    mp["Azad"]= 1200;
    mp["Adeeb"]= 1200;

    cout<<"Adeeb: "<<mp["Adeeb"]<<endl;

    if(mp.find("Adeeb")!=mp.end()){
        cout<<"Individual found"<<endl;
    }

    cout<<"Traverse: "<<endl;
    for(auto pair:mp){
        cout<<pair.first
        <<"->"
        <<pair.second
        <<endl;
    }

    mp.erase("Abir");
    cout<<"size after delition:"
    <<mp.size();

    return 0;
}

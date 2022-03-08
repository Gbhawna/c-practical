#include<bits/stdc++.h>
using namespace std;


int main(){
    ifstream in("source.txt");
    ofstream out("dest.txt");
    string str="", temp;
    cout<<"Transferring data. Please Wait..."<<endl;
    while (in.good()){
        in>>temp;
        str.append(temp);
    }
    out<<str;
    in.close();
    out.close();
    cout<<"Data Transferred";
    return (0);
}   

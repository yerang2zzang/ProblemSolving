#include <iostream>
#include <cstring> //memset
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <utility> //pair
//#include<bits/stdc++.h>

//#define INT_MAX 2147483647
//bool compare(int a, int b) {return a>b;}
//memset(dp, -1, sizeof(dp));

//int n,m,i,j,sum=0,cnt=0,a, b,ran;
using namespace std;


int main(void){
    string str;
    cin>>str;
    string croa2[8]={"c=","c-","d-","lj","nj","s=","z="};
    string croa3="dz=";
    int cnt=0;
    bool isPass=false;
    for(int i=0;i<str.size();i++){
        isPass=false;
        //croa2에 해당하는지
        for(int j=0;j<8&&!isPass;j++){
            if(!str.compare(i,2,croa2[j])){
                cout<<"i:"<<i<<"/j:"<<j<<"/Origin:"<<str.substr(i,2)<<"/croa2:"<<croa2[j]<<endl;
                i++;
                isPass=true;
                break;
            }
        }
        //croa3에 해당하는지
        if(!isPass){
            if(!str.compare(i,3,croa3)){
                cout<<"i:"<<i<<"/Origin:"<<str.substr(i,3)<<"/croa3:"<<croa3<<endl;
                i+=2; isPass=true;
            }
        }
        if(!isPass){
            cout<<"i:"<<i<<"/char:"<<str[i]<<endl;     
        }
        cnt++;
    }
    printf("%d",cnt);
}


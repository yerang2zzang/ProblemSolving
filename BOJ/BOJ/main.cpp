#include <iostream>
#include <algorithm>
#include <utility> //pair
#include <vector>

using namespace std;


bool compare(int a, int b) {return a>b;}
int n,m,i,j,cnt=0,p,s,z;
int main(void) {
    vector<int> v;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        v.clear();
        cnt=0;
        scanf("%d %d",&p,&s); //참가자 수, 자리 수
        for(j=0;j<p;j++){
            scanf("%d",&m);
            for(auto z:v) {
                if(z==m){
                    cnt++;
                    goto label;
                }
            }
            v.push_back(m);
        label:
            printf("");
        }
        printf("%d\n",cnt);
    }
    return 0;
}
//

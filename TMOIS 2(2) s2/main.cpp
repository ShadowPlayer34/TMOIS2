#include <iostream>
#include <vector>
using namespace std;
int main(){
    int k,n,q;
    cout<<"Input N and K\n";
    cin>>n>>k;
    vector<int> a; a.reserve(n);
    vector<int> b; b.reserve(k);
    for (int i = 1; i <=n; i++){
        a[i] = i;
    }
    for (int i = 1; i <= k; i++){
        b[i] = i;
    }
    q = k;
    while (q >= 1) {
        for (int j = 1; j <= k; j++){
            cout<<a[b[j]];
        }
        cout<<"\t";
        if (b[k] == n) q = q-1;
        else q = k;
        if (q >= 1){
            b[q] = b[q]+1;
            for(int i=q+1; i <= k; i++){
                b[i] = b[i-1]+1;
            }
        }
    }
    return 0;
}

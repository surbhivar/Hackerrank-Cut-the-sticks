//Hackerrank Problem
#include<bits/stdc++.h>
using namespace std;
int ar[1001],n;
int small_cal(){

    int cnt = 0,small = 1001;
    for(int i = 0; i < n; i++){
        if(small >= ar[i] && ar[i] != 0)
           small = ar[i];
        if(ar[i] != 0)cnt++;
    }
    if(cnt != 0)cout << cnt << endl;
    return small;
}
//Main Function
int main(){

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> ar[i];
    }
    int small = 1001;
    for(int i = 0; i < n; i++){
        small = small_cal();
        for(int j = 0; j < n; j++)
            if(ar[j] != 0)
              ar[j]-=small;
    }
    return 0;
}

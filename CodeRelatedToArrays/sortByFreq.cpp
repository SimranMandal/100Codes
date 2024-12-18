#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int, pair<int, int>> p, pair<int, pair<int, int>> p1){
    if(p.second.second != p1.second.second){
        return p.second.second > p1.second.second;
    }
    else{
        return p.second.first < p1.second.first;
    }
}

void sortByFreq(int arr[], int n){
    unordered_map<int, pair<int, int>> mp;   //first int -> element, second int -> first occurence of that element, second.second int -> frequence

    for(int i=0; i<n; i++){
        if(mp.find(arr[i]) != mp.end()){
           mp[arr[i]].second++;
        }
        else{
            mp[arr[i]] = make_pair(i, 1);
        }
    }

    vector<pair<int, pair<int, int>>> b;
    auto it = mp.begin();

    for(it; it != mp.end(); it++){
        b.push_back(make_pair(it->first, it->second));
    }

    sort(b.begin(), b.end(), compare);

    for(int i=0; i<b.size(); i++){
        int count = b[i].second.second;
        while(count--){
            cout << b[i].first << " ";
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
       cin >> arr[i];

    sortByFreq(arr, n);

    return 0;
}
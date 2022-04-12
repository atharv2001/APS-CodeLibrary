int minSteps(string s, string t) {
    map<char,int> mp;
    int steps=0;
    for(auto &ch:s){
        mp[ch]++;
    }
    for(auto &ch:t){
        mp[ch]--;
    }
    for(auto &p:mp){
        steps += abs(p.second);
    }
    return steps;
}

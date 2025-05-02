#include <iostream>
#include <stdio.h>
#include <vector>

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {

        set<int> tiposUnicos(candyType.begin(), candyType.end());
        int longitud = candyType.size()/2;
        int luniq = tiposUnicos.size();
        cout<<"longitud "<<longitud<<" tipos unicos "<<luniq<<endl;
        int menor = min(luniq, longitud);
        return menor;    
    }
};

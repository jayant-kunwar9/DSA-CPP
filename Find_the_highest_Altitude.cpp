#include <iostream>
#include<vector>
using namespace std;

int largestAltitude(vector<int>& gain) {
    int maxAlt = 0; // start with 0 because alt[0]=0 (starting point), wrna  maxAlt = max(alt[i], maxAlt) main sidhe alt[i] i.e alt[1] se compare hona suru hota, alt[0] miss kr deta because loop starts from 1...

    vector<int> alt(gain.size()+1); // alt has one more element than gain
    alt[0] = 0; // starting altitude is always 0

    // i starts from 1 because alt[0] is already set
    // i goes till gain.size() because alt has gain.size()+1 elements
    for(int i=1; i<=gain.size(); i++){
        alt[i] = alt[i-1] + gain[i-1]; // current altitude = previous altitude + gain
        maxAlt = max(alt[i], maxAlt);   // track the highest altitude seen so far
    };

    return maxAlt; // return the highest altitude
};

int main() {

    vector<int> gain={-5,1,5,0,-7};

    cout<< "Highest Altitude of a point: "<<largestAltitude(gain)<<endl;

    return 0;

}

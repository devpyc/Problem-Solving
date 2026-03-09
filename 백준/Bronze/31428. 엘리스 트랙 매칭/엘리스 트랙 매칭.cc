#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<char> friends_tracks(N);
    vector<char> hellobit_track;
    
    for (int i = 0; i < N; ++i) {
        cin >> friends_tracks[i];
        friends_tracks[i] = tolower(friends_tracks[i]);
    }
    
    for (int i = 0; i < N; ++i) {
        char track;
        cin >> track;
        hellobit_track.push_back(tolower(track));
    }

    int matching_friends = count(friends_tracks.begin(), friends_tracks.end(), hellobit_track[0]);

    cout << matching_friends << endl;

    return 0;
}
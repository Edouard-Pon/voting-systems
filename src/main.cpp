#include <iostream>
#include "voteList.h"
#include "pluralityVoting.h"
#include "secretBallot.h"

using namespace std;


int main() {

    vector<vector<string>> voteList;

    VoteList::createVoteList(voteList);
    VoteList::showList(voteList, false);

    // Make Vote Test 10 Users
    for (int i = 0; i < 10; ++i) SecretBallot::makeVote(voteList);

    // Sort Test
    VoteList::sortByPointsVoteList(voteList, 2);
    cout << endl;
    VoteList::showList(voteList, false);

    // Set Places Test
    VoteList::setPlacesByOrder(voteList);
    cout << endl;
    VoteList::showList(voteList, false);

    return 0;
}

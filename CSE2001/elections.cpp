#include <iostream>

int main() {
    int votes[5] = {0}; // array to store votes for each candidate
    int spoiltBallots = 0; // count of spoilt ballots
    int totalBallots = 0; // total number of ballots

    std::cout << "Enter the ballots (1-5), or 0 to finish voting: \n";

    int ballot;
    while (true) {
        std::cin >> ballot;
        if (ballot == 0) {
            break; // exit loop when 0 is entered
        }

        totalBallots++;

        if (ballot < 1 || ballot > 5) {
            spoiltBallots++; // increment spoilt ballot count
        } else {
            votes[ballot - 1]++; // increment vote count for the candidate
        }
    }

    std::cout << "Voting results:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << "Candidate " << i + 1 << ": " << votes[i] << " votes\n";
    }
    std::cout << "Spoilt ballots: " << spoiltBallots << "\n";
    std::cout << "Total ballots: " << totalBallots << "\n";

    return 0;
}
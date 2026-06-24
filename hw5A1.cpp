#include <iostream>
#include <vector>
#include <string>

using namespace std;

int totalGold(int donations[], int size) {
    int sumDonations = 0;

    for (int i = 0; i < size; i++) {
        sumDonations += donations[i];
    }
    return sumDonations;
}

int main() {
    //Additional and Transfer Variables
    int numDonations;
    int donations[100]; // given max array size
    int vaultGoal = 42500; // given fixed value for goal


    //user input
    cout << "Enter the number of gold donations: ";
    cin >> numDonations;

    //logic
    for(int i = 0; i < numDonations; i++) { //this only fills the array with user input
        cout << "Enter gold donation " << i + 1 << ": ";
        cin >> donations[i];
    }

    //call function after array input block
    int total = totalGold(donations, numDonations); // Parameters change to donations and num donations in place of donations array and size

    //OUTput block
    cout << "--- Vault Funding ---" << endl;
    cout << "Total gold donated: " << total << endl;
    cout << "Vault goal: " << vaultGoal << endl;

    // final logic if statement to check if below or above goal
    if (total >= vaultGoal) { //equal to or greater than vault goal
        cout << "The Vault is fully funded! " << "Surplus: " << total << " gold" << endl;
    }
    else{
        cout << "The Vault still needs " << vaultGoal - total << " more gold." << endl;
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

using namespace std;



// call fucntions
int daysToFund(int startBalance, int dailyDeposit) { //this is not an array, must declare variables in main for pass by values.
    int vaultGoal = 42500; // given goal value
    int balance = startBalance; // set balance equal to what the user inputs for starting.
    int daysDeposited = 0; // int days set to 0 this is what the program should be loking for.

    while(balance < vaultGoal) { // required while loop, while balance is less than goal, keep the program scanning. Add additional study time on while loops.
        balance += dailyDeposit; // balance should become set to startBalance given by user, then add each daily deposit to the balance.
        daysDeposited++; // increase count of daysDeposited 

        cout << "Day " << daysDeposited << " deposited " << dailyDeposit << ", " << "balance now " << balance << endl; //output with relevant information       
    }

    cout << "The Vault was funded in " << daysDeposited << " days!" << endl; //final total count output, can I return or leave without a return value?
    
    return 0;
}
    
    



int main() { // place logic in call function use main to structure calling and output
    int startBalance;
    int dailyDeposit;

    //prompt user for input
    cout << "Enter the starting Vault balance: ";
    cin >> startBalance;

    cout << "Enter the daily deposit amount: ";
    cin >> dailyDeposit;

    daysToFund(startBalance, dailyDeposit);

    cout << "--- Vault Savings Plan ---" << endl;

    return 0;
}
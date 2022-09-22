// PE3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;
enum AttackType {
    SCRATCH, SURF, TACKLE
};

double roundThis(double num) {
    return round(num * 100) / 100.0;
}

int main()
{
    srand(time(0));
    string rival;
    string you;
    double hp = rand() % 19 + 40;
    cout << "Enter your Pokemon's nickname: ";
    cin >> you;
    cout << "Enter your rival Pokemon's nickname: ";
    cin >> rival;

    cout << "Your rival has chosen " << rival << " to fight, which has " << fixed << setprecision(2) << hp << " health." << endl;
    int turns = 0;
    do {
        turns++;
        AttackType attack = (AttackType)(rand() % 3);
        string attackName;
        double totalDmg;
        int times;
        double dmg;
        switch (attack) {
        case SCRATCH:
            times = rand() % 3 + 1;
            dmg = roundThis((double) rand() / (RAND_MAX + 1.0) * 5 + 1.0);
            totalDmg = times * dmg;
            attackName = "SCRATCH";
            break;
        case SURF:
            totalDmg = roundThis((double)rand() / (RAND_MAX + 1.0) * 9 + 2.0);
            attackName = "SURF";
            break;
        case TACKLE:
            totalDmg = roundThis((double)rand() / (RAND_MAX + 1.0) * 2 + 7.0);
            attackName = "TACKLE";
            break;
        }
        hp -= totalDmg;
        hp = max(hp, 0.0);
        cout << you << " used " << attackName << " and did " << fixed << setprecision(2) << totalDmg << " damage." << endl << "Your rival has " << fixed << setprecision(2) << to_string(hp) << " health remaining." << endl;

    } while (hp > 0);
    cout << rival << " fainted after " << to_string(turns) << " turns!";
    double prize = roundThis((double)rand() / (RAND_MAX + 1) * -1200 + 2400);
    cout << "You have earned $" << fixed << setprecision(2) << prize << "!" << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

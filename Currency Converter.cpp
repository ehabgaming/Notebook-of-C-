#include <iostream>

using namespace std;

int main()
{
    // exchange Rates of different currencies
    double Euro_Dollar = {0.94211};
    double Japanese_Yen_Dollar = {133.49};
    double British_Pound_Dollar = {0.82607};
    double Canadian_Dollar = {1.3727};
    
    int result {};
    double DResult{};
    double dollar{};

    cout << "How much US dollar do you want to exchange?" << endl;
    cin >> dollar;

    cout << "Which exchange rate would you like to use? " << endl;
    cout << "1. Euro dollar: 0.94211 " << endl;
    cout << "2. Yen dollar: 133.49 " << endl;
    cout << "3. Pound dollar: 0.82607 " << endl;
    cout << "4. Canadian dollar: 1.3727 " << endl;
    cin >> result;

    switch (result)
    {
    case 1:
        DResult = dollar / Euro_Dollar;
        break;
    case 2:
        DResult = dollar / Japanese_Yen_Dollar;
        break;
    case 3:
        DResult = dollar / British_Pound_Dollar;
        break;
    case 4:
        DResult = dollar / Canadian_Dollar;
        break;
    
    default:
        cout << "Error: Invalid input" << endl;
        break;
    }
    
    cout << "The exchange rate would be: " << DResult << endl;

    system("pause");
    return 0;
}

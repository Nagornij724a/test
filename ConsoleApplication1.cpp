#include <iostream> 
using namespace std;

int main() {
    int n; 
    cout << "Enter value n (n > 1): "; 
    cin >> n;

    if (n <= 1) {
        
        cout << "n must be more than 1!" << endl;
        return 0; 
    }

    int sum = 0; 
    for (int i = 1; i <= n; i++) { 
        int factorial = 1;
        for (int j = 1; j <= i; j++) { 
            factorial *= j; 
        }
        sum += factorial;
    }

    
    cout << "Suma in a row: " << sum << endl;

    return 0; 
}


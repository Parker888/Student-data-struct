#include <iostream>
using namespace std;
int main(){

    int n, i, S;
    cout << "Number of pupils: ";
    cin >> n;

    cout << endl;

    struct Pupils {
        char name[20];
        char surname[20];
        int age;
        float media;
    } C;

    cout << endl;

    for ( i = 1; i <= n; i++ ) {
        cout << "Pupil number " << i;
        cout << endl << endl;
        cout << "Name: ";
        cin >> C.name;
        cout << endl;
        cout << "Surname: ";
        cin >> C.surname;
        cout << endl;
        cout << "Age: ";
        cin >> C.age;
        cout << endl;
        cout << "Media: ";
        cin >> C.media;

        cout << endl << endl;
    }

    // This is jus an commentary


    // This is second commentary



}

#include <iostream>
#include <vector>

using namespace std;


// uisng modified program from cs121
void pre_process (string &IB)  {
    cout << "enter the name of the business:";
    getline(cin, IB);  }

void sub_main (string IB, vector<string> &LIST)  {
    cout << "\n";
    LIST.push_back(IB);

    std::sort(LIST.begin(),LIST.end());

    cout << "your businesses are:\n\n";

    for (int i = 0; i < LIST.size(); i++)
        cout << " " << LIST[i] << endl;
    cout << "\n\n";  }


int status (string stat)  {
    cout << "another business?:";
    cin >> stat;
    cin.ignore ();
    cout << "\n";

    if (stat == "yes" || stat == "Yes" || stat == "Y" || stat == "y" )  return 0;
    else {
        cout << "program exit";
        return 1;  }
}


int main () {
    string IB,stat;
    vector<string> LIST;

    cout << "business sorting program\n\n";

    while (bool C = true) {

       pre_process(IB);
       sub_main(IB,LIST);
       if (status(stat) == 1) break;   }

    return 0;
}




//i used getline to input the spaces also as part of the business name, i had to use a ci.ignore after
//inputting data right before inputting the business name to clear buffer, as otherwise the whitespace
//of the previous input will be treated as part of the getline for inputting business name.
//
//i used a vector to be a variable of all the businesses.
//
//i did not need to sort through the strings, although i used pushback to increase the number of
//elements in the vector which stores, the names of the businesses
//

//you can pass through a string of characters from a array into the string compare function.
//

//prompt accepts words or a phrase, and is case sensitive, allows for most versatility
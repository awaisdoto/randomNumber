#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    time_t current_time;
    bool start = true;
    int choice = 0;
    while (start)
    {
        
        current_time = time(NULL);
        cout << "Do you want to generate a random number ? Enter 1 for yes and 0 for no :";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Number:"<<current_time<< endl;
        }

        else if(choice == 0)
        {
            start = false;
        }
        else
        {
            cout << "You entered wrong number !" << endl;
            return 0;
        }

    }
    return 0;
}

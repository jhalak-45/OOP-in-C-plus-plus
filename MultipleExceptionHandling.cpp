#include <iostream>
using namespace std;

int main()
{
    try
    {
        int choice;
        cout << "1.for integer exception" << endl
             << "2.for float exception" << endl
             << "3. for char exception " << endl;
        cout << "Enter your choice" << endl;

        cin >> choice;

        if (choice == 1)
        {
            throw 1;
        }
        else if (choice == 2)
        {
            throw 1.0f;
        }
        else if (choice == 3)
        {
            throw 'a';
        }
        else
        {
            throw "Unknown exception";
        }
    }
    catch (int e)
    {
        cout << "Caught an integer exception: " << e << endl;
    }
    catch (float e)
    {
        cout << "Caught a float exception: " << e << endl;
    }
    catch (char e)
    {
        cout << "Caught a char exception: " << e << endl;
    }
    catch (const char *e)
    {
        cout << "Caught a string exception: " << e << endl;
    }
    cout << "End of try catch block" << endl;
    return 0;
}

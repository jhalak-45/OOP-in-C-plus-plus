#include <iostream>  // Include necessary header file for input/output operations

using namespace std;  // Allow access to entities from the std namespace without prefixing them with std::

// Define namespace add1
namespace add1
{
    // Define function add inside namespace add1
    void add()
    {
        // Declare and initialize variables a, b, and sum
        int a = 5, b = 10, sum;
    
        // Calculate sum
        sum = a + b;

        // Output the sum with a descriptive message
        cout << "The sum of function inside namespace 1 is: " << sum << endl;
    }
}

// Define namespace add2
namespace add2
{
    // Define function add inside namespace add2
    void add()
    {
        // Declare and initialize variables a, b, and sum
        int a = 5, b = 10, sum;
        
        // Calculate sum
        sum = a + b;

        // Output the sum with a descriptive message
        cout << "The sum of function inside namespace 2 is: " << sum;
    }
}

// Main function
int main()
{
    // Call the add function from namespace add1
    add1::add();

    // Call the add function from namespace add2
    add2::add();

    return 0;  // Return 0 to indicate successful execution
}

/************************************************
 * Student Name: Milind Paliath-Pathiyal
 * Student Number: 20714398
 * SYDE 121 Lab
 *
 * I hereby declare that this code, submitted
 * for credit for the course SYDE121, is a product
 * of my own efforts. This coded solution has
 * not been plagiarized from other sources and
 * as not been knowingly plagiarized by others.
 */

#include "Date.h"

int main()
{
    cout << "WARNING: This program is not very user-friendly.\n"
         << "If you give it invalid input it will crash.\n" << endl;

    cout << "About to do a airline flight ticket due date computation ... " << endl;
    cout << "Please enter all dates in this format: year month day\n"
         << "(three numbers separated by spaces)." << endl;

    int yr = 0;  // temporary storage for input from user
	int mo = 0;
	int day = 0;
    
    
    
    cout << "\n What is the date of the flight? ";
    cin >> yr >> mo >> day;
    
    Date check_out( yr, mo, day );
    cout << "The date read was: ";
    check_out.print();
    cout << endl;

    int loan_period;
    cout << "How many days earlier must the ticket be bought? " << endl;
    cin >> loan_period;
    cout << "Doing a computation for a" << loan_period << "-day advance purchase... " << endl;
    Date due_date;
	due_date = check_out;
    for ( int count = 1; count <= loan_period; count++ )
        due_date.backup();
    cout << "You must buy the ticket on or before ";
    due_date.print();
    cout << endl;

    system("pause");
    return 0;
}

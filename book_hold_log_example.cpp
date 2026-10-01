/*
 * Course: COEN 2220 - Programming 2
 * Name: [Joewel Maldonado]
 * Lab: Lab 7 - Abstract Data Types
 * Description: Guided example - ADT contract, implementation, and client code
 * Due date: [1 October 2026]
 */

#include <iostream>
#include <string>
using namespace std;

/*
 * BookHoldLog ADT
 *
 * Data:
 * A sequence of up to four book hold IDs.
 *
 * Operations:
 * addHold(id): Adds one book hold ID when space remains;
 * returns whether it was added.
 *
 * contains(id): Reports whether an equal book hold ID is stored.
 *
 * size(): Returns the number of stored hold IDs.
 *
 * isEmpty(): Reports whether no hold IDs are stored.
 */

class BookHoldLog
{
private:
    static const int CAPACITY = 4;
    string holdIds[CAPACITY];
    int count;

public:

    // Constructor
    BookHoldLog()
    {
        count = 0;
    }

    // Returns the number of stored holds
    int size() const
    {
        return count;
    }

    // Returns true if the log is empty
    bool isEmpty() const
    {
        return count == 0;
    }

    // B3 - Add one book hold ID
    bool addHold(const string& holdId)
    {
        if (count == CAPACITY)
        {
            return false;
        }

        holdIds[count] = holdId;
        count++;

        return true;
    }

    // B4 - Search for a book hold ID
    bool contains(const string& holdId) const
    {
        for (int index = 0; index < count; index++)
        {
            if (holdIds[index] == holdId)
            {
                return true;
            }
        }

        return false;
    }
};

int main()
{
    cout << boolalpha;

    BookHoldLog holds;

    // Test empty log
    cout << "Stored holds: "
         << holds.size() << endl;

    cout << "Log is empty: "
         << holds.isEmpty() << endl;

    // B3 - Add book hold IDs
    holds.addHold("BK-104");
    holds.addHold("BK-215");

    cout << "Stored holds: "
         << holds.size() << endl;

    // B4 - Search book hold IDs
    cout << "Contains BK-215: "
         << holds.contains("BK-215") << endl;

    cout << "Contains BK-310: "
         << holds.contains("BK-310") << endl;

    return 0;
}
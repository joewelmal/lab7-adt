/*
 * Course: COEN 2220 - Programming 2
 * Name: [Joewel Maldonado]
 * Lab: Lab 7 - Abstract Data Types
 * Description: ADT contract, implementation, and client code practice
 * Due date: [1 October 2026]
 */

#include <iostream>
using namespace std;

/*
 * StudySessionLog ADT
 *
 * Data:
 * A sequence of study session durations in minutes.
 *
 * Operations:
 * addSession(minutes): Adds a study session when space remains
 * and returns whether it was stored.
 *
 * totalMinutes(): Returns the total minutes of all stored sessions.
 *
 * longestSession(): Returns the longest stored session.
 * Precondition: At least one session must be stored.
 *
 * size(): Returns the number of stored sessions.
 *
 * isEmpty(): Reports whether no sessions are stored.
 */

class StudySessionLog
{
private:
    static const int CAPACITY = 4;
    int sessionMinutes[CAPACITY];
    int count;

public:
    StudySessionLog()
    {
        count = 0;
    }

    bool addSession(int minutes)
    {
        if (count == CAPACITY)
        {
            return false;
        }

        sessionMinutes[count] = minutes;
        count++;

        return true;
    }

    int totalMinutes() const
    {
        int total = 0;

        for (int i = 0; i < count; i++)
        {
            total += sessionMinutes[i];
        }

        return total;
    }

    int longestSession() const
    {
        int longest = sessionMinutes[0];

        for (int i = 1; i < count; i++)
        {
            if (sessionMinutes[i] > longest)
            {
                longest = sessionMinutes[i];
            }
        }

        return longest;
    }

    int size() const
    {
        return count;
    }

    bool isEmpty() const
    {
        return count == 0;
    }
};

int main()
{
    // ===== Resolve these TODOs later (Part E) =====

    // TODO (Part E): Create a StudySessionLog object and print whether it starts empty.
    // TODO (Part E): Add four dummy session durations and attempt to add a fifth.
    // TODO (Part E): Print the number of stored sessions and whether the fifth session was accepted.
    // TODO (Part E): Print the total minutes and the longest stored session.
    // TODO (Part E): Print descriptive English labels for all results.

    return 0;
}
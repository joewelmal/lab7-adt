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
    // ===== Resolve these TODOs later (Part D) =====

    // TODO (Part D): Add a fixed capacity constant of four study sessions.
    // TODO (Part D): Add an int array named sessionMinutes for the stored session durations.
    // TODO (Part D): Add an int that tracks how many study sessions are stored.

public:
    // TODO (Part D): Write a constructor that creates an empty log.
    // TODO (Part D): Write addSession. It receives minutes and reports whether the session was stored.
    // TODO (Part D): Write totalMinutes as a const member function.
    // TODO (Part D): Write longestSession as a const member function.
    // TODO (Part D): Write size as a const member function.
    // TODO (Part D): Write isEmpty as a const member function.
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
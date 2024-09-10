#ifndef SCORERATING_H
#define SCORERATING_H

#include "ratingCalc.h"  // Composition rela with ratingCalc
#include <vector>
#include <string>
using namespace std;

class scoreRating {
private:
    ratingCalc ratingCalculator;  //ratingCalc is another class
    // Separately used to calculate number of reviews and calculate average score rating

public:
    // Constructor
    scoreRating();

    // Method: add a new rating score and review
    void addRating(double newScore, const string& review);

    // Method to get score information like in the UML
    void getScore(bool getAverage = false, bool getReviews = false) const;

    // Destructor
    ~scoreRating();
};

#endif

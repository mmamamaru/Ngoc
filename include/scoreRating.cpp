#include "scoreRating.h"
#include <iostream>
using namespace std;

// Constructor implementation
scoreRating::scoreRating() {}

// Add a new rating and a review (delegates to ratingCalc)
void scoreRating::addRating(double newScore, const string& review) {
    ratingCalculator.addRating(newScore, review);
}

// Get score information
void scoreRating::getScore(bool getAverage, bool getReviews) const {
    if (getAverage) {
        cout << "Average Score: " << ratingCalculator.getAverageScore() << endl;
    }
    if (getReviews) {
        vector<string> reviews = ratingCalculator.getReviews();
        cout << "Number of Reviews: " << reviews.size() << endl;
        cout << "Reviews:" << endl;
        for (const std::string& review : reviews) {
            cout << "- " << review << endl;
        }
    }
}

// Destructor
scoreRating::~scoreRating() {}

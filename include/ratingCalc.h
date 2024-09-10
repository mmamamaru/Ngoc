#ifndef RATINGCALC_H
#define RATINGCALC_H

#include <vector>
#include <string>
using namespace std;

class ratingCalc {
private:
    double totalScore;   // Sum of scores stored
    int ratingCount;     // Number of ratings (for dipslay)
    double averageScore; // Average rating score for each member
    vector<string> reviews; // Store multiple reviews for each member

public:
    // Constructor
    ratingCalc();

    // Use const to preserve the objects state before calling the methods
    // Method: add a new rating score and review
    void addRating(double newScore, const string& review);

    // Method: calculate the average score
    double getAverageScore() const;

    // Method: count the number of ratings
    int getRatingCount() const;

    // Method: get all reviews
    vector<string> getReviews() const;

    // Destructor
    ~ratingCalc();
};

#endif

#include "ratingCalc.h"
using namespace std;

// Constructor initialization for new members
ratingCalc::ratingCalc() : totalScore(0.0), ratingCount(0), averageScore(-1.0) {}

// Add a new rating and store the review
void ratingCalc::addRating(double newScore, const string& review) {
    totalScore += newScore;
    ratingCount++;
    averageScore = (ratingCount > 0) ? (totalScore / ratingCount) : -1.0; //Calculate the average review
    reviews.push_back(review); // Store the review
}

// Const is used to preserve the state of object before calling methods
// Get the average rating score
double ratingCalc::getAverageScore() const {
    return averageScore;
}

// Get the number of ratings
int ratingCalc::getRatingCount() const {
    return ratingCount;
}

// Get all reviews
vector<string> ratingCalc::getReviews() const {
    return reviews;
}

// Destructor
ratingCalc::~ratingCalc() {}


#include "circular_motion.h"

// Function to calculate centripetal force
double calculateCentripetalForce(double mass, double velocity, double radius) {
    return mass * (velocity * velocity) / radius;
}

// Function to calculate centripetal acceleration
double calculateCentripetalAcceleration(double velocity, double radius) {
    return (velocity * velocity) / radius;
}

// Function to calculate angular velocity
double calculateAngularVelocity(double velocity, double radius) {
    return velocity / radius;
}

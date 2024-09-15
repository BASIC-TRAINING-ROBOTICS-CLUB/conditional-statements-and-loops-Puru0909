// main.c
#include <stdio.h>
#include "circular_motion.h"

int main() {
    double mass, velocity, radius;
    
    // Input values for mass, velocity, and radius
    printf("Enter the mass of the object (in kg): ");
    scanf("%lf", &mass);
    
    printf("Enter the velocity of the object (in m/s): ");
    scanf("%lf", &velocity);
    
    printf("Enter the radius of the circular path (in meters): ");
    scanf("%lf", &radius);
    
    // Calculate centripetal force, centripetal acceleration, and angular velocity
    double centripetalForce = calculateCentripetalForce(mass, velocity, radius);
    double centripetalAcceleration = calculateCentripetalAcceleration(velocity, radius);
    double angularVelocity = calculateAngularVelocity(velocity, radius);
    
    // Output the results
    printf("\nCentripetal Force: %.2lf N\n", centripetalForce);
    printf("Centripetal Acceleration: %.2lf m/s^2\n", centripetalAcceleration);
    printf("Angular Velocity: %.2lf rad/s\n", angularVelocity);
    
    return 0;
}

#include <stdio.h>

struct speed{
    float distance;
    float time_taken;
};

float speed_calculator(float a, float b){
    return a / b;
};

int main(){
    float average_speed_car;
    float average_speed_bus;

    struct speed car;
    struct speed bus;

    car.distance = 200; // km
    car.time_taken = 3;//hrs

    bus.distance = 200;
    bus.time_taken = 12;

    average_speed_car = speed_calculator(car.distance, car.time_taken);
    average_speed_bus = speed_calculator(bus.distance, bus.time_taken);

    printf("Average speed of car is %.2f\n", average_speed_car);
    printf("Average speed of bus is %.2f\n", average_speed_bus);

    return 0;

};
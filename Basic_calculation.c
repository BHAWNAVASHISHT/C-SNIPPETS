/* Write a program to calculate the total cost of the vehicle by adding basic cost
 with (i) excise duty (15%) (ii) sales tax (10%) (c) octroi (5%) and (d) road tax
 (1%). Input the basic cost*/
#include <stdio.h>
int main() {
    
    float basic_cost, excise_duty, sales_tax, octroi, road_tax, total_cost;
    printf("Enter the basic cost of the vehicle: ");
    scanf("%f", &basic_cost);
    excise_duty = basic_cost * 0.15;   
    sales_tax = basic_cost * 0.10;     
    octroi = basic_cost * 0.05;      
    road_tax = basic_cost * 0.01;      
    total_cost = basic_cost + excise_duty + sales_tax + octroi + road_tax;
    printf("Basic Cost: %.2f\n", basic_cost);
    printf("Excise Duty (15%%): %.2f\n", excise_duty);
    printf("Sales Tax (10%%): %.2f\n", sales_tax);
    printf("Octroi (5%%): %.2f\n", octroi);
    printf("Road Tax (1%%): %.2f\n", road_tax);
    printf("Total Cost: %f\n", total_cost);
    return 0;
}



#include <stdio.h>

int main() {
    float baseSalary, HRA, DA, TA, GrossSalary;

    printf("Enter Base Salary: ");
    scanf("%f", &baseSalary);

    printf("Enter HRA percentage: ");
    scanf("%f", &HRA);

    printf("Enter DA percentage: ");
    scanf("%f", &DA);

    printf("Enter TA percentage: ");
    scanf("%f", &TA);

    GrossSalary = baseSalary + (baseSalary * HRA / 100) + (baseSalary * DA / 100) +(baseSalary * TA / 100);
                 
                  
                 

    printf("Gross Salary: Rs. %.2f", GrossSalary);

    return 0;
}

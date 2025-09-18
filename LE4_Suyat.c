// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char completeName[50];
    char section[50];
    int firstQuarter;
    int secondQuarter;
    int thirdQuarter;
    int fourthQuarter;
    
    printf("Enter Complete Name: ");
    fgets(completeName, sizeof(completeName), stdin);
    
    printf("Enter Section: ");
    fgets(section, sizeof(section), stdin);
    
    
    printf("Enter 1st Quarter Grade: ");
    scanf("%d", &firstQuarter);
    printf("Enter 2nd Quarter Grade: ");
    scanf("%d", &secondQuarter);
    printf("Enter 3rd Quarter Grade: ");
    scanf("%d", &thirdQuarter);
    printf("Enter 4th Quarter Grade: ");
    scanf("%d", &fourthQuarter);
    
    
    float average = (firstQuarter+secondQuarter+thirdQuarter+fourthQuarter)/4;
 
    
    
    printf("\nStudent: %s", completeName);
    printf("Section: %s", section);
    printf("General Average: %.2f\n", average);
    
    
    if (average >= 90 && average <= 100) {
        printf("Remarks: Outstanding\n");
    }
    else if (average >= 85 && average <= 89) {
        printf("Remarks: Very Satisfactory\n");
    }
    else if (average >= 80 && average <= 84) {
        printf("Remarks: Satisfactory\n");
    }
    else if (average >= 75 && average <= 79) {
       printf("Remarks: Fair\n");
    }
    else {
        printf("Remarks: Failed\n");
    }
    
    return 0;
}
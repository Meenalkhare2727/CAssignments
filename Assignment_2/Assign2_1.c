#include <stdio.h>

int main() {
    int empId, deptNo;
    char dsgnCode;

    
    printf("Enter Employee ID: ");
    scanf("%d", &empId);
    printf("Enter Department Number: ");
    scanf("%d", &deptNo);
    printf("Enter Designation Code: ");
    scanf(" %c", &dsgnCode);

    
    printf("Employee with employee id %d is working in ", empId);
    
  
    switch(deptNo) {
        case 10:
            printf("\"Marketing\" department ");
            break;
        case 20:
            printf("\"Management\" department ");
            break;
        case 30:
            printf("\"Sales\" department ");
            break;
        case 40:
            printf("\"Designing\" department ");
            break;
        default:
            printf("an unknown department ");
            break;
    }

    
    switch(dsgnCode) {
        case 'M':
            printf("as \"Manager\".\n");
            break;
        case 'S':
            printf("as \"Supervisor\".\n");
            break;
        case 's':
            printf("as \"Security Officer\".\n");
            break;
        case 'C':
            printf("as \"Clerk\".\n");
            break;
        default:
            printf("with an unknown designation.\n");
            break;
    }

    return 0;
}


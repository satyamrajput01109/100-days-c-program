//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>

// Define enum for user roles
enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum Role userRole;

    // Assign a role
    userRole = ADMIN;

    // Display message based on role
    switch (userRole) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;

        case USER:
            printf("Welcome User! You have standard access.\n");
            break;

        case GUEST:
            printf("Welcome Guest! You have limited access.\n");
            break;

        default:
            printf("Invalid user role.\n");
    }

    return 0;
}

#include <stdio.h>

#define MAX 10

int main() 
{
    int systems[MAX] = {0};
    int n, choice, id;

    printf("Enter number of systems in lab (max 10): ");
    scanf("%d", &n);

    while (1) 
    {
        printf("\n--- CENTRALIZED LAB MANAGEMENT SYSTEM ---\n");
        printf("1. Turn ON System\n");
        printf("2. Turn OFF System\n");
        printf("3. Display System Status\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter System ID (1-%d): ", n);
                scanf("%d", &id);

                if (id >= 1 && id <= n) 
                {
                    systems[id - 1] = 1;
                    printf("System %d is now ON.\n", id);
                } 
                else 
                {
                    printf("Invalid System ID!\n");
                }
                break;

            case 2:
                printf("Enter System ID (1-%d): ", n);
                scanf("%d", &id);

                if (id >= 1 && id <= n) 
                {
                    systems[id - 1] = 0;
                    printf("System %d is now OFF.\n", id);
                } 
                else 
                {
                    printf("Invalid System ID!\n");
                }
                break;

            case 3:
                printf("\nSystem Status:\n");

                for (int i = 0; i < n; i++) 
                {
                    printf("System %d : %s\n", 
                           i + 1, 
                           systems[i] ? "ON" : "OFF");
                }
                break;

            case 4:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}
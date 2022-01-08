#include <stdio.h>
struct student {
    char Name[50];
    int rollno;
    float Eng,Maths,Phy,Chem,CS,Total,Per;
} s[10];

int main() {
    int i;
    printf("Enter information of students:\n");
     float Total,Per;


    // storing information
    for (i = 0; i < 10; ++i) {
        s[i].rollno = i + 1;
        printf("\nFor roll number %d\n", s[i].rollno);
        printf("Enter name: ");
        scanf("%s", s[i].Name);
        printf("\nEnter mark of English: ");
        scanf("%f", &s[i].Eng);
        printf("\nEnter mark of Mathematics: ");
        scanf("%f", &s[i].Maths);
        printf("\nEnter mark of Physics: ");
        scanf("%f", &s[i].Phy);
        printf("\nEnter mark of Chemistry: ");
        scanf("%f", &s[i].Chem);
        printf("\nEnter mark of Computer Science: ");
        scanf("%f", &s[i].CS);
        s[i].Total=s[i].Eng+s[i].Maths+s[i].Phy+s[i].Chem+s[i].CS;
        printf("\nTotal mark obtained: ");
        scanf("%f",&s[i].Total);
        s[i].Per=(s[i].Total/500)*100;
        printf("\nPercentage: ");
        scanf("%f",&s[i].Per);

    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 10; ++i) {
        printf("\nRoll number: %d\n", i + 1);
       printf("Name: ");
       puts(s[i].Name);
        printf("Percentage: %.2f", s[i].Per);
        printf("\n");
    }
    return 0;
}

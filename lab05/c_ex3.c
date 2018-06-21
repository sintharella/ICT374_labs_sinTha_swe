#include <stdio.h>

struct Student {
  char *name;               // point to a name string
  int id;                   // student number
  char enroll;              // enrollment option: D or X
};

void printStudent(struct Student *s);
void getStudent(struct Student *s);

int main(){
  struct Student x;

  char name[100];
  int id;
  char enroll;

  // printf("Enter a name: ");
  // fgets(name,100,stdin);
  //
  // printf("Enter a student number: ");
  // scanf("%i", &id);
  //
  // printf("Enter an enrollment option (D or X): ");
  // scanf(" %c", &enroll);
  //
  // x.name = name;
  // x.id = id;
  // x.enroll = enroll;

  // printf("%s", x.name);
  // printf("%i", x.id);
  // printf("\n%c\n", x.enroll);

  getStudent(&x);
  printStudent(&x);
}

void printStudent(struct Student *s)
{
    printf("\nStudent name: %s", s->name);
    printf("Student number: %d\n", s->id);
    printf("Student enrollment option: %c\n", s->enroll);
    return;
}

void getStudent(struct Student *s)
{
    printf("Type the name of the student: ");
    s->name = malloc(100);   // assume name has less than 100 letters
    fgets(s->name, 100, stdin);

    printf("\nType the student numner: ");
    scanf("%d", &(s->id));

    printf("\nType the student enrollment option (D or X): ");
    scanf(" %c", &(s->enroll)); // watch out for a bug here!

    return;
}

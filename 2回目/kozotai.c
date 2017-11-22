#include <stdio.h>

struct PersonalData {
  char name[100];
  int age;
}

Stduct StudentData {
  char student_id[10];
  struct PersonalData pd;
}

int main(void) {

  struct StudentData sds[] = {
     { .student_id = “1G00000”, .pd = { .name = “Nijima Joe”, .age = 30 } },
     { .student_id = “1G00001”, .pd = { .name = “Nijima Yae”, .age = 31 } },
     { .student_id = “1G00002”, .pd = { .name = “Yamamoto Kakuma”, .age = 51 } }
  }

  int size = sizeof(pds) / sizeof(pds[0]);
  
  for (int i = 0; i < size; i++) {
    printf(“[%s] %s: (%d)\n”, sds[i].id, sds[i].pd.name, sds[i].pd.age);
  }

  return 0;
}

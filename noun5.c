#include <stdio.h>
#include <string.h>



#define max_word 20



/* prototypes */
void pluralize (char word[]);


int main (void)
{
  char noun[max_word];   /* stores temporary word entered by user */

  printf("Enter a noun in singular form: ");
  scanf("%s", noun);

  //while (strcmp(noun, "done") != 0)
 {
    pluralize (noun);
    printf("The plural form is %s\n", noun);
 }

  return 0;
}

void pluralize (char word[])
{
  int length;
  char noun;
  length=1;
  length = strlen(word);

   if (word[length - 1] == 'y')
 {   word[length - 1] = 'i';
     word[length] = 'e';
    word[length + 1] = 's';
    word[length + 2] = '\0';
  }


  /* if word ends in "s" "ch" or "sh" add "es" */

 else if (word[length - 1] == 's' ||
    (word[length - 2] == 'c' && word[length - 1] == 'h') ||
    (word[length - 2] == 's' && word[length - 1] == 'h'))
  {  strcat(word, "es");
  }

  else
 {   strcat(word, "s");

    printf("New word is:", &noun);

}
return;
}

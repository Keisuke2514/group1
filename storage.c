#include <stdio.h>
#include "logic.h"

int load_cards(const char *path, problem *list, int max)
{
    FILE *fp = fopen(path, "r");

    if (!fp) 
    {
        return 0;
    }

    char line[256];

    if (!fgets(line, sizeof line, fp)) 
    {
        fclose(fp);
        return 0;
    }

    int n = 0;
    while (n < max && 
        fscanf
        (
            fp, "%d,%1023[^,],%1023[^\n]",
            &list[n].id,
            list[n].question,
            list[n].answer
        ) == 3
    )
    {
        n++;
    }

    fclose(fp);
    return n;
}


int save_cards(const char *path, problem *list, int count)
{
    FILE *fp = fopen(path, "w");

    if (!fp)
    {
        return 0;
    }

    fprintf(fp, "id,question,answer\n");

    for (int i = 0; i < count; i++)
    {
        fprintf(fp, "%d,%s,%s\n",
                list[i].id,
                list[i].question,
                list[i].answer);
    }

    fclose(fp);
    return 1;
}
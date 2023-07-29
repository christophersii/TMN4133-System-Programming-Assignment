//Copy the content of one text file to another text file
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("file1.txt", "r");
    if (fp1 == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
    fp2 = fopen("file2.txt", "w");
    if (fp2 == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
    ch = fgetc(fp1);
    while (ch != EOF)
    {
        fputc(ch, fp2);
        ch = fgetc(fp1);
    }
    printf("Contents copied to file2.txt");
    fclose(fp1);
    fclose(fp2);
    return 0;
}
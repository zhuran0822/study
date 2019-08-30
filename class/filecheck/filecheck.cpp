/*
* Author        : Bruce
* Version       : 1.0
* Date          : 08/30/2019
* Description   : 检查待测试文件（TEST.TXT），从关键字检索，判断这本书的书名——目前仅支持英文版本《支持战争与和平》和《老人与海》的判断
* Update        : 增加对待检查文件不存在的判断，避免程序段错误
*/

#include <stdio.h>
#include <string.h>

#ifndef _FILE_CHECK_
#define _FILE_CHECK_

#define WORD_SIZE_MAX 20
#define FILE_CHECK_LINE_MAX 10000        //最大检查10000行
#define LINE_LENGTH 1024
#define LINE_SPACE_LINE_MAX 100              //连续100空行，判定是文本读完了，不是很精确，大致能用

#define FILENAME "./Document/Test/filecheck/TEST.txt"

#define FILE_STYLE_OCEAN "ocean and dream --- A romantic writing style"
#define FILE_STYLE_WARANDPEACE "warn and peace --- A sympathetic and realistic style of writing"
#endif

//### Start: For the documnet <<战争与和平>>, for the style "war and peace" ###
#if 0
char Drubetskoy_Family[WORD_SIZE_MAX][WORD_SIZE_MAX];
char Drubetskoy_Family_count = 0;

char Kuragin_Family[WORD_SIZE_MAX][WORD_SIZE_MAX];
char Kuragin_Family_count = 0;

char Bezukhov_Family[WORD_SIZE_MAX][WORD_SIZE_MAX];
char Bezukhov_Family_count = 0;

char Rostov_Family[WORD_SIZE_MAX][WORD_SIZE_MAX];
char Rostov_Family_count = 0;

char Bolkonsky_Family[WORD_SIZE_MAX][WORD_SIZE_MAX];
char Bolkonsky_Family_count = 0;

char Buonaparte_Family[WORD_SIZE_MAX][WORD_SIZE_MAX];
char Buonaparte_Family_count = 0;
#endif
char Style_WarAndPeace[WORD_SIZE_MAX][WORD_SIZE_MAX];
char Style_WarAndPeace_count = 0;
//### Over: For the documnet <<战争与和平>>, for the style "war and peace" ###

//### Start: For the documnet <<老人与海>>, for the style "ocean" ###
char Style_Ocean[WORD_SIZE_MAX][WORD_SIZE_MAX];
char Style_Ocean_count = 0;
//### Over: For the documnet <<老人与海>>, for the style "ocean" ###

#if 0
void Add_Array_Drubetskoy_Family()
{
    strcpy(Drubetskoy_Family[Drubetskoy_Family_count++], "Princess Anna Drubetskaya");
    strcpy(Drubetskoy_Family[Drubetskoy_Family_count++], "Prince Boris Drubetskoy");

    return;
}

void Add_Array_Kuragin_Family()
{
    strcpy(Kuragin_Family[Kuragin_Family_count++], "Vasili Kuragin");
    strcpy(Kuragin_Family[Kuragin_Family_count++], "Kuragina");
    strcpy(Kuragin_Family[Kuragin_Family_count++], "Helene Kuragina");
    strcpy(Kuragin_Family[Kuragin_Family_count++], "Hippolyte Kuragin");
    strcpy(Kuragin_Family[Kuragin_Family_count++], "Anatole Kuragin");

    return;
}

void Add_Array_Bezukhov_Family()
{
    strcpy(Bezukhov_Family[Bezukhov_Family_count++], "Count Kirill Bezukhov");
    strcpy(Bezukhov_Family[Bezukhov_Family_count++], "Pierre Bezukhov");

    return;
}

void Add_Array_Rostov_Family()
{
    strcpy(Rostov_Family[Rostov_Family_count++], "Count llya");
    strcpy(Rostov_Family[Rostov_Family_count++], "Countess Rostova");
    strcpy(Rostov_Family[Rostov_Family_count++], "Nicolas rostov");
    strcpy(Rostov_Family[Rostov_Family_count++], "Petya Rostov");
    strcpy(Rostov_Family[Rostov_Family_count++], "Vera rostova");
    strcpy(Rostov_Family[Rostov_Family_count++], "Natasha Rostova");

    return;
}

void Add_Array_Bolkonsky_Family()
{
    strcpy(Bolkonsky_Family[Bolkonsky_Family_count++], "Prince Bolkonsky");
    strcpy(Bolkonsky_Family[Bolkonsky_Family_count++], "Lise bolkonskaya Meinen");
    strcpy(Bolkonsky_Family[Bolkonsky_Family_count++], "Prince Andry Bolkonsky");
    strcpy(Bolkonsky_Family[Bolkonsky_Family_count++], "Prince Nikolay Bolkonsky");
    strcpy(Bolkonsky_Family[Bolkonsky_Family_count++], "Princess Marya Bolkonskaya");

    return;
}

void Add_Array_Buonaparte_Family()
{
    strcpy(Buonaparte_Family[Buonaparte_Family_count++], "Buonaparte");                 //拿破仑

    return;
}
#endif

void Add_Array_Style_WarAndPeace()
{
    //try to add 10 words to the style array
    strcpy(Style_WarAndPeace[Style_WarAndPeace_count++], "Buonaparte");                 //拿破仑
    strcpy(Style_WarAndPeace[Style_WarAndPeace_count++], "army");
    strcpy(Style_WarAndPeace[Style_WarAndPeace_count++], "campaign");
    strcpy(Style_WarAndPeace[Style_WarAndPeace_count++], "massacres");
    strcpy(Style_WarAndPeace[Style_WarAndPeace_count++], "headquarters");
    strcpy(Style_WarAndPeace[Style_WarAndPeace_count++], "devil");
    strcpy(Style_WarAndPeace[Style_WarAndPeace_count++], "generals");
    strcpy(Style_WarAndPeace[Style_WarAndPeace_count++], "commander");
    strcpy(Style_WarAndPeace[Style_WarAndPeace_count++], "peace");
    strcpy(Style_WarAndPeace[Style_WarAndPeace_count++], "relax");

    printf("Style_WarAndPeace_count = %d\n", Style_WarAndPeace_count);

    return;
}

void Add_Array_Style_Ocean()
{
    //try to add 10 words to the style array
    strcpy(Style_Ocean[Style_Ocean_count++], "ocean");
    strcpy(Style_Ocean[Style_Ocean_count++], "sea");
    strcpy(Style_Ocean[Style_Ocean_count++], "wave");
    strcpy(Style_Ocean[Style_Ocean_count++], "Gulf");
    strcpy(Style_Ocean[Style_Ocean_count++], "swirl");
    strcpy(Style_Ocean[Style_Ocean_count++], "water");
    strcpy(Style_Ocean[Style_Ocean_count++], "storm");
    strcpy(Style_Ocean[Style_Ocean_count++], "dream");
    strcpy(Style_Ocean[Style_Ocean_count++], "life");
    strcpy(Style_Ocean[Style_Ocean_count++], "happy");

    printf("Style_Ocean_count = %d\n", Style_Ocean_count);

    return;
}



void Init_Aray()
{
    #if 0
    Add_Array_Drubetskoy_Family();
    Add_Array_Kuragin_Family();
    Add_Array_Bezukhov_Family();
    Add_Array_Rostov_Family();
    Add_Array_Bolkonsky_Family();
    Add_Array_Buonaparte_Family();
    Add_Array_Style_Ocean();
    #endif

    Add_Array_Style_WarAndPeace();
    Add_Array_Style_Ocean();

    return;
}

void Show_Array()
{
    int i,j,k ;
    char count_array_member = 0;

    printf("try to show some useful info. \n\n");

    #if 0
    for ( i = 0; i < Drubetskoy_Family_count; i++ )
    {
        printf("Drubetskoy_Family[%d] = %s\n", i, Drubetskoy_Family[i]);
    }

    for ( i = 0; i < Kuragin_Family_count; i++ )
    {
        printf("Kuragin_Family[%d] = %s\n", i, Kuragin_Family[i]);
    }

    for ( i = 0; i < Bezukhov_Family_count; i++ )
    {
        printf("Bezukhov_Family[%d] = %s\n", i, Bezukhov_Family[i]);
    }

    for ( i = 0; i < Rostov_Family_count; i++ )
    {
        printf("Rostov_Family[%d] = %s\n", i, Rostov_Family[i]);
    }

    for ( i = 0; i < Bolkonsky_Family_count; i++ )
    {
        printf("Bolkonsky_Family[%d] = %s\n", i, Bolkonsky_Family[i]);
    }

    for ( i = 0; i < Buonaparte_Family_count; i++ )
    {
        printf("Buonaparte_Family[%d] = %s\n", i, Buonaparte_Family[i]);
    }
    #endif

    for ( i = 0; i < Style_WarAndPeace_count; i++ )
    {
        printf("Style_WarAndPeace_count = %d, Style_WarAndPeace[%d] = %s\n", Style_WarAndPeace_count, i, Style_WarAndPeace[i]);
    }

    for ( i = 0; i < Style_Ocean_count; i++ )
    {
        printf("Style_Ocean_count = %d, Style_Ocean[%d] = %s\n", Style_Ocean_count, i, Style_Ocean[i]);
    }

    return;
}

int Get_FileSize()
{
    FILE *file;
    int line_number;
    char data_one_line[LINE_LENGTH];
    char temp_space_line = 0;

    file = fopen(FILENAME,"r");
    if (NULL == file)
    {
        printf("Error: %s(%d), open the document \"%s\" failed. \n", 
            __FUNCTION__,
            __LINE__,
            FILENAME);

        return -1;
    }

    while (line_number < FILE_CHECK_LINE_MAX)
    {
        if ( fgets(data_one_line, LINE_LENGTH - 1, file) != NULL )
        {
            temp_space_line = 0;
            line_number++;
        }
        else
        {
            temp_space_line++;

            if (LINE_SPACE_LINE_MAX < temp_space_line)
            {
                line_number -= temp_space_line;
                fclose(file);
                return line_number;
            }
        }
    }

    fclose(file);

    return line_number;
}

int Check_FileStyle_FindTarget(int line_number, char *target)
{
    char data_one_line[LINE_LENGTH];
    FILE *file;
    int i;
    int count_line = 0;
    int size_line = 0;
    int size_str = 0;
    unsigned int score = 0;

    file = fopen(FILENAME, "r");
    if (NULL == file)
    {
        printf("Error: %s(%d), open the document \"%s\" failed", 
            __FUNCTION__,
            __LINE__,
            FILENAME);

        return -1;
    }

    //printf("target = %s, line_number = %d .", target, line_number);
    size_str = strlen(target);

    while ( line_number-- )
    {
        if ( fgets(data_one_line, LINE_LENGTH - 1 , file) != NULL )
        {
            count_line++;
        }

        size_line = strlen(data_one_line);

        for(i=0; i <= size_line - size_str; i++)
        {
            if (strncmp(&data_one_line[i], target, size_str)==0)
            {
                //printf("found target at Line %d, below are the line: \n%s\n", count_line, data_one_line);
                score++;
            }
        };
    }

    fclose(file);

    return score;
}

int Check_FileStyle_WarAndPeace(int line_number)
{
    int i = 0;
    unsigned int score = 0;
    int score_temp = 0;

    printf("\n\n### Start to %s, line_number = %d #########\n", __FUNCTION__, line_number);

    for ( i = 0; i < Style_WarAndPeace_count; i++ )
    {
        score_temp = Check_FileStyle_FindTarget(line_number, Style_WarAndPeace[i]);
        if (-1 == score_temp)
        {
            return -1;
        }
        else
        {
            printf("In the first %d lines, the word %s appears %d times .\n", line_number, Style_WarAndPeace[i], score_temp);
            score += score_temp;
        }        
    }

    return score;
}

int Check_FileStyle_Ocean(int line_number)
{
    int i = 0;
    unsigned int score = 0;
    int score_temp = 0;

    printf("\n\n### Start to %s, line_number = %d #########\n", __FUNCTION__, line_number);

    for ( i = 0; i < Style_Ocean_count; i++ )
    {
        score_temp = Check_FileStyle_FindTarget(line_number, Style_Ocean[i]);
        if (-1 == score_temp)
        {
            return -1;
        }
        else
        {
            printf("In the first %d lines, the word %s appears %d times .\n", line_number, Style_Ocean[i], score_temp);
            score += score_temp;
        }
    }

    return score;
}

char Check_FileStyle()
{
    int i = 0;
    int line_number = 0;
    int score_ocean = 0;
    int score_warandpeace = 0;

    line_number = Get_FileSize();
    if (-1 == line_number)
    {
        printf("%s(%d)Get file size failed, please check the test document!\n",
            __FUNCTION__,
            __LINE__);
        return -1;
    }
    score_ocean = Check_FileStyle_Ocean(line_number);
    if (-1 == score_warandpeace)
    {
        printf("%s(%d)check the file Ocean failed, please check the test document!\n",
            __FUNCTION__,
            __LINE__);
        return -1;
    }

    score_warandpeace = Check_FileStyle_WarAndPeace(line_number);
    if (-1 == score_warandpeace)
    {
        printf("check the file WarAndPeace failed, please check the test document!\n");
        return -1;
    }

    printf("\nThe book %s has %d line<%d words/1 line>, score_ocean = %d, score_warandpeace = %d\n\n",
        FILENAME, line_number, LINE_LENGTH, score_ocean, score_warandpeace);

    if (( 0 == score_ocean) && (0 == score_warandpeace))
    {
        printf("we can not check the file's style, sorry!\n");
        return -1;
    }

    if (score_ocean >= score_warandpeace)
    {
        printf("\n\n\nThe writing style of the book <<%s>> is :\n%s\n", FILENAME, FILE_STYLE_OCEAN);
    }
    else
    {
        printf("\n\n\nThe writing style of the book <<%s>> is :\n%s\n", FILENAME, FILE_STYLE_WARANDPEACE);
    }

    return 0;
}

int main(int argc, char *argv[])
{
    Init_Aray();

    //Show_Array();

    Check_FileStyle();

    return 0;
}

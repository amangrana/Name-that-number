/*
 ID: dearxia1
 PROG: namenum
 LANG: C++
 */

#include <iostream>
#include <fstream>
#include <cstring>

#define MAXLEN 13

using namespace std;

ofstream fout ("namenum.out");
bool none = true;

char *trans(char *a)
{
    int n;
    for (n = 0; a[n] >= 'A' && a[n] <= 'Z'; n ++);
    for (int i = 0; i < n; i ++) {
        if (a[i] >='A' && a[i] <='C')
            a[i] = '2';
        else if (a[i] >= 'D' && a[i] <='F')
            a[i] = '3';
        else if (a[i] >= 'G' && a[i] <='I')
            a[i] = '4';
        else if (a[i] >= 'J' && a[i] <='L')
            a[i] = '5';
        else if (a[i] >= 'M' && a[i] <='O')
            a[i] = '6';
        else if (a[i] == 'P' || a[i] =='R' || a[i] == 'S')
            a[i] = '7';
        else if (a[i] >= 'T' && a[i] <='V')
            a[i] = '8';
        else if (a[i] >= 'W' && a[i] <='Y')
            a[i] = '9';
    }
    return a;
}

void check(char *a, int n)
{
    ifstream fload ("dict.txt");
    char temp[MAXLEN], tem[MAXLEN];
    while(fload >> temp)
    {
        strcpy(tem, temp);
        if (!strcmp(temp,"ZYTA"))
        {
            if (none)
                fout << "NONE\n";
            break;
        }
        if (strlen(temp) != n)
            continue;
        if (!strcmp(a, trans(tem)))
        {
            fout << temp << '\n';
            none = false;
        }
        
    }
    
}


int main()
{
    ifstream fin ("namenum.in");
    char num[MAXLEN];
    fin >> num;
    int len;
    for (len = 0; num[len] >= '1' && num[len] <= '9'; len ++);
    check(num,len);
    return 0;
}

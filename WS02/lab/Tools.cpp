#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include "Tools.h"
#include "Package.h"

FILE* fp;

namespace sdds {
    int openFile_r(const char filename[]) { // Fully provided
        fp = fopen(filename_r, "r");
        return fp != NULL;
    }
    int noOfTraces() {  // Fully provided
        int noOfTraces = 0;
        char ch;
        while (fscanf(fp, "%c", &ch) == 1) {
            noOfTraces += (ch == '\n');
        }
        rewind(fp);
        return noOfTraces;
    }
    

    // To Do: read functions (4 overloaded read functions)

    int read(char *Package_Name) {
       char package[50];
        if(fscanf(fp, "%60[^\n]\n", package))
        {
            strCpy(Package_Name, package);
        }
        return 1;
    }

    int read(int& dayofyear) {
        if(fscanf(fp, "%d,", &dayofyear)){
            return 1;
        }
        return 0;

    }

    int read(double & Fctime) {
          if(fscanf(fp, "%lf,", &Fctime)){
              return 1;
          }
        return 0;
    }

    int read(char& dayofweek) {
        if(fscanf(fp, "%[^ \t\n\r\v\f,]%*c", &dayofweek)){
            return 1;
        }
        return 0;

    }




    void closefile() { // Fully provided
        if (fp) fclose(fp);
    }
    
    void strCpy(char* str1, const char* str2) { // Fully provided 
        while (*str2) {
            *str1++ = *str2++;
        }
        *str1 = 0;
    }
    int strLen(const char* str) {  // Fully provided
        int i = -1;
        while (str[++i]);
        return i;
    }
}
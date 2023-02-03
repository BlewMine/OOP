#ifndef SDDS_TOOLS_H_
#define SDDS_TOOLS_H_

namespace sdds {
	int openFile_r(const char filename[]); // Provided
	void closefile(); // Provided
	int noOfTraces(); // Provided

	// ADD: Declare read prototypes (4 prototypes)

    int read(int& val);
    int read(double& val);
    int read(char& val);
    int read(char* val);


	void strCpy(char* des, const char* src); // Provided
	int strLen(const char* s); // Provided
}
#endif 

#ifndef DATA_BASE_H_
#define DATA_BASE_H_

#include <stdbool.h>
#include <string>
#include <vector>

/* definition */
#define D_MAX_LENGTH       (17)
#define D_MAX_DATA_NUMBER  (17)
#define D_HEAP_DATA_NUMBER (17)

/* error code definition */
#define D_ERROR_NONE       (0)	/* No error */
#define D_ERROR_OVER       (1)	/* add too many data */
#define D_ERROR_NODATA     (2)	/* No data exsists*/
#define D_ERROR_INDEX      (3)	/* index number doesn't exsist */
#define D_ERROR_NULL       (4)	/* NULL check */
#define D_ERROR_REGION     (5)	/* index number doesn't exsist */

struct S_DATA {
	S_DATA() : id(0) {}

	int id;
	std::string name;
	std::string mail;
	std::string memo;
};

class DataBase {
public:
	virtual ~DataBase() {};
	//virtual ~DataBase() = 0;
	
	virtual int addData(const S_DATA& temp)     = 0;
	virtual int getData(int size, S_DATA* temp) = 0;
	virtual int deleteData(int index)           = 0;
	virtual bool isDataMax()                    = 0;
	virtual bool isDataEmpty()                  = 0;
	virtual bool isIndexInRange(int index)  = 0;
};
#endif /* DATA_BASE_H_ */

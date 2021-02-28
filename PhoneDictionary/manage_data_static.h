#include <algorithm>
#include "data_base.h"
#ifndef MANAGE_DATA_STATIC_H_
#define MANAGE_DATA_STATIC_H_

class DataStatic : public DataBase {
public:
	DataStatic() ;
	~DataStatic();

	int addData(const S_DATA& temp);
	int getData(int size, S_DATA* temp);
	int deleteData(int index);
	bool isDataMax();
	bool isDataEmpty();
	bool isIndexInRange(int index);

private:
	std::vector<S_DATA> g_list_data;
	//int g_count_list_data;
	int g_count_list_data;

	int addDataStatic(const S_DATA& temp);
	int getDataStatic(int size, S_DATA* temp);
	int deleteDataStatic(int index);
	bool isDataMaxStatic();
	bool isDataEmptyStatic();
	bool isIndexInRangeStatic(int index);

	bool iniArray(int start, int size, S_DATA* data);
};

#endif /* MANAGE_DATA_STATIC_H_ */

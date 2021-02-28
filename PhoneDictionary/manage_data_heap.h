#include <algorithm>
#include "data_base.h"
#ifndef MANAGE_DATA_HEAP_H_
#define MANAGE_DATA_HEAP_H_

class DataHeap : public DataBase {
public:
	DataHeap();
	~DataHeap();

	int addData(const S_DATA& temp);
	int getData(int size, S_DATA* temp);
	int deleteData(int index);
	bool isDataMax();
	bool isDataEmpty();
	bool isIndexInRange(int index);
	
private:
	std::vector<S_DATA> g_list_data_heap;
	
	int addDataHeap(const S_DATA& temp);
	int getDataHeap(int size, S_DATA* temp);
	int deleteDataHeap(int index);
	bool isDataMaxHeap();
	bool isDataEmptyHeap();
	bool isIndexInRangeHeap(int index);

	bool iniArray(int start, int size, S_DATA* data);
};

#endif /* MANAGE_DATA_HEAP_H_ */

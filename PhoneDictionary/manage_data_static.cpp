#include "manage_data_static.h"

DataStatic::DataStatic() {
	g_list_data.resize(D_MAX_DATA_NUMBER);
	g_count_list_data = 0;
}

DataStatic::~DataStatic() {
}

int DataStatic::addData(const S_DATA& temp) {
	return addDataStatic(temp);
}

int DataStatic::getData(int size, S_DATA* temp) {
	return getDataStatic(size, temp);
}

int DataStatic::deleteData(int index) {
	return deleteDataStatic(index);
}

bool DataStatic::isDataMax() {
	return isDataMaxStatic();
}

bool DataStatic::isDataEmpty() {
	return isDataEmptyStatic();
}

bool DataStatic::isIndexInRange(int index) {
	return isIndexInRangeStatic(index);
}

int DataStatic::addDataStatic(const S_DATA& temp) {
	int i = 0;
	
    for (i = 0; i < (D_MAX_DATA_NUMBER + 1); i++) {
		if (0 != g_list_data[i].id) {
			continue;
		}
		g_list_data[i].id   = i + 1;
		g_list_data[i].name = temp.name;
		g_list_data[i].mail = temp.mail;
		g_list_data[i].memo = temp.memo;
		g_count_list_data++;

		return D_ERROR_NONE;
	}
	
	return D_ERROR_OVER;
}

int DataStatic::getDataStatic(int size, S_DATA* temp) {
	int i = 0;

	if (NULL == temp) {
		return D_ERROR_NULL;
	}
	iniArray(0, size, temp);
	for (i = 0; i < D_MAX_DATA_NUMBER; i++) {
		(temp + i)->id   = g_list_data[i].id;
		(temp + i)->name = g_list_data[i].name;
		(temp + i)->mail = g_list_data[i].mail;
		(temp + i)->memo = g_list_data[i].memo;
	}
	return D_ERROR_NONE;
}

int DataStatic::deleteDataStatic(int index) {
	int i = 0;

	for (i = 0; i < D_MAX_DATA_NUMBER; i++) {
		if (index != g_list_data[i].id) {
			continue;
		}
		g_list_data[i].id = 0;
		g_count_list_data--;
		return D_ERROR_NONE;
	}
	return D_ERROR_INDEX;
}

bool DataStatic::isDataMaxStatic() {
	if (D_MAX_DATA_NUMBER <= g_count_list_data) {
		return true;
	}
	return false;
}

bool DataStatic::isDataEmptyStatic() {
	if (0 == g_count_list_data) {
		return true;
	}
	else {
		return false;
	}
}

bool DataStatic::isIndexInRangeStatic(int index) {
	int i = 0;

	if ((0 < index) && (index <= D_MAX_DATA_NUMBER)) {
		return true;
	}
	else {
		return false;
	}
}

bool DataStatic::iniArray(int start, int size, S_DATA* data) {
	int i = 0;

	if (NULL == data) {
		return false;
	}

	for (i = start; i < (start + size); i++) {
		(data + i)->id = 0;
		(data + i)->name = "";
		(data + i)->mail = "";
		(data + i)->memo = "";
	}
	return true;
}

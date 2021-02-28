#include "manage_data_heap.h"

DataHeap::DataHeap() {
	g_list_data_heap;
}

DataHeap::~DataHeap() {
}

int DataHeap::addData(const S_DATA& temp) {
	return addDataHeap(temp);
}

int DataHeap::getData(int size, S_DATA* temp) {
	return getDataHeap(size, temp);
}

int DataHeap::deleteData(int index) {
	return deleteDataHeap(index);
}

bool DataHeap::isDataMax() {
	return isDataMaxHeap();
}

bool DataHeap::isDataEmpty() {
	return isDataEmptyHeap();
}

bool DataHeap::isIndexInRange(int index) {
	return isIndexInRangeHeap(index);
}

int DataHeap::addDataHeap(const S_DATA& temp) {
	S_DATA work = temp;

	auto max = max_element(g_list_data_heap.begin(), g_list_data_heap.end(), [](const S_DATA& a, const S_DATA& b) {
		return (a.id == 0) ? false : (b.id == 0) || a.id < b.id;
		});

	if (0 == g_list_data_heap.size()) {
		work.id = 1;
	}
	else {
		work.id = (*max).id + 1;
	}
	g_list_data_heap.push_back(work);

	return D_ERROR_NONE;
}

int DataHeap::getDataHeap(int size, S_DATA* temp) {
    unsigned long i = 0;

	iniArray(0, size, temp);
	for (i = 0; i < g_list_data_heap.size(); i++) {
		(temp + i)->id   = g_list_data_heap[i].id;
		(temp + i)->name = g_list_data_heap[i].name;
		(temp + i)->mail = g_list_data_heap[i].mail;
		(temp + i)->memo = g_list_data_heap[i].memo;
	}
	return D_ERROR_NONE;
}

int DataHeap::deleteDataHeap(int index) {
    unsigned long i = 0;

	for (i = 0; i < g_list_data_heap.size(); i++) {
		if (index != g_list_data_heap[i].id) {
			continue;
		}
		g_list_data_heap.erase(g_list_data_heap.begin() + i);
		return D_ERROR_NONE;
	}
	return D_ERROR_INDEX;
}

bool DataHeap::isDataMaxHeap() {
	return false;
}

bool DataHeap::isDataEmptyHeap() {
	if (0 == g_list_data_heap.size()) {
		return true;
	}
	else {
		return false;
	}
}

bool DataHeap::isIndexInRangeHeap(int index) {
    unsigned long i = 0;

	for (i = 0; i < g_list_data_heap.size(); i++) {
		if (index == g_list_data_heap[i].id) {
            return true;
		}
    }
    return false;
}

bool DataHeap::iniArray(int start, int size, S_DATA* data) {
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


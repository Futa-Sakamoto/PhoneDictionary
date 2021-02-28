#include "data_factory.h"
#include "manage_data_static.h"
#include "manage_data_heap.h"

std::shared_ptr<DataBase> DataFactory::create(E_TYPE type) {
	if (E_TYPE::TYPE_STATIC == type) {
		static std::shared_ptr<DataStatic> data_static;
		if (!data_static) {
			data_static.reset(new DataStatic);
		}
		return data_static;
	}
	else {
		static std::shared_ptr<DataHeap> data_heap;
		if (!data_heap) {
			data_heap.reset(new DataHeap);
		}
		return data_heap;
	}
}
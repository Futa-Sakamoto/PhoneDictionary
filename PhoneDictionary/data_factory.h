#include <memory>
#include "data_base.h"
#ifndef DATA_FACTORY_H_
#define DATA_FACTORY_H_

enum class E_TYPE {
	TYPE_STATIC,
	TYPE_HEAP,
	TYPE_FILE,
	TYPE_DB
};

class DataFactory {
public:
	static std::shared_ptr<DataBase> create(E_TYPE type);
};

#endif // !DATA_FACTORY_H_

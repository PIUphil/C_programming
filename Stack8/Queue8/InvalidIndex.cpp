#include "InvalidIndex.h"

InvalidIndex::InvalidIndex(int index):index_(index) {}

int InvalidIndex::invalid() const {
	return index_; 
}
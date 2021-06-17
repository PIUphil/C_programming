#pragma once

class InvalidIndex {
public:
	InvalidIndex(int index);

	// get
	int invalid() const;

private:
	int index_;
};

InvalidIndex::InvalidIndex(int index) :index_(index) {}

int InvalidIndex::invalid() const {
	return index_;
}
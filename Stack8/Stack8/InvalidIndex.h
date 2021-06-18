#pragma once

class InvalidIndex {
public:
	InvalidIndex(int index);

	// get
	int invalid() const;

private:
	int index_;
};
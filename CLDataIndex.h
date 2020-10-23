#pragma once
#include <iostream>
#include "CLbplusTree.h"
#include "bplusTreeDefine.h"
#include "bplusTreeNode.h"
#include <vector>
class CLDataIndex
{
public:
	CLDataIndex() {
	};
	~CLDataIndex() {};
	void createIndex(std::vector<int64_t> datePtr, std::vector<int> row, int count);
private:
	CLbplusTree m_BplusTree;
};


#include <stdio.h>
#include <stdlib.h>

struct ArrayUtil{
	void *base;
	int typeSize;
	int length;
}

ArrayUtil resize(ArrayUtil util, int length) {
	util.base =realloc(util.base,util.typeSize*length);
	util.length = length;
	return util;
};

int areEqual(ArrayUtil a, ArrayUtil b){
	if(a.length != b.length)
		return 0;
	for(int i=0;i<a.length;i++){
		if(a[i]!=b[i])
			return 0;
	}
	return 1;
};

ArrayUtil create(int typeSize, int length){
	void *array = calloc(length,typeSize);
	ArrayUtil util;
	util.base = array;
	util.typeSize = typeSize;
	util.length = length;
	return util;
};



int main(int argc, char const *argv[])
{

	create(int typeSize, int length);
	return 0;
}
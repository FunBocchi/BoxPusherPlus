#pragma once
class IntArray2D {
public:
	//���캯��
	IntArray2D(int size0, int size1) :
		mArray(0), mSize0(size0), mSize1(size1) {
		mArray = new int[size0 * size1];
	}
	//��������
	~IntArray2D() {
		delete[] mArray;
		mArray = nullptr;
	}
	//���ܺ���
	//�����������ʽ
	int& operator()(int index0, int index1) {
		return mArray[index1 * mSize0 + index0];
	}
	const int& operator()(int index0, int index1)const {
		return mArray[index1 * mSize0 + index1];
	}
private:
	int* mArray;
	const int mSize0;
	const int mSize1;
};


#pragma once

template <typename T>
T max(T a, T b) {
	return (a > b) ? a : b;
}

//template <typename T>
//struct slice1d
//{
//	int size;
//	T* __restrict__ data;
//
//	slice1d(int _size, T* _data) : size(_size), data(_data) {}
//
//	void zero() { memset((char*)data, 0, sizeof(T) * size); }
//	void set(const T& x) { for (int i = 0; i < size; i++) { data[i] = x; } }
//
//	inline T& operator()(int i) const { assert(i >= 0 && i < size); return data[i]; }
//
//	slice1d& operator=(const slice1d<T>& rhs) { assert(size == rhs.size); memcpy(data, rhs.data, rhs.size * sizeof(T)); return *this; };
//};

#pragma once
#ifndef __SORTER_H__
#define __SORTER_H__

template<class T1>
bool compare(T1 max, T1 min) { if (max>min) return true; return false; };

template<class Tc>
bool compare(Complex<Tc> max, Complex<Tc> min) {
	if (max.re_>min.re_) return true;
	else if (max.re_==min.re_) if (max.im_>min.im_) return true;
	return false;
};

template<class T2>
class Sorter{
public:
	static void sort(T2* arr,int size) {
		for (int i=0;i<size;i++) {
			for (int j=i+1;j<size;j++)
				if (compare(arr[i],arr[j])) {
					T2 temp = arr[j];
					arr[j] = arr[i];
					arr[i] = temp;
				}
		}
	}
};

#endif
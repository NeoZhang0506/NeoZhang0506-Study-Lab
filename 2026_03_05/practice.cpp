#include<iostream>
using std::cout;
using std::endl;

//namespace  Neo
//{
//	// 定义一个模板类型的静态数组
//	template<class T, size_t N = 10>
//	class arry
//	{
//	public:
//		T& operator[](size_t index)
//		{
//			return _array[index];
//		}
//		
//		const T& operator[](size_t index) const
//		{
//			return _array[index];
//		}
//		
//		size_t size() const
//		{
//			return _size;
//		}
//		
//		bool empty() const
//		{
//			return 0 == _size;
//		}
//	private:
//		T _array[N];
//		size_t _size;
//	};
//}
//
//// 函数模板 -- 参数匹配
//template<class T>
//bool Less(T left, T right)
//{
//	return left < right;
//}
//
//template<class T1, class T2>
//class Data
//{
//public:
//	Data()
//	{
//		cout << "Data<T1, T2>" << endl;
//	}
//private:
//	T1 _d1;
//	T2 _d2;
//};
//
////template<>
////class Data<int, char>
////{
////public:
////	Data()
////	{
////		cout << "Data<int, char>" << endl;
////	}
////private:
////	int _d1;
////	char _d2;
////};
////
////void TestVector()
////{
////	Data<int, int> d1;
////	Data<int, char> d2;
////}
//
//template <class T1>
//class Data<T1, int>
//{
//public:
//	Data()
//	{
//		cout << "Data<T1, int>" << endl;
//	}
//private:
//	T1 _d1;
//	int _d2;
//};
//
//// 两个参数偏特化为指针类型
//template <typename T1, typename T2>
//class Data<T1*, T2*>
//{
//public:
//	Data()
//	{
//		cout << "Data<T1*, T2*>" << endl;
//	}
//	
//private:
//	T1 _d1;
//	T2 _d2;
//};
//
//// 两个参数偏特化为引用类型
//template <typename T1, typename T2>
//class Data<T1&, T2&>
//{
//public:
//	Data(const T1& d1, const T2& d2)
//	: _d1(d1)
//	, _d2(d2)
//	{
//		cout << "Data<T1&, T2&>" << endl;
//	}
//private:
//	const T1 & _d1;
//	const T2 & _d2;
//};
//
//void test2()
//{
//	Data<double, int> d1;  // 调用特化的int版本
//	Data<int, double> d2;  // 调用基础的模板
//	Data<int*, int*> d3;  // 调用特化的指针版本
//	Data<int&, int&> d4(1, 2); // 调用特化的引用版本
//}
//
//int main()
//{
////	cout << Less(1, 2) << endl;  // 可以比较,结果正确
////	
////	Date d1(2022, 7, 7);
////	Date d2(2022, 7, 8);
////	cout << Less(d1, d2) << endl;  // 可以比较.结果正确
////	
////	Date* p1 = &d1;
////	Date* p2 = &d2;
////	cout << Less(p1, p2) << endl;  // 可以比较,结果正确
//	
//	void TestVector();
//	
//	return 0;
//}

// 函数模板 -- 参数匹配
template<class T>
bool Less(T left, T right)
{
	return 
}

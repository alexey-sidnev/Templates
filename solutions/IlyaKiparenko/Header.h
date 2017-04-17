


template <class Type>
class Sorter
{
	static void sort(Type* mas,int size)
	{
		Type t;
		for(int i=0; i<size; i++)
		{
			for(int j=i+1; j<size; j++)
			{
				
			}
		}

	}
};

template <class Type>
class Compare
{
	static int comp(Type& a,Type& b)
	{
		return a>b;
	}
	static int comp(Complex<Type>& a,Complex<Type>& b)
	{
		return a>b;
	}

};


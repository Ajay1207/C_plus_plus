#pragma once
template<typename T>
class Mat
{
private:
	T* mat;
	T rows;
	T cols;
public:
	Mat(T rows, T cols) 
	{
		this->rows = rows;
		this->cols = cols;
		mat = new T[rows * cols];
	}
	void set_elements()
	{
		for (T i = 0; i < this->rows*this->cols; ++i)
		{
			this->mat[i] = i;
		}
	}
	T get(T row, T col)
	{
		return mat[col + row*cols];
	}
	
	void set(T val, T row, T col)
	{
		mat[col + row*cols] = val;
	}


};

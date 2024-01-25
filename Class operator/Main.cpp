#include <iostream>


class Integer {
private:
	int data_;
//=============
	//bool sign_;
	//unsigned long long units_; // �����  ���������� ����� ����� �������� ��� ������������� ����������� ����� �����

public:

	Integer():data_(0){}
	Integer(int num):data_(num){}

	// ���������� ��������� ��� ������������� ������� 
	friend Integer operator +(Integer A, Integer B) {
		Integer result;
		result.data_ = A.data_ + B.data_;
		return result;
	}

	friend std::ostream& operator<<(
		std::ostream& out,
		const Integer& obj
		);

	int GetNum() {
		return data_;
	}

	//�������� ���������� ��� ����� ������
	Integer& operator=(const Integer& other) {
		this->data_ = other.data_;
		return *this;
	}

};




 std::ostream& operator<<(
	std::ostream& out,
	const Integer& obj
	) {
	 return out << obj.data_;
}

 //���������� ��������� ��� ����������� �������
 Integer operator-(Integer a, Integer b) {
	 return a.GetNum() - b.GetNum();
 }
 Integer operator*(Integer a, Integer b) {
	 return a.GetNum() * b.GetNum();
 }




int main() {
	setlocale(0, "");

	Integer a{ 5 };
	Integer b{ 8 };

	std::cout << a + b << '\n';
	std::cout << a - b << '\n';
	std::cout << a * b << '\n';
//=================================
	std::cout << a + 5 << '\n';
	std::cout << a - 5 << '\n';
	std::cout << a * 3 << '\n'; 
//=================================
	std::cout << 4 + b << '\n';
	std::cout << 7 - b << '\n';
	std::cout << 1 * b << '\n';






	return 0;
}


/*
	1.��������� ����� ����������� ������ ��� �������.
	��� ���������� ����� ������ ��������� �� �����������.

	2. �������� �� ����� ������ ������ ��������� � ���� ���������.

	3.��� ���������� ��� �������� ����������:
	( ., ?:, & - �������, ::, -> )
*/
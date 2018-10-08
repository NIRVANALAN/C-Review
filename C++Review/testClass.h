#pragma once
#include <string>
#include <vector>

class test_class
{
public:
	static std::string class_name;
private:
	std::vector<int> int_vector_;
	std::string user_string_;

public:


	std::vector<int> int_vector() const
	{
		return int_vector_;
	}
	std::string user_string() const
	{
		return  user_string_;
	}

	int price1() const
	{
		return price_;
	}

	explicit test_class(int price)
		: price_(price)
	{
	}
	void work();


protected:
	int price_;
};

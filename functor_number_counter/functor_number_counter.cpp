#include <iostream>

class  Functor_sum_count
{	
	int m_counter;
public:		
	int sum_number=0;
	int number_counter = 0;
	int number_division_three = 0;
	void operator()(int* arr,int size_array) {				
		for (int i = 0;i < size_array;i++) {
			if (arr[i] % 3 == 0) {
				sum_number += arr[i];				
				number_division_three++;
			}							
		}			
		m_counter++;		
	}
	int get_sum() {
		return sum_number;
	}
	int get_count() {
		return number_division_three;
	}
};

int main() {
	int arr[]{ 4 ,1 ,3 ,6 ,25 ,54 };
	int size_array = sizeof(arr) / sizeof(arr[0]);
	Functor_sum_count functor_sum_count;	
	functor_sum_count(arr, size_array);
	std::cout << "get_sum() = " << functor_sum_count.get_sum() << "\n";
	std::cout << "get_count() = " << functor_sum_count.get_count() << "\n";
}
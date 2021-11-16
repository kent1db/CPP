#include <iostream>

 struct Data{
	int x;
};

 uintptr_t serialize(Data* ptr){
	 return (reinterpret_cast<uintptr_t>(ptr));
 }

Data* deserialize(uintptr_t raw){
	return (reinterpret_cast<Data *>(raw));
}

int 	main(){
 	Data* ptr = new Data;
 	ptr->x = 42;
 	Data* des = NULL;
 	uintptr_t p;
 	p = serialize(ptr);
 	des = deserialize(p);
 	std::cout << "ptr address : " << ptr << std::endl;
 	std::cout << "des address : " << des << std::endl;
 	delete ptr;
}

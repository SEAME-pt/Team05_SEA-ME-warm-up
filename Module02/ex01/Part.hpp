#pragma once

# include <iostream>

class Part {
	public:
		Part();
		Part(const Part &other);
		~Part();
		Part&	operator=(const Part &other);
        virtual void print() = 0;
	private:

};

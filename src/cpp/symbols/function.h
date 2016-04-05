#pragma once
#include "symbol.h"

class Function : public Symbol
{
	public:
		Identifier* identifier;
		
		Function(void);
		Function(Identifier* identifier, YYLTYPE loc);
		
		~Function(void);
		
		void PrintInfo();
};

class Call : public Symbol
{
	public:
		Identifier* identifier;
		
		Call(void);
		Call(Identifier* identifier, YYLTYPE loc);
		
		~Call(void);
		
		void PrintInfo();
};
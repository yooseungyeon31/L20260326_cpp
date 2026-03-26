#pragma once



class String
{

public:
	String()
	{
		Data = new char[1]; //초기화 하고 하나만 만들어놓자
		Data[0] = '\0';
		Length = 0;
	}

	~String()
	{

	}

	int GetLength() const //내용 안바꾸고 길이만리턴 해준다 
	{
		return Length;
	}
protected:
	char* Data;
	size_t Length = 0; //길이 필요하니까 추가
};


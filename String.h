#pragma once
#include <iostream>


class String
{

public:
	String()
	{
		Data = new char[1]; //초기화 하고 하나만 만들어놓자
		Data[0] = '\0';
		Length = 0;
	}

	//생성자 오버로딩
	//인스트링을 길이 세서 넣어줘야 하니까 길이세는걸 만들자. 
	String(const char* InString)
	{
		Length = CountLength(InString);
		Data = new char[Length + 1];
		CopyString(InString);
	}

	//자료형 들어온거 내꺼
	//복사생성자를 재정의한거
	//자기 형태를 복사, 기본은 안만들어도 동작을 함..
	//copy constructor  //복사생성자까지 만들면 깊은 복사임.
	// 하나만 가리켜도 자동으로 두개 가리키게 해주는게 깊은복사..?
	//얕은복사는 기본으로 주는거..
	//복사생성자는 const에 자기참조해서 사용함. 
	//복사생성자 지우는 것도 가능함.
	String(const String& Other)
	{
		Length = Other.GetLength();
		Data = new char[Other.GetLength() + 1];
		CopyString(Other.GetPointer());

	}

	//문자열 비교방법--------------------
	//1. 크기 비교
	bool operator = (const String& Other)
	{
		if (Length != Other.GetLength())
		{//현재 길이랑 새로운길이랑 길이비교하고 다르면 false 리턴
			return false;
		}



		//하나하나 직접 비교하기
		for (int i = 0; i < Length; i++)
		{
			if (Data[i] != Other.Data[i])
			{
				return false;
			}
		}

		//만약에 문자가 100만자 까지 된다면 어떻게 하지?..?
		return true;

	}
	//------------------------------------

	~String()
	{
		delete[] Data;
		Data = nullptr;
	}



	//inline size_t  GetLength() const //내용 안바꾸고 길이만리턴 해준다 //size_t 맞추기  
	//{
	//	return Length;
	//}


	//+ 도 함수..그래서 연산자 + 이렇게 하면 -> 더하기 함수를 재정의하겠다
   //operator overloading
	String operator+(const String& RHS) const
	{
		size_t NewLength = Length + RHS.GetLength() + 1; '\0';
		char* NewResult = new char[NewLength]; //결과에 새로운 길이를 넣어준다.


		//기존에 있는거 가져오기
		for (int i = 0; i < Length; i++)
		{
			NewResult[i] = Data[i];
		}

		//더하기 뒤에 있는거 합치기
		int j = 0;
		for (int i = (int)Length; i < NewLength; i++)
		{
			NewResult[i] = RHS.Data[j];
			j++;
		}
		NewResult[NewLength - 1] = '\0';

		return String(NewResult);


	}

	//아무것도 바뀌지 않고 정보만 가져온다.그래서 const붙임.
	//()인자 앞에 있는 것도 마찬가지로 인자값은 바꾸지 않겠다. 의미
	inline const char* GetPointer() const
	{
		return Data;
	}

	inline size_t GetLength() const
	{
		return Length;
	}

protected:
	char* Data;
	size_t Length = 0; //길이 필요하니까 추가

	//길이세는 함수
	size_t CountLength(const char* InString) const//바꾸지 않겠다
	{

		int Count = 0;
		while (InString[Count] != '\0')//길이가 널이 아닐때 까지 반복
		{
			Count++;
		}

		return Count;
	}

	//복사하는 함수
	void CopyString(const char* InString) //인자 바꿉면 안돼서 const
	{
		for (int i = 0; i < Length; i++)
		{
			Data[i] = InString[i];
		}
		Data[Length] = '\0';
	}
};

//문자열 비교하는 방법
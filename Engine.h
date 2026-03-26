
class UEngine
{


public:
	UEngine();
	~UEngine();

	void Init();
	void Term();

	void Run();




protected:
	void Input();
	void Tick();
	void Render();
};

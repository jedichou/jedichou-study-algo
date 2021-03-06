using namespace System;

ref class MyClass
{
	int value;
	String^ str;

public:
	MyClass(int v, String^ s): value(v), str(s) {}
	MyClass(const MyClass %other)
	{
		Console::WriteLine("Copy con called");
		value = other.value;
		str = other.str;
	}
	int getValue() { return value; }
	void setValue(int v) { value = v; }
	String^ getString() { return str; }
};

int main(array<System::String^>^ args)
{
	Console::WriteLine("Copy Construction");

	MyClass^ one = gcnew MyClass(3, "abc");
	MyClass^ two = one;

	Console::WriteLine(
		"two details, value:{0}, str:{1}", 
		two->getValue(), 
		two->getString()
	);

	MyClass three = *one;
	three.setValue(4);
	Console::WriteLine("Value of one: {0}", one->getValue());
	Console::WriteLine("Value of three: {0}", three.getValue());

	// press any key to quit program
	Console::ReadKey();
	return 0;
}
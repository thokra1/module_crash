export module test;
import std.core;
import "vk_platform.h";

export namespace test
{
	struct some_type
	{
		std::int32_t value = -1;
	};

	std::ostream& operator<<(std::ostream& stream, some_type st)
	{

		stream << st.value;
		return stream;
	}
}
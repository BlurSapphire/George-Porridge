#pragma once

namespace Operations {
	class Add {
	public:
		Add(int x, int y);

		void PrintResult(int total);

	private:
		int m_x;
		int m_y;
		int m_total;
	};
	class Substract {
	public:
		Substract(int x, int y);

		void PrintResult(int total);

	private:
		int m_x;
		int m_y;
		int m_total;
	};
	class Multiply {
	public:
		Multiply(int x, int y);

		void PrintResult(int total);

	private:
		int m_x;
		int m_y;
		int m_total;
		};
	class Divide {
	public:
		Divide(int x, int y);

		void PrintResult(int total);

	private:
		int m_x;
		int m_y;
		int m_total;
	};
}
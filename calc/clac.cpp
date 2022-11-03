#include<iostream>
class clac{
	private:
		char prompt;
		double a;
		double b;

		double ans;
	public:
		clac{
			while (true) {
				std::cin >> prompt;

				switch(prompt){
					case 'a':
						add();
						break;
					case 's':
						sub();
						break;
					case 'm':
						mul();
						break;
					case 'd':
						div();
						break;
					default:
						std::cout << "type in the first letter of your desired operator to use it (only works for the 4 basic operators)";
						
				}
			}
		}

		void add() {
			std::cout << "\nAdd";
			std::cout << "\nFirst Number| ";
			std::cin >> a;
			std::cout << "Second Number| ";
			std::cin >> b;

			ans = a + b;
			std::cout << ans;
		}


		void sub() {
			std::cout << "\nAdd";
			std::cout << "\nFirst Number| ";
			std::cin >> a;
			std::cout << "Second Number| ";
			std::cin >> b;

			ans = a - b;
			std::cout << ans;
		}

		void mul() {
			std::cout << "\nAdd";
			std::cout << "\nFirst Number| ";
			std::cin >> a;
			std::cout << "Second Number| ";
			std::cin >> b;

			ans = a * b;
			std::cout << ans;
		}

		void div() {
			std::cout << "\nAdd";
			std::cout << "\nFirst Number| ";
			std::cin >> a;
			std::cout << "Second Number| ";
			std::cin >> b;

			ans = a / b;
			std::cout << ans;
		}
};
int main(){
	
}

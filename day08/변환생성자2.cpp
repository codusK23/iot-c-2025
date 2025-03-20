#include <iostream>

class Time {
private:
	int hour;
	int min;
	int sec;

public:
	Time() {}					// ����Ʈ ������
	Time(int abssec) {		// ��ȯ ������
		hour = abssec / 3600;
		min = (abssec / 60) % 60;
		sec = abssec % 60;
	}

	void printTime() {
		std::cout << "���� �ð��� " << hour << "�� " << min << "�� " << sec << "���Դϴ�." << std::endl;
	}
};


int main() {

	Time now(9999);
	//Time now(6666);
	now.printTime();

	return 0;

}
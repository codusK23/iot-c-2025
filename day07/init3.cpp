#include <iostream>

class CTime {
private:
	int m_hour{ 0 };
	int m_min{ 0 };
	int m_sec{ 0 };

public:
	CTime() { std::cout << "�⺻ ������ ȣ��" << std::endl; }	// ����Ʈ ������

	CTime(int h, int m, int s) : m_hour(h), m_min(m), m_sec(s)		// ���Կ����ڸ� ������� �ʰ� �ʱ�ȭ -> �ݷ� �ʱ�ȭ, �̴ϼȶ����� ����Ʈ
	{
		std::cout << "�Է� 3�� �޴� ������ ȣ��" << std::endl;
		//m_hour = h;
		//m_min = m;
		//m_sec = s;
	}
	
	void setTime(int hour, int min, int sec) {
		m_hour = hour;
		m_min = min;
		m_sec = sec;
	}

	void showTime() const {
		printf("���� �ð��� %d:%d:%d �Դϴ�\n", m_hour, m_min, m_sec);
	}
};

int main() {
	//CTime now;
	CTime now = CTime();		// �ӽ� ��ü ����
	now.showTime();

	CTime t(15, 30, 30);
	t.showTime();

	return 0;
}
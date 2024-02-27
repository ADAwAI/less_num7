#include "Counter.h"

// ����������� �� ���������, ������������� ��������� �������� � 1
Counter::Counter() : value(1) {}

// ����������� � ����������, ������������� ��������� �������� ��������
Counter::Counter(int initialValue) : value(initialValue) {}

// ����� ��� ���������� �� 1
void Counter::increment() {
    value++;
}

// ����� ��� ���������� �� 1
void Counter::decrement() {
    value--;
}

// ����� ��� ��������� �������� �������� ��������
int Counter::getCurrentValue() const {
    return value;
}
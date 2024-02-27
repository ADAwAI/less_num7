#include "Counter.h"

// Конструктор по умолчанию, устанавливает начальное значение в 1
Counter::Counter() : value(1) {}

// Конструктор с параметром, устанавливает начальное значение счётчика
Counter::Counter(int initialValue) : value(initialValue) {}

// Метод для увеличения на 1
void Counter::increment() {
    value++;
}

// Метод для уменьшения на 1
void Counter::decrement() {
    value--;
}

// Метод для получения текущего значения счётчика
int Counter::getCurrentValue() const {
    return value;
}
#include "vector.h"
#include <cstring>

vector::vector() : m_cap(0), m_size(0), m_data(0)
{

}

void vector::PushBack(int value) {
    if (m_size == m_cap) {
        resize();
    }
    m_data[m_size] = value;
    m_size++;
}

void vector::PopBack() {
    m_size--;
}

int& vector::operator [] (int index) {
    return m_data[index];
}

void vector::resize() {
    if (m_cap == 0) {
        m_cap = 1;
    }
    m_cap *= 2;
    int* new_data = new int[m_cap];
    std::memcpy(new_data, m_data, m_size * sizeof(int)) {}
    delete[] m_data;
    m_data = new_data;
}

int vector::GetSize() const {
    return m_size;
}

vector::iterator::iterator(int* m_data) : m_data(m_data) {};

const int& vector::iterator::operator->() const {
    return &m_data;
};

const int& vector::iterator::operator*() const {

};

int& vector::iterator::operator*() {

};

vector::iterator& vector::iterator::operator++() {

};

vector::iterator vector::iterator::operator++(int) {

};

vector::iterator& vector::iterator::operator--() {

};

vector::iterator vector::iterator::operator--(int) {

};

bool vector::iterator::operator==(const iterator& rhs) const {

};
bool vector::iterator::operator!=(const iterator& rhs) const {

};
bool vector::iterator::operator<(const iterator& rhs) const {

};

vector::iterator vector::begin() {

}; 

vector::iterator vector::end() {

};  
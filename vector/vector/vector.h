#pragma once
#include <cstring>

template <typename T>
class vector
{
public:
    vector() {
        m_cap = 0;
        m_size = 0;
        m_data = 0;
    }

    class iterator final
    {
    public:
        iterator(T* data) {
            i_data = data;
        }
        //const T& operator->() const;
        //T& operator->();

        const T& operator*() const;
        T& operator*();

        iterator& operator++();
        iterator operator++(int);

        iterator& operator--();
        iterator operator--(int);

        bool operator==(const iterator& rhs) const;
        bool operator!=(const iterator& rhs) const;
        bool operator<(const iterator& rhs) const;
    private:
        T* i_data;
    };

    iterator begin() {
        T* b = m_data[0];
        return iterator(b);
    }

    iterator end() {
        return iterator(nullptr);
    }

    int GetSize() const {
        return m_size;
    }

    void PushBack(T value) {
        if (m_size == m_cap) {
            resize();
        }
        m_data[m_size] = value;
        m_size++;
    }

    void PopBack() {
        m_size--;
    }

    T& operator [] (int index) {
        return m_data[index];
    }

private:
    void resize() {
        if (m_cap == 0) {
            m_cap = 1;
        }
        m_cap *= 2;
        int* new_data = new T[m_cap];
        std::memcpy(new_data, m_data, m_size * sizeof(T)) {}
        delete[] m_data;
        m_data = new_data;
    }
    T* m_data;
    int m_size;
    int m_cap;
};


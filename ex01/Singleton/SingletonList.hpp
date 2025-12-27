#pragma once

#include <list>

template <typename T>
class SingletonList
{
private:
	std::list<T *> _objects;

private:
	SingletonList() {}
	~SingletonList() {}
	SingletonList(const SingletonList &) = delete;
	SingletonList(SingletonList &&) = delete;
	SingletonList &operator=(const SingletonList &) = delete;

public:
	static SingletonList<T> &getInstance()
	{
		thread_local SingletonList<T> instance;
		return instance;
	}

	void add(T &obj)
	{
		_objects.push_back(&obj);
	}

	const std::list<T *> &getAll() const
	{
		return _objects;
	}
};

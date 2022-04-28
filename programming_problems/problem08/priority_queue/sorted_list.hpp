
#ifndef _SORTED_LIST_HPP_
#define _SORTED_LIST_HPP_

#include "abstract_sorted_list.hpp"

// T is any orderable type
// L must conform to the AbstractList Interface
template <typename T, typename L>
class SortedList: public AbstractSortedList<T>
{
public:

  // constructor
  SortedList();

  // copy constructor
  SortedList(const SortedList & x);

  // copy assignment
  SortedList& operator=(const SortedList& x);

  // destructor
  ~SortedList();

  // determine if a list is empty
  bool isEmpty() const noexcept;

  // return current lenght of the list
  std::size_t getLength() const noexcept;

  // insert item at ordered position in the list
  void insert(const T& item);

  // remove first occurance of item from the list
  void remove(const T& item);

  // remove item at position in the list using 0-based indexing
  void removeAt(std::size_t position);

  // remove all items from the list
  void clear();

  // get a copy of the item at position using 0-based indexing
  T getEntry(std::size_t position) const;

  // get the position of the first occurance of item
  long int getPosition(const T& newValue);

private:

  L plist; // private list
  
};

#include "sorted_list.tpp"

#endif // _SORTED_LIST_HPP_

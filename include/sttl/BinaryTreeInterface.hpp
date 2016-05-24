// TODO
// Documentation
// XXX

#ifndef STTL_BINARY_TREE_INTERFACE_HPP
#define STTL_BINARY_TREE_INTERFACE_HPP

#include "Macros.hpp"

#include <vector>

namespace sttl {

template< typename T >
class BinaryTreeInterface
{

    DECLARE_INTERFACE(BinaryTreeInterface)

  public:
    virtual void insert(T) = 0
    virtual void remove(T) = 0

    virtual bool contains(T x) const noexcept
    {
        for (const auto& a : tree_)
        {
            if (a == x)
                return true;
        }
        return false;
    }

    bool isEmpty() const noexcept
    {
        return tree_.empty();
    }

    void makeEmpty() noexcept
    {
        tree_.clear();
    }

  private:
    std::vector<T> tree_;
};

}   // namespace sttl

#endif  // STTL_BINARY_TREE_INTERFACE_HPP

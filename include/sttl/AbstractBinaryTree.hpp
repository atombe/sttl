// Copyright (c) 2016, Adam Byerly
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// 1.  Redistributions of source code must retain the above copyright
//     notice, this list of conditions and the following disclaimer.
//
// 2.  Redistributions in binary form must reproduce the above copyright
//     notice, this list of conditions and the following disclaimer in the
//     documentation and/or other materials provided with the distribution.
//
// 3.  All advertising materials mentioning features or use of this
//     software must display the following acknowledgement:
//     This product includes software developed by Adam Byerly.
//
// 4.  Neither the name of the sttl nor the names of its contributors
//     may be used to endorse or promote products derived from
//     this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> BE LIABLE FOR ANY
// DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
// ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

/**
 *  @file       AbstractBinaryTree.hpp
 *  @author     Adam Byerly (atombe)
 *  @date       25 May 2016
 *  @version    1.0
 *
 *  @brief      TODO
 *
 *  @section DESCRIPTION
 *
 *  TODO
 *
 * @bug         No known bugs at this time.
 */

#ifndef STTL_ABSTRACT_BINARY_TREE_HPP
#define STTL_ABSTRACT_BINARY_TREE_HPP

#include <iterator>
#include <memory>
#include <sttl/BinaryNode.hpp>
#include <sttl/TreeInterface.hpp>

namespace sttl {

/**
 *  @class      AbstractBinaryTree
 *
 *  @brief      TODO
 *
 */
template<
    class T
> class AbstractBinaryTree : public TreeInterface<T>
{
  public:
    //-----------------------------------------
    // Typedefs
    //-----------------------------------------
    typedef TreeInterface<T>::value_type        value_type;
    typedef TreeInterface<T>::size_type         size_type;
    typedef TreeInterface<T>::difference_type   difference_type;
    typedef value_type&                         reference;
    typedef const value_type&                   const_reference;
    typedef std::shared_ptr<value_type>         pointer;
    typedef const std::shared_ptr<value_type>   const_pointer;

    //-----------------------------------------
    // Iterators
    //-----------------------------------------
    friend class AbstractBidirectionalIterator
    {
      public:
        //-----------------------------------------
        // AbstractBidirectionalIterators Iterators
        //-----------------------------------------
        typedef AbstractBidirectionalIterator           self_type;
        typedef std::bidirectional_iterator_tag         iterator_category;
        typedef AbstractBinaryTree::value_type          value_type;
        typedef AbstractBinaryTree::difference_type     difference_type;
        typedef AbstractBinaryTree::pointer             pointer;
        typedef AbstractBinaryTree::reference           reference;

        //---------------------------------------------------------------------
        // AbstractBidirectionalIterators Constructors, Assignments, Destructor
        //---------------------------------------------------------------------
        /**
         *  @brief  Creates an
         *
         *  TODO Full description
         *
         *  @param  TODO
         */
        AbstractBidirectionalIterator( std::shared_ptr<value_type> ptr = nullptr ) noexcept
            : ptr_{ptr} { }

        /**
         *  @brief  TODO
         *
         *  TODO Full description
         *
         *  @param  TODO
         */
        AbstractBidirectionalIterator( const self_type& other ) noexcept = default;

        /**
         *  @brief  TODO
         *
         *  TODO Full description
         *
         */
        ~AbstractBidirectionalIterator() noexcept = default;

        /**
         *  @brief  TODO
         *
         *  TODO Full description
         *
         *  @param  TODO
         *  @return TODO
         */
        self_type& operator=( const self_type& rhs ) noexcept = default;

        /**
         *  @brief  TODO
         *
         *  TODO Full description
         *
         *  @param  TODO
         *  @return TODO
         */
        self_type& operator=( self_type&& rhs ) noexcept = default;

        //---------------------------------------
        // AbstractBidirectionalIterators Methods
        //---------------------------------------
        /**
         *  @brief  TODO
         *
         *  TODO Full description
         *
         *  @return TODO
         */
        virtual self_type& operator++() noexcept = 0;

        /**
         *  @brief  TODO
         *
         *  TODO Full description
         *
         *  @param  TODO
         *  @return TODO
         */
        virtual self_type operator++(int) noexcept = 0;

        /**
         *  @brief  TODO
         *
         *  TODO Full description
         *
         *  @return TODO
         */
        virtual self_type& operator--() noexcept = 0;

        /**
         *  @brief  TODO
         *
         *  TODO Full description
         *
         *  @param  TODO
         *  @return TODO
         */
        virtual self_type operator--(int) noexcept = 0;

        /**
         *  @brief  TODO
         *
         *  TODO Full description
         *
         *  @return TODO
         */
        reference operator*() noexcept final
        {
            return *ptr_;
        }

        /**
         *  @brief  TODO
         *
         *  TODO Full description
         *
         *  @return TODO
         */
        pointer operator->() noexcept final
        {
            return ptr_;
        }

        /**
         *  @brief  TODO
         *
         *  TODO Full description
         *
         *  @param  TODO
         *  @return TODO
         */
        bool operator==( const self_type& rhs) noexcept final
        {
            return ( ptr_ == rhs.ptr_ );
        }

        /**
         *  @brief  TODO
         *
         *  TODO Full description
         *
         *  @param  TODO
         *  @return TODO
         */
        bool operator!=( const self_type& rhs) noexcept final
        {
            return ( ptr_ != rhs.ptr_ );
        }

      private:
        pointer ptr_;
    };

    friend class AbstractConstBidirectionalIterator
    {
      public:
        //--------------------------------------------
        // AbstractConstBidirectionalIterator Typedefs
        //--------------------------------------------
        typedef AbstractConstBidirectionalIterator      self_type;
        typedef std::bidirectional_iterator_tag         iterator_category;
        typedef AbstractBinaryTree::value_type          value_type;
        typedef AbstractBinaryTree::difference_type     difference_type;
        typedef AbstractBinaryTree::pointer             pointer;
        typedef AbstractBinaryTree::const_pointer       const_pointer;
        typedef AbstractBinaryTree::reference           reference;
        typedef AbstractBinaryTree::const_reference     const_reference;

        //--------------------------------------------------------------------------
        // AbstractConstBidirectionalIterator Constructors, Assignments, Destructors
        //--------------------------------------------------------------------------
        /** 
         * @brief   TODO
         *
         * TODO
         *
         * @param   TODO
         */
        AbstractConstBidirectionalIterator( std::shared_ptr<value_type> ptr = nullptr ) noexcept
            : ptr_{ptr} { }

        /** 
         * @brief   TODO
         *
         * TODO
         *
         * @param   TODO
         */
        AbstractConstBidirectionalIterator( const self_type& other ) noexcept = default;

        /** 
         * @brief   TODO
         *
         * TODO
         *
         * @param   TODO
         */
        AbstractConstBidirectionalIterator( self_type&& other ) noexcept = default;

        /** 
         * @brief   TODO
         *
         * TODO
         *
         */
        ~AbstractConstBidirectionalIterator() noexcept = default;

        /** 
         * @brief   TODO
         *
         * TODO
         *
         * @param   TODO
         * @return  TODO
         */
        self_type& operator=( const self_type& rhs ) noexcept = default;

        /** 
         * @brief   TODO
         *
         * TODO
         *
         * @param   TODO
         * @return  TODO
         */
        self_type& operator=( self_type&& rhs ) noexcept = default;

        //-------------------------------------------
        // AbstractConstBidirectionalIterator Methods
        //-------------------------------------------
        /** 
         * @brief   TODO
         *
         * TODO full description
         *
         * @return  TODO
         */
        virtual self_type& operator++() noexcept = 0;

        /** 
         * @brief   TODO
         *
         * TODO full description
         *
         * @param   TODO
         * @return  TODO
         */
        virtual self_type operator++(int) noexcept = 0;

        /** 
         * @brief   TODO
         *
         * TODO full description
         *
         * @return  TODO
         */
        virtual self_type& operator--() noexcept = 0;

        /** 
         * @brief   TODO
         *
         * TODO full description
         *
         * @param   TODO
         * @return  TODO
         */
        virtual self_type operator--(int) noexcept = 0;

        /** 
         * @brief   TODO
         *
         * TODO full description
         *
         * @return  TODO
         */
        const_reference operator*() noexcept final
        {
            return *ptr_;
        }

        /** 
         * @brief   TODO
         *
         * TODO full description
         *
         * @return  TODO
         */
        const_pointer operator->() noexcept final
        {
            return ptr_;
        }

        /** 
         * @brief   TODO
         *
         * TODO full description
         *
         * @param   TODO
         * @return  TODO
         */
        bool operator==( const self_type& rhs) noexcept final
        {
            return ( ptr_ == rhs.ptr_ );
        }

        /** 
         * @brief   TODO
         *
         * TODO Full description
         *
         * @param   TODO
         * @return  TODO
         */
        bool operator!=( const self_type& rhs) noexcept final
        {
            return ( ptr_ != rhs.ptr_ );
        }

      private:
        pointer ptr_;
    }

    //------------------------------------------------------------
    // AbstractBinaryTree Constructors, Assignment, and Destructor
    //------------------------------------------------------------
    /**
     *  @brief  TODO
     *
     *  TODO Full description
     *
     */
    virtual AbstractBinaryTree( pointer root = nullptr ) noexcept
        : root_{nullptr}, size_{root_ == nullptr ? 0 : 1}, height_{root_ == nullptr ? 0 : 1}
    { }

    /**
     *  @brief  TODO
     *
     *  TODO Full description
     *
     */
    virtual AbstractBinaryTree( const AbstractBinaryTree<value_type>& other ) noexcept
        : root_{other.root_}, size_{other.size_}, height_{other.height_}
    { }

    /**
     *  @brief  TODO
     *
     *  TODO Full description
     *
     */
    virtual AbstractBinaryTree( AbstractBinaryTree<value_type>&& other ) noexcept
        : root_{std::move(other.root_)}, size_{std::move(other.size_)}, height_{std::move(other.height_)}
    { }

    /**
     *  @brief  TODO
     *
     *  TODO Full description
     *
     */
    virtual ~AbstractBinaryTree() noexcept
    {
        makeEmpty();
    }

    /**
     *  @brief  TODO
     *
     *  TODO Full description
     *
     */
    virtual AbstractBinaryTree<value_type> operator=( const AbstractBinaryTree<value_type>& rhs ) noexcept
    {
        if (*this != rhs)
        {
            makeEmpty();
            root_ = rhs.root_;
            size_ = rhs.size_;
            height_ = rhs.height_;
        }

        return *this;
    }

    /**
     *  @brief  TODO
     *
     *  TODO Full description
     *
     */
    virtual AbstractBinaryTree<value_type> operator=( AbstractBinaryTree<value_type>&& rhs ) noexcept
    {
        if (*this != rhs)
        {
            makeEmpty();
            root_ = std::move(rhs.root_);
            size_ = std::move(rhs.size_);
            height_ = std::move(rhs.height_);
        }

        return *this;
    }

    //-----------------------------------------
    // TreeInterface Methods
    //-----------------------------------------
    /**
     *  @brief  TODO
     *
     *  TODO Full description
     *
     *  @param  TODO
     */
    virtual void insert(value_type x) override = 0;

    /**
     *  @brief  TODO
     *
     *  TODO Full description
     *
     *  @param  TODO
     */
    virtual void remove(value_type x) noexcept override = 0;

    /**
     *  @brief  TODO
     *
     *  TODO Full description
     *
     *  @param  TODO
     *  @return TODO
     */
    virtual bool contains(value_type x) noexcept override = 0;

    /**
     *  @brief  TODO
     *
     *  TODO Full description
     *
     *  @param  TODO
     *  @return TODO
     */
    bool isEmpty() const noexcept override final
    {
        bool empty;

        if ( root_ == nullptr)
        {
            empty = true;
        }
        else
        {
            empty = false;
        }

        return empty;
    }

    /**
     *  @brief  TODO
     *
     *  TODO Full description
     *
     */
    void makeEmpty() noexcept override final
    {
        makeEmpty( root_ );
    }

    /**
     *  @brief  TODO
     *
     *  TODO Full description
     *
     *  @return TODO
     */
    unsigned getNumberOfNodes() const noexcept override final
    {
        return size_;
    }

    /**
     *  @brief  TODO
     *
     *  TODO Full description
     *
     *  @return TODO
     */
    unsigned getHeight() const noexcept override final
    {
        return height_;
    }

  protected:
    //-----------------------------------------
    // Internal bootstraps for recursive calls
    //-----------------------------------------
    /**
     *  @brief  TODO
     *
     *  TODO Full description
     *
     *  @param  TODO
     */
    void makeEmpty( std::shared_ptr<BinaryNode<T>> node ) noexcept
    {
        if (node != nullptr)
        {
            makeEmpty( node->left_ );
            makeEmpty( node->right_ );
            node = nullptr;
        }
    }

  private:
    //-----------------------------------------
    // Data Members
    //-----------------------------------------
    std::shared_ptr<BinaryNode<T>> root_;
    unsigned size_;
    unsigned height_;
};

}   // namespace sttl

#endif  // STTL_TREE_INTERFACE_HPP

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
 *  @file       HeapInterface.hpp
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

#ifndef STTL_HEAP_INTERFACE_HPP
#define STTL_HEAP_INTERFACE_HPP

#include <sttl/TreeInterface.hpp>

namespace sttl {

/**
 *  @class      HeapInterface
 *
 *  @brief      TODO
 *
 */
template<
    class T
> class HeapInterface : public TreeInterface<T>
{
  public:
    //-----------------------------------------
    // Typedefs
    //-----------------------------------------
    typedef TreeInterface::value_type       value_type;
    typedef TreeInterface::size_type        size_type;
    typedef TreeInterface::difference_type  difference_type;
    typedef value_type&                     reference;
    typedef const value_type&               const_reference;

    //-----------------------------------------
    // HeapInterface Methods
    //-----------------------------------------
    /** 
     * @brief   TODO
     *
     * TODO     Full description
     */
    virtual ~HeapInterface() noexcept = 0;


    /**
     *  @brief  TODO
     *
     *  TODO Full description
     *
     *  @param  TODO
     */
    virtual const_reference findMin() const noexcept = 0;

    /**
     *  @brief  TODO
     *
     *  TODO Full description
     *
     *  @param  TODO
     */
    virtual void deleteMin() noexcept = 0;

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
     *  @return TODO
     */
    virtual bool isEmpty() const noexcept override = 0;

    /**
     *  @brief  TODO
     *
     *  TODO Full description
     *
     */
    virtual void makeEmpty() noexcept override = 0;

    /**
     *  @brief  TODO
     *
     *  TODO Full description
     *
     *  @return TODO
     */
    virtual size_type getNumberOfNodes() const noexcept override = 0;

    /**
     *  @brief  TODO
     *
     *  TODO Full description
     *
     *  @return TODO
     */
    virtual size_type getHeight() const noexcept = 0;
};

}   // namespace sttl

#endif  // STTL_TREE_INTERFACE_HPP

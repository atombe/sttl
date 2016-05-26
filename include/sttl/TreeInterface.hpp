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
 *  @file       TreeInterface.hpp
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

#ifndef STTL_TREE_INTERFACE_HPP
#define STTL_TREE_INTERFACE_HPP

#include <cstddef>

namespace sttl {

/**
 *  @class      TreeInterface
 *
 *  @brief      TODO
 *
 */
template<
    class T
> class TreeInterface
{
  public:
    //-----------------------------------------
    // Typedefs
    //-----------------------------------------
    typedef T               value_type;
    typedef std::size_t     size_type;
    typedef std:ptrdiff_t   difference_type;

    /** 
     * @brief   TODO
     *
     * TODO     Full description
     */
    virtual ~TreeInterface() noexcept = 0;

    /**
     *  @brief  TODO
     *
     *  TODO Full description
     *
     *  @param  TODO
     */
    virtual void insert(value_type x) = 0;

    /**
     *  @brief  TODO
     *
     *  TODO Full description
     *
     *  @param  TODO
     */
    virtual void remove(value_type x) noexcept = 0;

    /**
     *  @brief  TODO
     *
     *  TODO Full description
     *
     *  @param  TODO
     *  @return TODO
     */
    virtual bool contains(value_type x) noexcept = 0;

    /**
     *  @brief  TODO
     *
     *  TODO Full description
     *
     *  @param  TODO
     *  @return TODO
     */
    virtual bool isEmpty() const noexcept = 0;

    /**
     *  @brief  TODO
     *
     *  TODO Full description
     *
     */
    virtual void makeEmpty() noexcept = 0;

    /**
     *  @brief  TODO
     *
     *  TODO Full description
     *
     *  @return TODO
     */
    virtual size_type getNumberOfNodes() const noexcept = 0;

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

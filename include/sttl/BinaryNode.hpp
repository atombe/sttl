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
 *  @file       BinaryNode.hpp
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

#ifndef STTL_BINARY_NODE_HPP
#define STTL_BINARY_NODE_HPP

#include <cstddef>
#include <memory>

namespace sttl {
namespace internal {

/**
 *  @class      BinaryNode
 *
 *  @brief      TODO
 *
 */
template<
    class T
> class BinaryNode
{
  public:
    typedef T                       value_type;
    typedef BinaryNode<value_type>  self_type;
    typedef std::size_t             size_type;

    value_type data_;
    size_type occurrence_;
    std::shared_ptr<self_type> left_;
    std::shared_ptr<self_type> right_
};

}   // namespace internal
}   // namespace sttl

#endif  // STTL_TREE_NODE_HPP

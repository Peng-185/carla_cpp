// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file NavSatStatus.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "NavSatStatus.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define sensor_msgs_msg_NavSatStatus_max_cdr_typesize 4ULL;
#define sensor_msgs_msg_NavSatStatus_max_key_cdr_typesize 0ULL;

sensor_msgs::msg::NavSatStatus::NavSatStatus()
{
    // octet m_status
    m_status = 0;
    // unsigned short m_service
    m_service = 0;
}

sensor_msgs::msg::NavSatStatus::~NavSatStatus()
{
}

sensor_msgs::msg::NavSatStatus::NavSatStatus(
        const NavSatStatus& x)
{
    // 将传入对象 x 的 m_status 成员复制到当前对象的 m_status 成员中
    m_status = x.m_status;

    // 将传入对象 x 的 m_service 成员复制到当前对象的 m_service 成员中
    m_service = x.m_service;
}

// 定义了NavSatStatus类的移动构造函数，它接收一个右值引用类型的NavSatStatus对象x，并且声明该函数不会抛出异常（noexcept）
// 移动构造函数用于使用已有的对象资源来初始化新创建的对象，避免不必要的拷贝操作，提高效率
sensor_msgs::msg::NavSatStatus::NavSatStatus(
        NavSatStatus&& x) noexcept
{
    m_status = x.m_status; // 将传入的右值引用对象x的m_status成员变量的值赋给当前正在构造的对象的m_status成员变量
    m_service = x.m_service;// 将传入的右值引用对象x的m_service成员变量的值赋给当前正在构造的对象的m_service成员变量
}
// 定义了NavSatStatus类的拷贝赋值运算符函数，它接收一个常引用类型的NavSatStatus对象x
// 用于将一个NavSatStatus对象的值复制到另一个已存在的NavSatStatus对象中
sensor_msgs::msg::NavSatStatus& sensor_msgs::msg::NavSatStatus::operator =(
        const NavSatStatus& x)
{
    m_status = x.m_status;// 将传入的对象x的m_status成员变量的值赋给当前对象的m_status成员变量
    m_service = x.m_service;// 将传入的对象x的m_service成员变量的值赋给当前对象的m_service成员变量
// 返回当前对象的引用，以支持连续赋值操作，例如 a = b = c这种形式
    return *this;
}
// 定义了NavSatStatus类的移动赋值运算符函数，它接收一个右值引用类型的NavSatStatus对象x，并且声明该函数不会抛出异常（noexcept）
// 移动赋值运算符用于将右值对象的资源转移到当前对象，避免不必要的拷贝，常用于优化对象赋值操作时的资源管理
sensor_msgs::msg::NavSatStatus& sensor_msgs::msg::NavSatStatus::operator =(
        NavSatStatus&& x) noexcept
{
    m_status = x.m_status;// 将传入的右值引用对象x的m_status成员变量的值赋给当前对象的m_status成员变量
    m_service = x.m_service;// 将传入的右值引用对象x的m_service成员变量的值赋给当前对象的m_service成员变量
// 返回当前对象的引用，以支持连续赋值操作
    return *this;
}
// 定义了NavSatStatus类的相等比较运算符函数，它接收一个常引用类型的NavSatStatus对象x
// 用于比较两个NavSatStatus对象是否相等，返回一个布尔值表示比较结果
bool sensor_msgs::msg::NavSatStatus::operator ==(
        const NavSatStatus& x) const
{
    return (m_status == x.m_status && m_service == x.m_service);// 通过比较两个对象的m_status和m_service成员变量是否都相等来判断两个NavSatStatus对象整体是否相等
}
// 定义了NavSatStatus类的不等比较运算符函数，它接收一个常引用类型的NavSatStatus对象x
// 利用相等比较运算符的结果取反来判断两个NavSatStatus对象是否不相等，返回一个布尔值表示比较结果
bool sensor_msgs::msg::NavSatStatus::operator !=(
        const NavSatStatus& x) const
{
    return !(*this == x);
}
// 定义了一个函数用于获取NavSatStatus对象在CDR（Common Data Representation，一种数据序列化格式）序列化时的最大可能大小
// 参数current_alignment表示当前的对齐字节数，不过在这里先将其转换为void类型，表示当前函数暂不使用这个参数
size_t sensor_msgs::msg::NavSatStatus::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return sensor_msgs_msg_NavSatStatus_max_cdr_typesize;// 返回NavSatStatus对象在CDR序列化时的固定最大类型大小，具体值应该由sensor_msgs_msg_NavSatStatus_max_cdr_typesize表示（可能是预定义的常量等）
}
// 定义了一个函数用于获取给定的NavSatStatus对象在CDR序列化时实际占用的大小
// 参数data表示要进行序列化大小计算的NavSatStatus对象，current_alignment表示当前的对齐字节数
size_t sensor_msgs::msg::NavSatStatus::getCdrSerializedSize(
        const sensor_msgs::msg::NavSatStatus& data,
        size_t current_alignment)
{
    (void)data; // 将传入的data参数转换为void类型，表示暂时不使用它（可能后续会修改此处逻辑来真正使用它进行计算等）
    // 记录初始的对齐字节数，后续用于计算实际增加的序列化大小
    size_t initial_alignment = current_alignment;
 // 先增加1字节（可能是某种头部或标识信息等），然后根据当前对齐字节数对增加后的位置进行对齐调整（保证符合CDR格式要求的对齐方式）
    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
 // 再增加2字节（可能是另一部分数据等），同样进行对齐调整
    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);
// 返回计算出的序列化后相对于初始对齐位置增加的字节数，即实际序列化占用的大小
    return current_alignment - initial_alignment;
}
// 定义了一个函数用于将NavSatStatus对象进行CDR序列化，将对象的数据按照CDR格式写入到给定的Cdr对象scdr中
void sensor_msgs::msg::NavSatStatus::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{
    scdr << m_status;// 使用CDR的输出流操作符<<将当前对象的m_status成员变量的值写入到Cdr对象scdr中，按照CDR格式进行序列化
    scdr << m_service;// 使用CDR的输出流操作符<<将当前对象的m_service成员变量的值写入到Cdr对象scdr中，按照CDR格式进行序列化
}
// 定义了一个函数用于将从CDR格式数据中反序列化出NavSatStatus对象，从给定的Cdr对象dcdr中读取数据并赋值给当前对象的成员变量
void sensor_msgs::msg::NavSatStatus::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{
    dcdr >> m_status;// 使用CDR的输入流操作符>>从Cdr对象dcdr中读取数据，并赋值给当前对象的m_status成员变量，完成反序列化这部分数据的操作
    dcdr >> m_service;    // 使用CDR的输入流操作符>>从Cdr对象dcdr中读取数据，并赋值给当前对象的m_service成员变量，完成反序列化这部分数据的操作
}

/*!
 * @brief This function sets a value in member status
 * @param _status New value for member status
 */
void sensor_msgs::msg::NavSatStatus::status(
        uint8_t _status)
{
    m_status = _status;
}

/*!
 * @brief This function returns the value of member status
 * @return Value of member status
 */
uint8_t sensor_msgs::msg::NavSatStatus::status() const
{
    return m_status;
}

/*!
 * @brief This function returns a reference to member status
 * @return Reference to member status
 */
uint8_t& sensor_msgs::msg::NavSatStatus::status()
{
    return m_status;
}

/*!
 * @brief This function sets a value in member service
 * @param _service New value for member service
 */
void sensor_msgs::msg::NavSatStatus::service(
        uint16_t _service)
{
    m_service = _service;
}

/*!
 * @brief This function returns the value of member service
 * @return Value of member service
 */
uint16_t sensor_msgs::msg::NavSatStatus::service() const
{
    return m_service;
}

/*!
 * @brief This function returns a reference to member service
 * @return Reference to member service
 */
// 定义了一个名为service的成员函数，它返回一个对uint16_t类型的成员变量m_service的引用
// 通过这个函数可以方便地获取和修改NavSatStatus类中的m_service成员变量
uint16_t& sensor_msgs::msg::NavSatStatus::service()
{
    return m_service;// 直接返回NavSatStatus类中的成员变量m_service的引用，使得外部可以通过这个函数间接操作该成员变量
}
// 定义了一个函数用于获取NavSatStatus对象的键（Key）在CDR（Common Data Representation，一种数据序列化格式）序列化时的最大可能大小
// 参数current_alignment表示当前的对齐字节数，不过在这里先将其转换为void类型，表示当前函数暂不使用这个参数
size_t sensor_msgs::msg::NavSatStatus::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return sensor_msgs_msg_NavSatStatus_max_key_cdr_typesize;// 返回NavSatStatus对象的键在CDR序列化时的固定最大类型大小，具体值应该由sensor_msgs_msg_NavSatStatus_max_key_cdr_typesize表示（可能是预定义的常量等）
}
// 定义了一个函数用于判断NavSatStatus对象的键（Key）是否已经被定义，返回一个布尔值来表示判断结果
bool sensor_msgs::msg::NavSatStatus::isKeyDefined()
{
    return false;// 这里直接返回false，表示当前默认情况下键（Key）是未被定义的，具体逻辑可能需要根据实际应用场景进行调整
}
// 定义了一个函数用于对NavSatStatus对象的键（Key）进行CDR序列化操作，将键相关的数据按照CDR格式写入到给定的Cdr对象scdr中
// 不过从当前代码来看，传入的scdr参数并没有实际被使用（被强制转换为void类型了），可能后续需要完善此处的序列化逻辑实现真正的数据写入
void sensor_msgs::msg::NavSatStatus::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

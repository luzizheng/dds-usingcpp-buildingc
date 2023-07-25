/*!
 * @file TypeIdentifierTypes.h
 * 此头文件包含 IDL 文件中描述类型的声明。
 *
 * 此文件由gen工具生成生成。
 */

#ifndef _TYPEIDENTIFIERTYPES_H_
#define _TYPEIDENTIFIERTYPES_H_

#include <fastrtps/types/TypesBase.h>
#include <fastrtps/types/TypeObjectHashId.h>
#include <stdint.h>
#include <array>
#include <string>
#include <vector>

namespace eprosima {
namespace fastcdr {
class Cdr;
}
}

namespace eprosima {

namespace fastdds {
namespace dds {
class TypeConsistencyEnforcementQosPolicy;
}
}

namespace fastrtps {
namespace types {


// Forward declaration
class TypeIdentifier;
class StringLTypeDefn;

/*!
 * @brief This class represents the structure StringSTypeDefn defined by the user in the IDL file.
 * @ingroup TYPEIDENTIFIERTYPES
 */
class StringSTypeDefn final
{
public:

    /*!
     * @brief Default constructor.
     */
    RTPS_DllAPI StringSTypeDefn();

    /*!
     * @brief Default destructor.
     */
    RTPS_DllAPI ~StringSTypeDefn();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object StringSTypeDefn that will be copied.
     */
    RTPS_DllAPI StringSTypeDefn(
            const StringSTypeDefn& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object StringSTypeDefn that will be copied.
     */
    RTPS_DllAPI StringSTypeDefn(
            StringSTypeDefn&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object StringSTypeDefn that will be copied.
     */
    RTPS_DllAPI StringSTypeDefn& operator=(
            const StringSTypeDefn& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object StringSTypeDefn that will be copied.
     */
    RTPS_DllAPI StringSTypeDefn& operator=(
            StringSTypeDefn&& x);

    /*!
     * @brief This function sets a value in member bound
     * @param _bound New value for member bound
     */
    RTPS_DllAPI inline void bound(
            SBound _bound)
    {
        m_bound = _bound;
    }

    /*!
     * @brief This function returns the value of member bound
     * @return Value of member bound
     */
    RTPS_DllAPI inline SBound bound() const
    {
        return m_bound;
    }

    /*!
     * @brief This function returns a reference to member bound
     * @return Reference to member bound
     */
    RTPS_DllAPI inline SBound& bound()
    {
        return m_bound;
    }

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    RTPS_DllAPI static size_t getCdrSerializedSize(
            const StringSTypeDefn& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    RTPS_DllAPI void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    RTPS_DllAPI void deserialize(
            eprosima::fastcdr::Cdr& cdr);

    RTPS_DllAPI bool consistent(
            const StringSTypeDefn& x,
            const fastdds::dds::TypeConsistencyEnforcementQosPolicy& consistency) const;

    RTPS_DllAPI bool consistent(
            const StringLTypeDefn& x,
            const fastdds::dds::TypeConsistencyEnforcementQosPolicy& consistency) const;

private:

    SBound m_bound;
};
/*!
 * @brief This class represents the structure StringLTypeDefn defined by the user in the IDL file.
 * @ingroup TYPEIDENTIFIERTYPES
 */
class StringLTypeDefn final
{
public:

    /*!
     * @brief Default constructor.
     */
    RTPS_DllAPI StringLTypeDefn();

    /*!
     * @brief Default destructor.
     */
    RTPS_DllAPI ~StringLTypeDefn();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object StringLTypeDefn that will be copied.
     */
    RTPS_DllAPI StringLTypeDefn(
            const StringLTypeDefn& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object StringLTypeDefn that will be copied.
     */
    RTPS_DllAPI StringLTypeDefn(
            StringLTypeDefn&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object StringLTypeDefn that will be copied.
     */
    RTPS_DllAPI StringLTypeDefn& operator=(
            const StringLTypeDefn& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object StringLTypeDefn that will be copied.
     */
    RTPS_DllAPI StringLTypeDefn& operator=(
            StringLTypeDefn&& x);

    /*!
     * @brief This function sets a value in member bound
     * @param _bound New value for member bound
     */
    RTPS_DllAPI inline void bound(
            LBound _bound)
    {
        m_bound = _bound;
    }

    /*!
     * @brief This function returns the value of member bound
     * @return Value of member bound
     */
    RTPS_DllAPI inline LBound bound() const
    {
        return m_bound;
    }

    /*!
     * @brief This function returns a reference to member bound
     * @return Reference to member bound
     */
    RTPS_DllAPI inline LBound& bound()
    {
        return m_bound;
    }

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    RTPS_DllAPI static size_t getCdrSerializedSize(
            const StringLTypeDefn& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    RTPS_DllAPI void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    RTPS_DllAPI void deserialize(
            eprosima::fastcdr::Cdr& cdr);

    RTPS_DllAPI bool consistent(
            const StringLTypeDefn& x,
            const fastdds::dds::TypeConsistencyEnforcementQosPolicy& consistency) const;

    RTPS_DllAPI bool consistent(
            const StringSTypeDefn& x,
            const fastdds::dds::TypeConsistencyEnforcementQosPolicy& consistency) const;

private:

    LBound m_bound;
};
/*!
 * @brief This class represents the structure PlainCollectionHeader defined by the user in the IDL file.
 * @ingroup TYPEIDENTIFIERTYPES
 */
class PlainCollectionHeader final
{
public:

    /*!
     * @brief Default constructor.
     */
    RTPS_DllAPI PlainCollectionHeader();

    /*!
     * @brief Default destructor.
     */
    RTPS_DllAPI ~PlainCollectionHeader();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object PlainCollectionHeader that will be copied.
     */
    RTPS_DllAPI PlainCollectionHeader(
            const PlainCollectionHeader& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object PlainCollectionHeader that will be copied.
     */
    RTPS_DllAPI PlainCollectionHeader(
            PlainCollectionHeader&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object PlainCollectionHeader that will be copied.
     */
    RTPS_DllAPI PlainCollectionHeader& operator=(
            const PlainCollectionHeader& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object PlainCollectionHeader that will be copied.
     */
    RTPS_DllAPI PlainCollectionHeader& operator=(
            PlainCollectionHeader&& x);

    /*!
     * @brief This function sets a value in member equiv_kind
     * @param _equiv_kind New value for member equiv_kind
     */
    RTPS_DllAPI inline void equiv_kind(
            EquivalenceKind _equiv_kind)
    {
        m_equiv_kind = _equiv_kind;
    }

    /*!
     * @brief This function returns the value of member equiv_kind
     * @return Value of member equiv_kind
     */
    RTPS_DllAPI inline EquivalenceKind equiv_kind() const
    {
        return m_equiv_kind;
    }

    /*!
     * @brief This function returns a reference to member equiv_kind
     * @return Reference to member equiv_kind
     */
    RTPS_DllAPI inline EquivalenceKind& equiv_kind()
    {
        return m_equiv_kind;
    }
    /*!
     * @brief This function sets a value in member element_flags
     * @param _element_flags New value for member element_flags
     */
    RTPS_DllAPI inline void element_flags(
            CollectionElementFlag _element_flags)
    {
        m_element_flags = _element_flags;
    }

    /*!
     * @brief This function returns the value of member element_flags
     * @return Value of member element_flags
     */
    RTPS_DllAPI inline CollectionElementFlag element_flags() const
    {
        return m_element_flags;
    }

    /*!
     * @brief This function returns a reference to member element_flags
     * @return Reference to member element_flags
     */
    RTPS_DllAPI inline CollectionElementFlag& element_flags()
    {
        return m_element_flags;
    }

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    RTPS_DllAPI static size_t getCdrSerializedSize(
            const PlainCollectionHeader& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    RTPS_DllAPI void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    RTPS_DllAPI void deserialize(
            eprosima::fastcdr::Cdr& cdr);

    RTPS_DllAPI bool consistent(
            const PlainCollectionHeader& x,
            const fastdds::dds::TypeConsistencyEnforcementQosPolicy& consistency) const;

private:

    EquivalenceKind m_equiv_kind;
    CollectionElementFlag m_element_flags;
};
/*!
 * @brief This class represents the structure PlainSequenceSElemDefn defined by the user in the IDL file.
 * @ingroup TYPEIDENTIFIERTYPES
 */
class PlainSequenceSElemDefn final
{
public:

    /*!
     * @brief Default constructor.
     */
    RTPS_DllAPI PlainSequenceSElemDefn();

    /*!
     * @brief Default destructor.
     */
    RTPS_DllAPI ~PlainSequenceSElemDefn();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object PlainSequenceSElemDefn that will be copied.
     */
    RTPS_DllAPI PlainSequenceSElemDefn(
            const PlainSequenceSElemDefn& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object PlainSequenceSElemDefn that will be copied.
     */
    RTPS_DllAPI PlainSequenceSElemDefn(
            PlainSequenceSElemDefn&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object PlainSequenceSElemDefn that will be copied.
     */
    RTPS_DllAPI PlainSequenceSElemDefn& operator=(
            const PlainSequenceSElemDefn& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object PlainSequenceSElemDefn that will be copied.
     */
    RTPS_DllAPI PlainSequenceSElemDefn& operator=(
            PlainSequenceSElemDefn&& x);

    /*!
     * @brief This function copies the value in member header
     * @param _header New value to be copied in member header
     */
    RTPS_DllAPI inline void header(
            const PlainCollectionHeader& _header)
    {
        m_header = _header;
    }

    /*!
     * @brief This function moves the value in member header
     * @param _header New value to be moved in member header
     */
    RTPS_DllAPI inline void header(
            PlainCollectionHeader&& _header)
    {
        m_header = std::move(_header);
    }

    /*!
     * @brief This function returns a constant reference to member header
     * @return Constant reference to member header
     */
    RTPS_DllAPI inline const PlainCollectionHeader& header() const
    {
        return m_header;
    }

    /*!
     * @brief This function returns a reference to member header
     * @return Reference to member header
     */
    RTPS_DllAPI inline PlainCollectionHeader& header()
    {
        return m_header;
    }
    /*!
     * @brief This function sets a value in member bound
     * @param _bound New value for member bound
     */
    RTPS_DllAPI inline void bound(
            SBound _bound)
    {
        m_bound = _bound;
    }

    /*!
     * @brief This function returns the value of member bound
     * @return Value of member bound
     */
    RTPS_DllAPI inline SBound bound() const
    {
        return m_bound;
    }

    /*!
     * @brief This function returns a reference to member bound
     * @return Reference to member bound
     */
    RTPS_DllAPI inline SBound& bound()
    {
        return m_bound;
    }
    /*!
     * @brief This function sets a value in member element_identifier
     * @param _element_identifier New value for member element_identifier
     */
    RTPS_DllAPI void element_identifier(
            const TypeIdentifier* _element_identifier);

    /*!
     * @brief This function returns the value of member element_identifier
     * @return Value of member element_identifier
     */
    RTPS_DllAPI inline const TypeIdentifier* element_identifier() const
    {
        return m_element_identifier;
    }

    /*!
     * @brief This function returns a reference to member element_identifier
     * @return Reference to member element_identifier
     */
    RTPS_DllAPI inline TypeIdentifier* element_identifier()
    {
        return m_element_identifier;
    }

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    RTPS_DllAPI static size_t getCdrSerializedSize(
            const PlainSequenceSElemDefn& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    RTPS_DllAPI void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    RTPS_DllAPI void deserialize(
            eprosima::fastcdr::Cdr& cdr);

    RTPS_DllAPI bool consistent(
            const PlainSequenceSElemDefn& x,
            const fastdds::dds::TypeConsistencyEnforcementQosPolicy& consistency) const;

private:

    PlainCollectionHeader m_header;
    SBound m_bound;
    TypeIdentifier* m_element_identifier;
};
/*!
 * @brief This class represents the structure PlainSequenceLElemDefn defined by the user in the IDL file.
 * @ingroup TYPEIDENTIFIERTYPES
 */
class PlainSequenceLElemDefn final
{
public:

    /*!
     * @brief Default constructor.
     */
    RTPS_DllAPI PlainSequenceLElemDefn();

    /*!
     * @brief Default destructor.
     */
    RTPS_DllAPI ~PlainSequenceLElemDefn();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object PlainSequenceLElemDefn that will be copied.
     */
    RTPS_DllAPI PlainSequenceLElemDefn(
            const PlainSequenceLElemDefn& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object PlainSequenceLElemDefn that will be copied.
     */
    RTPS_DllAPI PlainSequenceLElemDefn(
            PlainSequenceLElemDefn&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object PlainSequenceLElemDefn that will be copied.
     */
    RTPS_DllAPI PlainSequenceLElemDefn& operator=(
            const PlainSequenceLElemDefn& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object PlainSequenceLElemDefn that will be copied.
     */
    RTPS_DllAPI PlainSequenceLElemDefn& operator=(
            PlainSequenceLElemDefn&& x);

    /*!
     * @brief This function copies the value in member header
     * @param _header New value to be copied in member header
     */
    RTPS_DllAPI inline void header(
            const PlainCollectionHeader& _header)
    {
        m_header = _header;
    }

    /*!
     * @brief This function moves the value in member header
     * @param _header New value to be moved in member header
     */
    RTPS_DllAPI inline void header(
            PlainCollectionHeader&& _header)
    {
        m_header = std::move(_header);
    }

    /*!
     * @brief This function returns a constant reference to member header
     * @return Constant reference to member header
     */
    RTPS_DllAPI inline const PlainCollectionHeader& header() const
    {
        return m_header;
    }

    /*!
     * @brief This function returns a reference to member header
     * @return Reference to member header
     */
    RTPS_DllAPI inline PlainCollectionHeader& header()
    {
        return m_header;
    }
    /*!
     * @brief This function sets a value in member bound
     * @param _bound New value for member bound
     */
    RTPS_DllAPI inline void bound(
            LBound _bound)
    {
        m_bound = _bound;
    }

    /*!
     * @brief This function returns the value of member bound
     * @return Value of member bound
     */
    RTPS_DllAPI inline LBound bound() const
    {
        return m_bound;
    }

    /*!
     * @brief This function returns a reference to member bound
     * @return Reference to member bound
     */
    RTPS_DllAPI inline LBound& bound()
    {
        return m_bound;
    }
    /*!
     * @brief This function sets a value in member element_identifier
     * @param _element_identifier New value for member element_identifier
     */
    RTPS_DllAPI void element_identifier(
            const TypeIdentifier* _element_identifier);

    /*!
     * @brief This function returns the value of member element_identifier
     * @return Value of member element_identifier
     */
    RTPS_DllAPI inline const TypeIdentifier* element_identifier() const
    {
        return m_element_identifier;
    }

    /*!
     * @brief This function returns a reference to member element_identifier
     * @return Reference to member element_identifier
     */
    RTPS_DllAPI inline TypeIdentifier* element_identifier()
    {
        return m_element_identifier;
    }

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    RTPS_DllAPI static size_t getCdrSerializedSize(
            const PlainSequenceLElemDefn& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    RTPS_DllAPI void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    RTPS_DllAPI void deserialize(
            eprosima::fastcdr::Cdr& cdr);

    RTPS_DllAPI bool consistent(
            const PlainSequenceLElemDefn& x,
            const fastdds::dds::TypeConsistencyEnforcementQosPolicy& consistency) const;

private:

    PlainCollectionHeader m_header;
    LBound m_bound;
    TypeIdentifier* m_element_identifier;
};
/*!
 * @brief This class represents the structure PlainArraySElemDefn defined by the user in the IDL file.
 * @ingroup TYPEIDENTIFIERTYPES
 */
class PlainArraySElemDefn final
{
public:

    /*!
     * @brief Default constructor.
     */
    RTPS_DllAPI PlainArraySElemDefn();

    /*!
     * @brief Default destructor.
     */
    RTPS_DllAPI ~PlainArraySElemDefn();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object PlainArraySElemDefn that will be copied.
     */
    RTPS_DllAPI PlainArraySElemDefn(
            const PlainArraySElemDefn& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object PlainArraySElemDefn that will be copied.
     */
    RTPS_DllAPI PlainArraySElemDefn(
            PlainArraySElemDefn&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object PlainArraySElemDefn that will be copied.
     */
    RTPS_DllAPI PlainArraySElemDefn& operator=(
            const PlainArraySElemDefn& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object PlainArraySElemDefn that will be copied.
     */
    RTPS_DllAPI PlainArraySElemDefn& operator=(
            PlainArraySElemDefn&& x);

    /*!
     * @brief This function copies the value in member header
     * @param _header New value to be copied in member header
     */
    RTPS_DllAPI inline void header(
            const PlainCollectionHeader& _header)
    {
        m_header = _header;
    }

    /*!
     * @brief This function moves the value in member header
     * @param _header New value to be moved in member header
     */
    RTPS_DllAPI inline void header(
            PlainCollectionHeader&& _header)
    {
        m_header = std::move(_header);
    }

    /*!
     * @brief This function returns a constant reference to member header
     * @return Constant reference to member header
     */
    RTPS_DllAPI inline const PlainCollectionHeader& header() const
    {
        return m_header;
    }

    /*!
     * @brief This function returns a reference to member header
     * @return Reference to member header
     */
    RTPS_DllAPI inline PlainCollectionHeader& header()
    {
        return m_header;
    }
    /*!
     * @brief This function copies the value in member array_bound_seq
     * @param _array_bound_seq New value to be copied in member array_bound_seq
     */
    RTPS_DllAPI inline void array_bound_seq(
            const SBoundSeq& _array_bound_seq)
    {
        m_array_bound_seq = _array_bound_seq;
    }

    /*!
     * @brief This function moves the value in member array_bound_seq
     * @param _array_bound_seq New value to be moved in member array_bound_seq
     */
    RTPS_DllAPI inline void array_bound_seq(
            SBoundSeq&& _array_bound_seq)
    {
        m_array_bound_seq = std::move(_array_bound_seq);
    }

    /*!
     * @brief This function returns a constant reference to member array_bound_seq
     * @return Constant reference to member array_bound_seq
     */
    RTPS_DllAPI inline const SBoundSeq& array_bound_seq() const
    {
        return m_array_bound_seq;
    }

    /*!
     * @brief This function returns a reference to member array_bound_seq
     * @return Reference to member array_bound_seq
     */
    RTPS_DllAPI inline SBoundSeq& array_bound_seq()
    {
        return m_array_bound_seq;
    }
    /*!
     * @brief This function sets a value in member element_identifier
     * @param _element_identifier New value for member element_identifier
     */
    RTPS_DllAPI void element_identifier(
            const TypeIdentifier* _element_identifier);

    /*!
     * @brief This function returns the value of member element_identifier
     * @return Value of member element_identifier
     */
    RTPS_DllAPI inline const TypeIdentifier* element_identifier() const
    {
        return m_element_identifier;
    }

    /*!
     * @brief This function returns a reference to member element_identifier
     * @return Reference to member element_identifier
     */
    RTPS_DllAPI inline TypeIdentifier* element_identifier()
    {
        return m_element_identifier;
    }

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    RTPS_DllAPI static size_t getCdrSerializedSize(
            const PlainArraySElemDefn& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    RTPS_DllAPI void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    RTPS_DllAPI void deserialize(
            eprosima::fastcdr::Cdr& cdr);

    RTPS_DllAPI bool consistent(
            const PlainArraySElemDefn& x,
            const fastdds::dds::TypeConsistencyEnforcementQosPolicy& consistency) const;

private:

    PlainCollectionHeader m_header;
    SBoundSeq m_array_bound_seq;
    TypeIdentifier* m_element_identifier;
};
/*!
 * @brief This class represents the structure PlainArrayLElemDefn defined by the user in the IDL file.
 * @ingroup TYPEIDENTIFIERTYPES
 */
class PlainArrayLElemDefn final
{
public:

    /*!
     * @brief Default constructor.
     */
    RTPS_DllAPI PlainArrayLElemDefn();

    /*!
     * @brief Default destructor.
     */
    RTPS_DllAPI ~PlainArrayLElemDefn();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object PlainArrayLElemDefn that will be copied.
     */
    RTPS_DllAPI PlainArrayLElemDefn(
            const PlainArrayLElemDefn& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object PlainArrayLElemDefn that will be copied.
     */
    RTPS_DllAPI PlainArrayLElemDefn(
            PlainArrayLElemDefn&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object PlainArrayLElemDefn that will be copied.
     */
    RTPS_DllAPI PlainArrayLElemDefn& operator=(
            const PlainArrayLElemDefn& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object PlainArrayLElemDefn that will be copied.
     */
    RTPS_DllAPI PlainArrayLElemDefn& operator=(
            PlainArrayLElemDefn&& x);

    /*!
     * @brief This function copies the value in member header
     * @param _header New value to be copied in member header
     */
    RTPS_DllAPI inline void header(
            const PlainCollectionHeader& _header)
    {
        m_header = _header;
    }

    /*!
     * @brief This function moves the value in member header
     * @param _header New value to be moved in member header
     */
    RTPS_DllAPI inline void header(
            PlainCollectionHeader&& _header)
    {
        m_header = std::move(_header);
    }

    /*!
     * @brief This function returns a constant reference to member header
     * @return Constant reference to member header
     */
    RTPS_DllAPI inline const PlainCollectionHeader& header() const
    {
        return m_header;
    }

    /*!
     * @brief This function returns a reference to member header
     * @return Reference to member header
     */
    RTPS_DllAPI inline PlainCollectionHeader& header()
    {
        return m_header;
    }
    /*!
     * @brief This function copies the value in member array_bound_seq
     * @param _array_bound_seq New value to be copied in member array_bound_seq
     */
    RTPS_DllAPI inline void array_bound_seq(
            const LBoundSeq& _array_bound_seq)
    {
        m_array_bound_seq = _array_bound_seq;
    }

    /*!
     * @brief This function moves the value in member array_bound_seq
     * @param _array_bound_seq New value to be moved in member array_bound_seq
     */
    RTPS_DllAPI inline void array_bound_seq(
            LBoundSeq&& _array_bound_seq)
    {
        m_array_bound_seq = std::move(_array_bound_seq);
    }

    /*!
     * @brief This function returns a constant reference to member array_bound_seq
     * @return Constant reference to member array_bound_seq
     */
    RTPS_DllAPI inline const LBoundSeq& array_bound_seq() const
    {
        return m_array_bound_seq;
    }

    /*!
     * @brief This function returns a reference to member array_bound_seq
     * @return Reference to member array_bound_seq
     */
    RTPS_DllAPI inline LBoundSeq& array_bound_seq()
    {
        return m_array_bound_seq;
    }
    /*!
     * @brief This function sets a value in member element_identifier
     * @param _element_identifier New value for member element_identifier
     */
    RTPS_DllAPI void element_identifier(
            const TypeIdentifier* _element_identifier);

    /*!
     * @brief This function returns the value of member element_identifier
     * @return Value of member element_identifier
     */
    RTPS_DllAPI inline const TypeIdentifier* element_identifier() const
    {
        return m_element_identifier;
    }

    /*!
     * @brief This function returns a reference to member element_identifier
     * @return Reference to member element_identifier
     */
    RTPS_DllAPI inline TypeIdentifier* element_identifier()
    {
        return m_element_identifier;
    }

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    RTPS_DllAPI static size_t getCdrSerializedSize(
            const PlainArrayLElemDefn& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    RTPS_DllAPI void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    RTPS_DllAPI void deserialize(
            eprosima::fastcdr::Cdr& cdr);

    RTPS_DllAPI bool consistent(
            const PlainArrayLElemDefn& x,
            const fastdds::dds::TypeConsistencyEnforcementQosPolicy& consistency) const;

private:

    PlainCollectionHeader m_header;
    LBoundSeq m_array_bound_seq;
    TypeIdentifier* m_element_identifier;
};
/*!
 * @brief This class represents the structure PlainMapSTypeDefn defined by the user in the IDL file.
 * @ingroup TYPEIDENTIFIERTYPES
 */
class PlainMapSTypeDefn final
{
public:

    /*!
     * @brief Default constructor.
     */
    RTPS_DllAPI PlainMapSTypeDefn();

    /*!
     * @brief Default destructor.
     */
    RTPS_DllAPI ~PlainMapSTypeDefn();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object PlainMapSTypeDefn that will be copied.
     */
    RTPS_DllAPI PlainMapSTypeDefn(
            const PlainMapSTypeDefn& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object PlainMapSTypeDefn that will be copied.
     */
    RTPS_DllAPI PlainMapSTypeDefn(
            PlainMapSTypeDefn&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object PlainMapSTypeDefn that will be copied.
     */
    RTPS_DllAPI PlainMapSTypeDefn& operator=(
            const PlainMapSTypeDefn& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object PlainMapSTypeDefn that will be copied.
     */
    RTPS_DllAPI PlainMapSTypeDefn& operator=(
            PlainMapSTypeDefn&& x);

    /*!
     * @brief This function copies the value in member header
     * @param _header New value to be copied in member header
     */
    RTPS_DllAPI inline void header(
            const PlainCollectionHeader& _header)
    {
        m_header = _header;
    }

    /*!
     * @brief This function moves the value in member header
     * @param _header New value to be moved in member header
     */
    RTPS_DllAPI inline void header(
            PlainCollectionHeader&& _header)
    {
        m_header = std::move(_header);
    }

    /*!
     * @brief This function returns a constant reference to member header
     * @return Constant reference to member header
     */
    RTPS_DllAPI inline const PlainCollectionHeader& header() const
    {
        return m_header;
    }

    /*!
     * @brief This function returns a reference to member header
     * @return Reference to member header
     */
    RTPS_DllAPI inline PlainCollectionHeader& header()
    {
        return m_header;
    }
    /*!
     * @brief This function sets a value in member bound
     * @param _bound New value for member bound
     */
    RTPS_DllAPI inline void bound(
            SBound _bound)
    {
        m_bound = _bound;
    }

    /*!
     * @brief This function returns the value of member bound
     * @return Value of member bound
     */
    RTPS_DllAPI inline SBound bound() const
    {
        return m_bound;
    }

    /*!
     * @brief This function returns a reference to member bound
     * @return Reference to member bound
     */
    RTPS_DllAPI inline SBound& bound()
    {
        return m_bound;
    }
    /*!
     * @brief This function sets a value in member element_identifier
     * @param _element_identifier New value for member element_identifier
     */
    RTPS_DllAPI void element_identifier(
            const TypeIdentifier* _element_identifier);

    /*!
     * @brief This function returns the value of member element_identifier
     * @return Value of member element_identifier
     */
    RTPS_DllAPI inline const TypeIdentifier* element_identifier() const
    {
        return m_element_identifier;
    }

    /*!
     * @brief This function returns a reference to member element_identifier
     * @return Reference to member element_identifier
     */
    RTPS_DllAPI inline TypeIdentifier* element_identifier()
    {
        return m_element_identifier;
    }
    /*!
     * @brief This function sets a value in member key_flags
     * @param _key_flags New value for member key_flags
     */
    RTPS_DllAPI inline void key_flags(
            CollectionElementFlag _key_flags)
    {
        m_key_flags = _key_flags;
    }

    /*!
     * @brief This function returns the value of member key_flags
     * @return Value of member key_flags
     */
    RTPS_DllAPI inline CollectionElementFlag key_flags() const
    {
        return m_key_flags;
    }

    /*!
     * @brief This function returns a reference to member key_flags
     * @return Reference to member key_flags
     */
    RTPS_DllAPI inline CollectionElementFlag& key_flags()
    {
        return m_key_flags;
    }
    /*!
     * @brief This function sets a value in member key_identifier
     * @param _key_identifier New value for member key_identifier
     */
    RTPS_DllAPI void key_identifier(
            const TypeIdentifier* _key_identifier);

    /*!
     * @brief This function returns the value of member key_identifier
     * @return Value of member key_identifier
     */
    RTPS_DllAPI inline const TypeIdentifier* key_identifier() const
    {
        return m_key_identifier;
    }

    /*!
     * @brief This function returns a reference to member key_identifier
     * @return Reference to member key_identifier
     */
    RTPS_DllAPI inline TypeIdentifier* key_identifier()
    {
        return m_key_identifier;
    }

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    RTPS_DllAPI static size_t getCdrSerializedSize(
            const PlainMapSTypeDefn& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    RTPS_DllAPI void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    RTPS_DllAPI void deserialize(
            eprosima::fastcdr::Cdr& cdr);

    RTPS_DllAPI bool consistent(
            const PlainMapSTypeDefn& x,
            const fastdds::dds::TypeConsistencyEnforcementQosPolicy& consistency) const;

private:

    PlainCollectionHeader m_header;
    SBound m_bound;
    TypeIdentifier* m_element_identifier;
    CollectionElementFlag m_key_flags;
    TypeIdentifier* m_key_identifier;
};
/*!
 * @brief This class represents the structure PlainMapLTypeDefn defined by the user in the IDL file.
 * @ingroup TYPEIDENTIFIERTYPES
 */
class PlainMapLTypeDefn final
{
public:

    /*!
     * @brief Default constructor.
     */
    RTPS_DllAPI PlainMapLTypeDefn();

    /*!
     * @brief Default destructor.
     */
    RTPS_DllAPI ~PlainMapLTypeDefn();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object PlainMapLTypeDefn that will be copied.
     */
    RTPS_DllAPI PlainMapLTypeDefn(
            const PlainMapLTypeDefn& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object PlainMapLTypeDefn that will be copied.
     */
    RTPS_DllAPI PlainMapLTypeDefn(
            PlainMapLTypeDefn&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object PlainMapLTypeDefn that will be copied.
     */
    RTPS_DllAPI PlainMapLTypeDefn& operator=(
            const PlainMapLTypeDefn& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object PlainMapLTypeDefn that will be copied.
     */
    RTPS_DllAPI PlainMapLTypeDefn& operator=(
            PlainMapLTypeDefn&& x);

    /*!
     * @brief This function copies the value in member header
     * @param _header New value to be copied in member header
     */
    RTPS_DllAPI inline void header(
            const PlainCollectionHeader& _header)
    {
        m_header = _header;
    }

    /*!
     * @brief This function moves the value in member header
     * @param _header New value to be moved in member header
     */
    RTPS_DllAPI inline void header(
            PlainCollectionHeader&& _header)
    {
        m_header = std::move(_header);
    }

    /*!
     * @brief This function returns a constant reference to member header
     * @return Constant reference to member header
     */
    RTPS_DllAPI inline const PlainCollectionHeader& header() const
    {
        return m_header;
    }

    /*!
     * @brief This function returns a reference to member header
     * @return Reference to member header
     */
    RTPS_DllAPI inline PlainCollectionHeader& header()
    {
        return m_header;
    }
    /*!
     * @brief This function sets a value in member bound
     * @param _bound New value for member bound
     */
    RTPS_DllAPI inline void bound(
            LBound _bound)
    {
        m_bound = _bound;
    }

    /*!
     * @brief This function returns the value of member bound
     * @return Value of member bound
     */
    RTPS_DllAPI inline LBound bound() const
    {
        return m_bound;
    }

    /*!
     * @brief This function returns a reference to member bound
     * @return Reference to member bound
     */
    RTPS_DllAPI inline LBound& bound()
    {
        return m_bound;
    }
    /*!
     * @brief This function sets a value in member element_identifier
     * @param _element_identifier New value for member element_identifier
     */
    RTPS_DllAPI void element_identifier(
            const TypeIdentifier* _element_identifier);

    /*!
     * @brief This function returns the value of member element_identifier
     * @return Value of member element_identifier
     */
    RTPS_DllAPI inline const TypeIdentifier* element_identifier() const
    {
        return m_element_identifier;
    }

    /*!
     * @brief This function returns a reference to member element_identifier
     * @return Reference to member element_identifier
     */
    RTPS_DllAPI inline TypeIdentifier* element_identifier()
    {
        return m_element_identifier;
    }
    /*!
     * @brief This function sets a value in member key_flags
     * @param _key_flags New value for member key_flags
     */
    RTPS_DllAPI inline void key_flags(
            CollectionElementFlag _key_flags)
    {
        m_key_flags = _key_flags;
    }

    /*!
     * @brief This function returns the value of member key_flags
     * @return Value of member key_flags
     */
    RTPS_DllAPI inline CollectionElementFlag key_flags() const
    {
        return m_key_flags;
    }

    /*!
     * @brief This function returns a reference to member key_flags
     * @return Reference to member key_flags
     */
    RTPS_DllAPI inline CollectionElementFlag& key_flags()
    {
        return m_key_flags;
    }
    /*!
     * @brief This function sets a value in member key_identifier
     * @param _key_identifier New value for member key_identifier
     */
    RTPS_DllAPI void key_identifier(
            const TypeIdentifier* _key_identifier);

    /*!
     * @brief This function returns the value of member key_identifier
     * @return Value of member key_identifier
     */
    RTPS_DllAPI inline const TypeIdentifier* key_identifier() const
    {
        return m_key_identifier;
    }

    /*!
     * @brief This function returns a reference to member key_identifier
     * @return Reference to member key_identifier
     */
    RTPS_DllAPI inline TypeIdentifier* key_identifier()
    {
        return m_key_identifier;
    }

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    RTPS_DllAPI static size_t getCdrSerializedSize(
            const PlainMapLTypeDefn& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    RTPS_DllAPI void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    RTPS_DllAPI void deserialize(
            eprosima::fastcdr::Cdr& cdr);

    RTPS_DllAPI bool consistent(
            const PlainMapLTypeDefn& x,
            const fastdds::dds::TypeConsistencyEnforcementQosPolicy& consistency) const;

private:

    PlainCollectionHeader m_header;
    LBound m_bound;
    TypeIdentifier* m_element_identifier;
    CollectionElementFlag m_key_flags;
    TypeIdentifier* m_key_identifier;
};
/*!
 * @brief This class represents the structure StronglyConnectedComponentId defined by the user in the IDL file.
 * @ingroup TYPEIDENTIFIERTYPES
 */
class StronglyConnectedComponentId final
{
public:

    /*!
     * @brief Default constructor.
     */
    RTPS_DllAPI StronglyConnectedComponentId();

    /*!
     * @brief Default destructor.
     */
    RTPS_DllAPI ~StronglyConnectedComponentId();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object StronglyConnectedComponentId that will be copied.
     */
    RTPS_DllAPI StronglyConnectedComponentId(
            const StronglyConnectedComponentId& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object StronglyConnectedComponentId that will be copied.
     */
    RTPS_DllAPI StronglyConnectedComponentId(
            StronglyConnectedComponentId&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object StronglyConnectedComponentId that will be copied.
     */
    RTPS_DllAPI StronglyConnectedComponentId& operator=(
            const StronglyConnectedComponentId& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object StronglyConnectedComponentId that will be copied.
     */
    RTPS_DllAPI StronglyConnectedComponentId& operator=(
            StronglyConnectedComponentId&& x);

    /*!
     * @brief This function copies the value in member sc_component_id
     * @param _sc_component_id New value to be copied in member sc_component_id
     */
    RTPS_DllAPI inline void sc_component_id(
            const TypeObjectHashId& _sc_component_id)
    {
        m_sc_component_id = _sc_component_id;
    }

    /*!
     * @brief This function moves the value in member sc_component_id
     * @param _sc_component_id New value to be moved in member sc_component_id
     */
    RTPS_DllAPI inline void sc_component_id(
            TypeObjectHashId&& _sc_component_id)
    {
        m_sc_component_id = std::move(_sc_component_id);
    }

    /*!
     * @brief This function returns a constant reference to member sc_component_id
     * @return Constant reference to member sc_component_id
     */
    RTPS_DllAPI inline const TypeObjectHashId& sc_component_id() const
    {
        return m_sc_component_id;
    }

    /*!
     * @brief This function returns a reference to member sc_component_id
     * @return Reference to member sc_component_id
     */
    RTPS_DllAPI inline TypeObjectHashId& sc_component_id()
    {
        return m_sc_component_id;
    }
    /*!
     * @brief This function sets a value in member scc_length
     * @param _scc_length New value for member scc_length
     */
    RTPS_DllAPI inline void scc_length(
            int32_t _scc_length)
    {
        m_scc_length = _scc_length;
    }

    /*!
     * @brief This function returns the value of member scc_length
     * @return Value of member scc_length
     */
    RTPS_DllAPI inline int32_t scc_length() const
    {
        return m_scc_length;
    }

    /*!
     * @brief This function returns a reference to member scc_length
     * @return Reference to member scc_length
     */
    RTPS_DllAPI inline int32_t& scc_length()
    {
        return m_scc_length;
    }
    /*!
     * @brief This function sets a value in member scc_index
     * @param _scc_index New value for member scc_index
     */
    RTPS_DllAPI inline void scc_index(
            int32_t _scc_index)
    {
        m_scc_index = _scc_index;
    }

    /*!
     * @brief This function returns the value of member scc_index
     * @return Value of member scc_index
     */
    RTPS_DllAPI inline int32_t scc_index() const
    {
        return m_scc_index;
    }

    /*!
     * @brief This function returns a reference to member scc_index
     * @return Reference to member scc_index
     */
    RTPS_DllAPI inline int32_t& scc_index()
    {
        return m_scc_index;
    }

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    RTPS_DllAPI static size_t getCdrSerializedSize(
            const StronglyConnectedComponentId& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    RTPS_DllAPI void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    RTPS_DllAPI void deserialize(
            eprosima::fastcdr::Cdr& cdr);

    RTPS_DllAPI bool consistent(
            const StronglyConnectedComponentId& x,
            const fastdds::dds::TypeConsistencyEnforcementQosPolicy& consistency) const;

private:

    TypeObjectHashId m_sc_component_id;
    int32_t m_scc_length;
    int32_t m_scc_index;
};
/*!
 * @brief This class represents the structure ExtendedTypeDefn defined by the user in the IDL file.
 * @ingroup TYPEIDENTIFIERTYPES
 */
class ExtendedTypeDefn final
{
public:

    /*!
     * @brief Default constructor.
     */
    RTPS_DllAPI ExtendedTypeDefn();

    /*!
     * @brief Default destructor.
     */
    RTPS_DllAPI virtual ~ExtendedTypeDefn();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object ExtendedTypeDefn that will be copied.
     */
    RTPS_DllAPI ExtendedTypeDefn(
            const ExtendedTypeDefn& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object ExtendedTypeDefn that will be copied.
     */
    RTPS_DllAPI ExtendedTypeDefn(
            ExtendedTypeDefn&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object ExtendedTypeDefn that will be copied.
     */
    RTPS_DllAPI virtual ExtendedTypeDefn& operator=(
            const ExtendedTypeDefn& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object ExtendedTypeDefn that will be copied.
     */
    RTPS_DllAPI virtual ExtendedTypeDefn& operator=(
            ExtendedTypeDefn&& x);

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    RTPS_DllAPI static size_t getCdrSerializedSize(
            const ExtendedTypeDefn& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    RTPS_DllAPI virtual void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    RTPS_DllAPI virtual void deserialize(
            eprosima::fastcdr::Cdr& cdr);

    RTPS_DllAPI bool consistent(
            const ExtendedTypeDefn& x,
            const fastdds::dds::TypeConsistencyEnforcementQosPolicy& consistency) const;


};

} // namespace types
} // namespace fastrtps
} // namespace eprosima

#endif // _TYPEIDENTIFIERTYPES_H_

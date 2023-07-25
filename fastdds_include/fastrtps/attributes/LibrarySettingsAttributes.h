

/**
 * @file LibrarySettingsAttributes.h
 *
 */

#ifndef LIBRARYSETTINGS_ATTRIBUTES_H_
#define LIBRARYSETTINGS_ATTRIBUTES_H_

namespace eprosima {
namespace fastrtps {

enum IntraprocessDeliveryType
{
    INTRAPROCESS_OFF,
    INTRAPROCESS_USER_DATA_ONLY,
    INTRAPROCESS_FULL
};

/**
 * Class LibraySettingsAttributes, used by the user to define the FastRTPS library behaviour
 * @ingroup FASTRTPS_ATTRIBUTES_MODULE
 */
class LibrarySettingsAttributes
{
public:

    LibrarySettingsAttributes() {
    }

    virtual ~LibrarySettingsAttributes() {
    }

    bool operator==(
            const LibrarySettingsAttributes& b) const
    {
        return (intraprocess_delivery == b.intraprocess_delivery);
    }

    IntraprocessDeliveryType intraprocess_delivery = INTRAPROCESS_FULL;
};

}  // namespace fastrtps
}  // namespace eprosima

#endif /* LIBRARYSETTINGS_ATTRIBUTES_H_ */

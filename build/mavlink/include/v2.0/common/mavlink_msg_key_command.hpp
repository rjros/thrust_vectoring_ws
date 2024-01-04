// MESSAGE KEY_COMMAND support class

#pragma once

namespace mavlink {
namespace common {
namespace msg {

/**
 * @brief KEY_COMMAND message
 *
 * Keyboard char command.
 */
struct KEY_COMMAND : mavlink::Message {
    static constexpr msgid_t MSG_ID = 229;
    static constexpr size_t LENGTH = 1;
    static constexpr size_t MIN_LENGTH = 1;
    static constexpr uint8_t CRC_EXTRA = 49;
    static constexpr auto NAME = "KEY_COMMAND";


    char command; /*<    */


    inline std::string get_name(void) const override
    {
            return NAME;
    }

    inline Info get_message_info(void) const override
    {
            return { MSG_ID, LENGTH, MIN_LENGTH, CRC_EXTRA };
    }

    inline std::string to_yaml(void) const override
    {
        std::stringstream ss;

        ss << NAME << ":" << std::endl;
        ss << "  command: " << +command << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << command;                       // offset: 0
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> command;                       // offset: 0
    }
};

} // namespace msg
} // namespace common
} // namespace mavlink

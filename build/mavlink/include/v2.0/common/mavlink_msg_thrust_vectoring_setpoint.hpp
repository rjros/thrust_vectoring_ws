// MESSAGE THRUST_VECTORING_SETPOINT support class

#pragma once

namespace mavlink {
namespace common {
namespace msg {

/**
 * @brief THRUST_VECTORING_SETPOINT message
 *
 * Set desired setpoint for the orientation and magnitude of the thrust vector and  moment.Used by an external controller to command the vehicle (manual controller or other system).
 */
struct THRUST_VECTORING_SETPOINT : mavlink::Message {
    static constexpr msgid_t MSG_ID = 228;
    static constexpr size_t LENGTH = 57;
    static constexpr size_t MIN_LENGTH = 57;
    static constexpr uint8_t CRC_EXTRA = 244;
    static constexpr auto NAME = "THRUST_VECTORING_SETPOINT";


    uint32_t time_boot_ms; /*< [ms] Timestamp (time since system boot). */
    uint8_t target_system; /*<  System ID */
    uint8_t target_component; /*<  Component ID */
    uint8_t coordinate_frame; /*<  Valid options are: MAV_FRAME_LOCAL_NED = 1, MAV_FRAME_LOCAL_OFFSET_NED = 7, MAV_FRAME_BODY_NED = 8, MAV_FRAME_BODY_OFFSET_NED = 9 */
    uint16_t type_mask; /*<  Bitmap to indicate which dimensions should be ignored by the vehicle. */
    std::array<float, 6> servo_angle; /*<  Desired angles in radians for the servos in the thrust vector */
    std::array<float, 3> thrust_body; /*<  Normalized 3d thrust vector for thrust vectoring, normalized to -1 .. 1 */
    std::array<float, 3> torque_body; /*<  Normalized 3d thrust vector for thrust vectoring, normalized to -1 .. 1 */


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
        ss << "  time_boot_ms: " << time_boot_ms << std::endl;
        ss << "  target_system: " << +target_system << std::endl;
        ss << "  target_component: " << +target_component << std::endl;
        ss << "  coordinate_frame: " << +coordinate_frame << std::endl;
        ss << "  type_mask: " << type_mask << std::endl;
        ss << "  servo_angle: [" << to_string(servo_angle) << "]" << std::endl;
        ss << "  thrust_body: [" << to_string(thrust_body) << "]" << std::endl;
        ss << "  torque_body: [" << to_string(torque_body) << "]" << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << time_boot_ms;                  // offset: 0
        map << servo_angle;                   // offset: 4
        map << thrust_body;                   // offset: 28
        map << torque_body;                   // offset: 40
        map << type_mask;                     // offset: 52
        map << target_system;                 // offset: 54
        map << target_component;              // offset: 55
        map << coordinate_frame;              // offset: 56
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> time_boot_ms;                  // offset: 0
        map >> servo_angle;                   // offset: 4
        map >> thrust_body;                   // offset: 28
        map >> torque_body;                   // offset: 40
        map >> type_mask;                     // offset: 52
        map >> target_system;                 // offset: 54
        map >> target_component;              // offset: 55
        map >> coordinate_frame;              // offset: 56
    }
};

} // namespace msg
} // namespace common
} // namespace mavlink

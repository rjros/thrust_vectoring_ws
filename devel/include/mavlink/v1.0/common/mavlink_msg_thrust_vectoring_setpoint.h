#pragma once
// MESSAGE THRUST_VECTORING_SETPOINT PACKING

#define MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT 228


typedef struct __mavlink_thrust_vectoring_setpoint_t {
 uint32_t time_boot_ms; /*< [ms] Timestamp (time since system boot).*/
 float servo_angle[6]; /*<  Desired angles in radians for the servos in the thrust vector*/
 float thrust_body[3]; /*<  Normalized 3d thrust vector for thrust vectoring, normalized to -1 .. 1*/
 float torque_body[3]; /*<  Normalized 3d thrust vector for thrust vectoring, normalized to -1 .. 1*/
 uint16_t type_mask; /*<  Bitmap to indicate which dimensions should be ignored by the vehicle.*/
 uint8_t target_system; /*<  System ID*/
 uint8_t target_component; /*<  Component ID*/
 uint8_t coordinate_frame; /*<  Valid options are: MAV_FRAME_LOCAL_NED = 1, MAV_FRAME_LOCAL_OFFSET_NED = 7, MAV_FRAME_BODY_NED = 8, MAV_FRAME_BODY_OFFSET_NED = 9*/
} mavlink_thrust_vectoring_setpoint_t;

#define MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_LEN 57
#define MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_MIN_LEN 57
#define MAVLINK_MSG_ID_228_LEN 57
#define MAVLINK_MSG_ID_228_MIN_LEN 57

#define MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_CRC 244
#define MAVLINK_MSG_ID_228_CRC 244

#define MAVLINK_MSG_THRUST_VECTORING_SETPOINT_FIELD_SERVO_ANGLE_LEN 6
#define MAVLINK_MSG_THRUST_VECTORING_SETPOINT_FIELD_THRUST_BODY_LEN 3
#define MAVLINK_MSG_THRUST_VECTORING_SETPOINT_FIELD_TORQUE_BODY_LEN 3

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_THRUST_VECTORING_SETPOINT { \
    228, \
    "THRUST_VECTORING_SETPOINT", \
    8, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_thrust_vectoring_setpoint_t, time_boot_ms) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 54, offsetof(mavlink_thrust_vectoring_setpoint_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 55, offsetof(mavlink_thrust_vectoring_setpoint_t, target_component) }, \
         { "coordinate_frame", NULL, MAVLINK_TYPE_UINT8_T, 0, 56, offsetof(mavlink_thrust_vectoring_setpoint_t, coordinate_frame) }, \
         { "type_mask", NULL, MAVLINK_TYPE_UINT16_T, 0, 52, offsetof(mavlink_thrust_vectoring_setpoint_t, type_mask) }, \
         { "servo_angle", NULL, MAVLINK_TYPE_FLOAT, 6, 4, offsetof(mavlink_thrust_vectoring_setpoint_t, servo_angle) }, \
         { "thrust_body", NULL, MAVLINK_TYPE_FLOAT, 3, 28, offsetof(mavlink_thrust_vectoring_setpoint_t, thrust_body) }, \
         { "torque_body", NULL, MAVLINK_TYPE_FLOAT, 3, 40, offsetof(mavlink_thrust_vectoring_setpoint_t, torque_body) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_THRUST_VECTORING_SETPOINT { \
    "THRUST_VECTORING_SETPOINT", \
    8, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_thrust_vectoring_setpoint_t, time_boot_ms) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 54, offsetof(mavlink_thrust_vectoring_setpoint_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 55, offsetof(mavlink_thrust_vectoring_setpoint_t, target_component) }, \
         { "coordinate_frame", NULL, MAVLINK_TYPE_UINT8_T, 0, 56, offsetof(mavlink_thrust_vectoring_setpoint_t, coordinate_frame) }, \
         { "type_mask", NULL, MAVLINK_TYPE_UINT16_T, 0, 52, offsetof(mavlink_thrust_vectoring_setpoint_t, type_mask) }, \
         { "servo_angle", NULL, MAVLINK_TYPE_FLOAT, 6, 4, offsetof(mavlink_thrust_vectoring_setpoint_t, servo_angle) }, \
         { "thrust_body", NULL, MAVLINK_TYPE_FLOAT, 3, 28, offsetof(mavlink_thrust_vectoring_setpoint_t, thrust_body) }, \
         { "torque_body", NULL, MAVLINK_TYPE_FLOAT, 3, 40, offsetof(mavlink_thrust_vectoring_setpoint_t, torque_body) }, \
         } \
}
#endif

/**
 * @brief Pack a thrust_vectoring_setpoint message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param coordinate_frame  Valid options are: MAV_FRAME_LOCAL_NED = 1, MAV_FRAME_LOCAL_OFFSET_NED = 7, MAV_FRAME_BODY_NED = 8, MAV_FRAME_BODY_OFFSET_NED = 9
 * @param type_mask  Bitmap to indicate which dimensions should be ignored by the vehicle.
 * @param servo_angle  Desired angles in radians for the servos in the thrust vector
 * @param thrust_body  Normalized 3d thrust vector for thrust vectoring, normalized to -1 .. 1
 * @param torque_body  Normalized 3d thrust vector for thrust vectoring, normalized to -1 .. 1
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_thrust_vectoring_setpoint_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, uint8_t coordinate_frame, uint16_t type_mask, const float *servo_angle, const float *thrust_body, const float *torque_body)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint16_t(buf, 52, type_mask);
    _mav_put_uint8_t(buf, 54, target_system);
    _mav_put_uint8_t(buf, 55, target_component);
    _mav_put_uint8_t(buf, 56, coordinate_frame);
    _mav_put_float_array(buf, 4, servo_angle, 6);
    _mav_put_float_array(buf, 28, thrust_body, 3);
    _mav_put_float_array(buf, 40, torque_body, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_LEN);
#else
    mavlink_thrust_vectoring_setpoint_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.type_mask = type_mask;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.coordinate_frame = coordinate_frame;
    mav_array_memcpy(packet.servo_angle, servo_angle, sizeof(float)*6);
    mav_array_memcpy(packet.thrust_body, thrust_body, sizeof(float)*3);
    mav_array_memcpy(packet.torque_body, torque_body, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_LEN, MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_CRC);
}

/**
 * @brief Pack a thrust_vectoring_setpoint message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param coordinate_frame  Valid options are: MAV_FRAME_LOCAL_NED = 1, MAV_FRAME_LOCAL_OFFSET_NED = 7, MAV_FRAME_BODY_NED = 8, MAV_FRAME_BODY_OFFSET_NED = 9
 * @param type_mask  Bitmap to indicate which dimensions should be ignored by the vehicle.
 * @param servo_angle  Desired angles in radians for the servos in the thrust vector
 * @param thrust_body  Normalized 3d thrust vector for thrust vectoring, normalized to -1 .. 1
 * @param torque_body  Normalized 3d thrust vector for thrust vectoring, normalized to -1 .. 1
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_thrust_vectoring_setpoint_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,uint8_t target_system,uint8_t target_component,uint8_t coordinate_frame,uint16_t type_mask,const float *servo_angle,const float *thrust_body,const float *torque_body)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint16_t(buf, 52, type_mask);
    _mav_put_uint8_t(buf, 54, target_system);
    _mav_put_uint8_t(buf, 55, target_component);
    _mav_put_uint8_t(buf, 56, coordinate_frame);
    _mav_put_float_array(buf, 4, servo_angle, 6);
    _mav_put_float_array(buf, 28, thrust_body, 3);
    _mav_put_float_array(buf, 40, torque_body, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_LEN);
#else
    mavlink_thrust_vectoring_setpoint_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.type_mask = type_mask;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.coordinate_frame = coordinate_frame;
    mav_array_memcpy(packet.servo_angle, servo_angle, sizeof(float)*6);
    mav_array_memcpy(packet.thrust_body, thrust_body, sizeof(float)*3);
    mav_array_memcpy(packet.torque_body, torque_body, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_LEN, MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_CRC);
}

/**
 * @brief Encode a thrust_vectoring_setpoint struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param thrust_vectoring_setpoint C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_thrust_vectoring_setpoint_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_thrust_vectoring_setpoint_t* thrust_vectoring_setpoint)
{
    return mavlink_msg_thrust_vectoring_setpoint_pack(system_id, component_id, msg, thrust_vectoring_setpoint->time_boot_ms, thrust_vectoring_setpoint->target_system, thrust_vectoring_setpoint->target_component, thrust_vectoring_setpoint->coordinate_frame, thrust_vectoring_setpoint->type_mask, thrust_vectoring_setpoint->servo_angle, thrust_vectoring_setpoint->thrust_body, thrust_vectoring_setpoint->torque_body);
}

/**
 * @brief Encode a thrust_vectoring_setpoint struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param thrust_vectoring_setpoint C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_thrust_vectoring_setpoint_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_thrust_vectoring_setpoint_t* thrust_vectoring_setpoint)
{
    return mavlink_msg_thrust_vectoring_setpoint_pack_chan(system_id, component_id, chan, msg, thrust_vectoring_setpoint->time_boot_ms, thrust_vectoring_setpoint->target_system, thrust_vectoring_setpoint->target_component, thrust_vectoring_setpoint->coordinate_frame, thrust_vectoring_setpoint->type_mask, thrust_vectoring_setpoint->servo_angle, thrust_vectoring_setpoint->thrust_body, thrust_vectoring_setpoint->torque_body);
}

/**
 * @brief Send a thrust_vectoring_setpoint message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param coordinate_frame  Valid options are: MAV_FRAME_LOCAL_NED = 1, MAV_FRAME_LOCAL_OFFSET_NED = 7, MAV_FRAME_BODY_NED = 8, MAV_FRAME_BODY_OFFSET_NED = 9
 * @param type_mask  Bitmap to indicate which dimensions should be ignored by the vehicle.
 * @param servo_angle  Desired angles in radians for the servos in the thrust vector
 * @param thrust_body  Normalized 3d thrust vector for thrust vectoring, normalized to -1 .. 1
 * @param torque_body  Normalized 3d thrust vector for thrust vectoring, normalized to -1 .. 1
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_thrust_vectoring_setpoint_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, uint8_t coordinate_frame, uint16_t type_mask, const float *servo_angle, const float *thrust_body, const float *torque_body)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint16_t(buf, 52, type_mask);
    _mav_put_uint8_t(buf, 54, target_system);
    _mav_put_uint8_t(buf, 55, target_component);
    _mav_put_uint8_t(buf, 56, coordinate_frame);
    _mav_put_float_array(buf, 4, servo_angle, 6);
    _mav_put_float_array(buf, 28, thrust_body, 3);
    _mav_put_float_array(buf, 40, torque_body, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT, buf, MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_LEN, MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_CRC);
#else
    mavlink_thrust_vectoring_setpoint_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.type_mask = type_mask;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.coordinate_frame = coordinate_frame;
    mav_array_memcpy(packet.servo_angle, servo_angle, sizeof(float)*6);
    mav_array_memcpy(packet.thrust_body, thrust_body, sizeof(float)*3);
    mav_array_memcpy(packet.torque_body, torque_body, sizeof(float)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT, (const char *)&packet, MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_LEN, MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_CRC);
#endif
}

/**
 * @brief Send a thrust_vectoring_setpoint message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_thrust_vectoring_setpoint_send_struct(mavlink_channel_t chan, const mavlink_thrust_vectoring_setpoint_t* thrust_vectoring_setpoint)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_thrust_vectoring_setpoint_send(chan, thrust_vectoring_setpoint->time_boot_ms, thrust_vectoring_setpoint->target_system, thrust_vectoring_setpoint->target_component, thrust_vectoring_setpoint->coordinate_frame, thrust_vectoring_setpoint->type_mask, thrust_vectoring_setpoint->servo_angle, thrust_vectoring_setpoint->thrust_body, thrust_vectoring_setpoint->torque_body);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT, (const char *)thrust_vectoring_setpoint, MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_LEN, MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_CRC);
#endif
}

#if MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_thrust_vectoring_setpoint_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, uint8_t coordinate_frame, uint16_t type_mask, const float *servo_angle, const float *thrust_body, const float *torque_body)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint16_t(buf, 52, type_mask);
    _mav_put_uint8_t(buf, 54, target_system);
    _mav_put_uint8_t(buf, 55, target_component);
    _mav_put_uint8_t(buf, 56, coordinate_frame);
    _mav_put_float_array(buf, 4, servo_angle, 6);
    _mav_put_float_array(buf, 28, thrust_body, 3);
    _mav_put_float_array(buf, 40, torque_body, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT, buf, MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_LEN, MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_CRC);
#else
    mavlink_thrust_vectoring_setpoint_t *packet = (mavlink_thrust_vectoring_setpoint_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->type_mask = type_mask;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->coordinate_frame = coordinate_frame;
    mav_array_memcpy(packet->servo_angle, servo_angle, sizeof(float)*6);
    mav_array_memcpy(packet->thrust_body, thrust_body, sizeof(float)*3);
    mav_array_memcpy(packet->torque_body, torque_body, sizeof(float)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT, (const char *)packet, MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_LEN, MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_CRC);
#endif
}
#endif

#endif

// MESSAGE THRUST_VECTORING_SETPOINT UNPACKING


/**
 * @brief Get field time_boot_ms from thrust_vectoring_setpoint message
 *
 * @return [ms] Timestamp (time since system boot).
 */
static inline uint32_t mavlink_msg_thrust_vectoring_setpoint_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field target_system from thrust_vectoring_setpoint message
 *
 * @return  System ID
 */
static inline uint8_t mavlink_msg_thrust_vectoring_setpoint_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  54);
}

/**
 * @brief Get field target_component from thrust_vectoring_setpoint message
 *
 * @return  Component ID
 */
static inline uint8_t mavlink_msg_thrust_vectoring_setpoint_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  55);
}

/**
 * @brief Get field coordinate_frame from thrust_vectoring_setpoint message
 *
 * @return  Valid options are: MAV_FRAME_LOCAL_NED = 1, MAV_FRAME_LOCAL_OFFSET_NED = 7, MAV_FRAME_BODY_NED = 8, MAV_FRAME_BODY_OFFSET_NED = 9
 */
static inline uint8_t mavlink_msg_thrust_vectoring_setpoint_get_coordinate_frame(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  56);
}

/**
 * @brief Get field type_mask from thrust_vectoring_setpoint message
 *
 * @return  Bitmap to indicate which dimensions should be ignored by the vehicle.
 */
static inline uint16_t mavlink_msg_thrust_vectoring_setpoint_get_type_mask(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  52);
}

/**
 * @brief Get field servo_angle from thrust_vectoring_setpoint message
 *
 * @return  Desired angles in radians for the servos in the thrust vector
 */
static inline uint16_t mavlink_msg_thrust_vectoring_setpoint_get_servo_angle(const mavlink_message_t* msg, float *servo_angle)
{
    return _MAV_RETURN_float_array(msg, servo_angle, 6,  4);
}

/**
 * @brief Get field thrust_body from thrust_vectoring_setpoint message
 *
 * @return  Normalized 3d thrust vector for thrust vectoring, normalized to -1 .. 1
 */
static inline uint16_t mavlink_msg_thrust_vectoring_setpoint_get_thrust_body(const mavlink_message_t* msg, float *thrust_body)
{
    return _MAV_RETURN_float_array(msg, thrust_body, 3,  28);
}

/**
 * @brief Get field torque_body from thrust_vectoring_setpoint message
 *
 * @return  Normalized 3d thrust vector for thrust vectoring, normalized to -1 .. 1
 */
static inline uint16_t mavlink_msg_thrust_vectoring_setpoint_get_torque_body(const mavlink_message_t* msg, float *torque_body)
{
    return _MAV_RETURN_float_array(msg, torque_body, 3,  40);
}

/**
 * @brief Decode a thrust_vectoring_setpoint message into a struct
 *
 * @param msg The message to decode
 * @param thrust_vectoring_setpoint C-struct to decode the message contents into
 */
static inline void mavlink_msg_thrust_vectoring_setpoint_decode(const mavlink_message_t* msg, mavlink_thrust_vectoring_setpoint_t* thrust_vectoring_setpoint)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    thrust_vectoring_setpoint->time_boot_ms = mavlink_msg_thrust_vectoring_setpoint_get_time_boot_ms(msg);
    mavlink_msg_thrust_vectoring_setpoint_get_servo_angle(msg, thrust_vectoring_setpoint->servo_angle);
    mavlink_msg_thrust_vectoring_setpoint_get_thrust_body(msg, thrust_vectoring_setpoint->thrust_body);
    mavlink_msg_thrust_vectoring_setpoint_get_torque_body(msg, thrust_vectoring_setpoint->torque_body);
    thrust_vectoring_setpoint->type_mask = mavlink_msg_thrust_vectoring_setpoint_get_type_mask(msg);
    thrust_vectoring_setpoint->target_system = mavlink_msg_thrust_vectoring_setpoint_get_target_system(msg);
    thrust_vectoring_setpoint->target_component = mavlink_msg_thrust_vectoring_setpoint_get_target_component(msg);
    thrust_vectoring_setpoint->coordinate_frame = mavlink_msg_thrust_vectoring_setpoint_get_coordinate_frame(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_LEN? msg->len : MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_LEN;
        memset(thrust_vectoring_setpoint, 0, MAVLINK_MSG_ID_THRUST_VECTORING_SETPOINT_LEN);
    memcpy(thrust_vectoring_setpoint, _MAV_PAYLOAD(msg), len);
#endif
}

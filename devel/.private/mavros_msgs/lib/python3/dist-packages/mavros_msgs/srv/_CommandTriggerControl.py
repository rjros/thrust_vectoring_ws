# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from mavros_msgs/CommandTriggerControlRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class CommandTriggerControlRequest(genpy.Message):
  _md5sum = "5231f3f21be52f9682a8e030770339a5"
  _type = "mavros_msgs/CommandTriggerControlRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# Type for controlling onboard camera triggering system

bool    trigger_enable		# Trigger enable/disable
bool    sequence_reset		# Reset the trigger sequence
bool    trigger_pause		# Pause triggering, but without switching the camera off or retracting it.
"""
  __slots__ = ['trigger_enable','sequence_reset','trigger_pause']
  _slot_types = ['bool','bool','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       trigger_enable,sequence_reset,trigger_pause

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(CommandTriggerControlRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.trigger_enable is None:
        self.trigger_enable = False
      if self.sequence_reset is None:
        self.sequence_reset = False
      if self.trigger_pause is None:
        self.trigger_pause = False
    else:
      self.trigger_enable = False
      self.sequence_reset = False
      self.trigger_pause = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3B().pack(_x.trigger_enable, _x.sequence_reset, _x.trigger_pause))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 3
      (_x.trigger_enable, _x.sequence_reset, _x.trigger_pause,) = _get_struct_3B().unpack(str[start:end])
      self.trigger_enable = bool(self.trigger_enable)
      self.sequence_reset = bool(self.sequence_reset)
      self.trigger_pause = bool(self.trigger_pause)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3B().pack(_x.trigger_enable, _x.sequence_reset, _x.trigger_pause))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 3
      (_x.trigger_enable, _x.sequence_reset, _x.trigger_pause,) = _get_struct_3B().unpack(str[start:end])
      self.trigger_enable = bool(self.trigger_enable)
      self.sequence_reset = bool(self.sequence_reset)
      self.trigger_pause = bool(self.trigger_pause)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3B = None
def _get_struct_3B():
    global _struct_3B
    if _struct_3B is None:
        _struct_3B = struct.Struct("<3B")
    return _struct_3B
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from mavros_msgs/CommandTriggerControlResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class CommandTriggerControlResponse(genpy.Message):
  _md5sum = "1cd894375e4e3d2861d2222772894fdb"
  _type = "mavros_msgs/CommandTriggerControlResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """bool success
uint8 result

"""
  __slots__ = ['success','result']
  _slot_types = ['bool','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       success,result

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(CommandTriggerControlResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.success is None:
        self.success = False
      if self.result is None:
        self.result = 0
    else:
      self.success = False
      self.result = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_2B().pack(_x.success, _x.result))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 2
      (_x.success, _x.result,) = _get_struct_2B().unpack(str[start:end])
      self.success = bool(self.success)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_2B().pack(_x.success, _x.result))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 2
      (_x.success, _x.result,) = _get_struct_2B().unpack(str[start:end])
      self.success = bool(self.success)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2B = None
def _get_struct_2B():
    global _struct_2B
    if _struct_2B is None:
        _struct_2B = struct.Struct("<2B")
    return _struct_2B
class CommandTriggerControl(object):
  _type          = 'mavros_msgs/CommandTriggerControl'
  _md5sum = '65be46a6918cb61b7dceb7c9ba9b1c97'
  _request_class  = CommandTriggerControlRequest
  _response_class = CommandTriggerControlResponse

# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from inspire_hand/set_default_speedRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class set_default_speedRequest(genpy.Message):
  _md5sum = "9b81c1887290eb799831f63509865cac"
  _type = "inspire_hand/set_default_speedRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int32 speed0
int32 speed1
int32 speed2
int32 speed3
int32 speed4
int32 speed5
"""
  __slots__ = ['speed0','speed1','speed2','speed3','speed4','speed5']
  _slot_types = ['int32','int32','int32','int32','int32','int32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       speed0,speed1,speed2,speed3,speed4,speed5

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(set_default_speedRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.speed0 is None:
        self.speed0 = 0
      if self.speed1 is None:
        self.speed1 = 0
      if self.speed2 is None:
        self.speed2 = 0
      if self.speed3 is None:
        self.speed3 = 0
      if self.speed4 is None:
        self.speed4 = 0
      if self.speed5 is None:
        self.speed5 = 0
    else:
      self.speed0 = 0
      self.speed1 = 0
      self.speed2 = 0
      self.speed3 = 0
      self.speed4 = 0
      self.speed5 = 0

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
      buff.write(_get_struct_6i().pack(_x.speed0, _x.speed1, _x.speed2, _x.speed3, _x.speed4, _x.speed5))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 24
      (_x.speed0, _x.speed1, _x.speed2, _x.speed3, _x.speed4, _x.speed5,) = _get_struct_6i().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_6i().pack(_x.speed0, _x.speed1, _x.speed2, _x.speed3, _x.speed4, _x.speed5))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 24
      (_x.speed0, _x.speed1, _x.speed2, _x.speed3, _x.speed4, _x.speed5,) = _get_struct_6i().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_6i = None
def _get_struct_6i():
    global _struct_6i
    if _struct_6i is None:
        _struct_6i = struct.Struct("<6i")
    return _struct_6i
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from inspire_hand/set_default_speedResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class set_default_speedResponse(genpy.Message):
  _md5sum = "684dc1449df61cac44f84430b5f7b04c"
  _type = "inspire_hand/set_default_speedResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """bool default_speed_accepted
"""
  __slots__ = ['default_speed_accepted']
  _slot_types = ['bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       default_speed_accepted

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(set_default_speedResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.default_speed_accepted is None:
        self.default_speed_accepted = False
    else:
      self.default_speed_accepted = False

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
      buff.write(_get_struct_B().pack(self.default_speed_accepted))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 1
      (self.default_speed_accepted,) = _get_struct_B().unpack(str[start:end])
      self.default_speed_accepted = bool(self.default_speed_accepted)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      buff.write(_get_struct_B().pack(self.default_speed_accepted))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 1
      (self.default_speed_accepted,) = _get_struct_B().unpack(str[start:end])
      self.default_speed_accepted = bool(self.default_speed_accepted)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
class set_default_speed(object):
  _type          = 'inspire_hand/set_default_speed'
  _md5sum = '66b301b7e9c65c6ecc5012db3efd1bc0'
  _request_class  = set_default_speedRequest
  _response_class = set_default_speedResponse

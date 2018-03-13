# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from jsk_rviz_plugins/Pictogram.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import std_msgs.msg

class Pictogram(genpy.Message):
  _md5sum = "29667e5652a8cfdc9c87d2ed97aa7bbc"
  _type = "jsk_rviz_plugins/Pictogram"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """Header header
geometry_msgs/Pose pose
uint8 ADD=0
uint8 DELETE=1
uint8 ROTATE_Z=2
uint8 ROTATE_Y=3
uint8 ROTATE_X=4
uint8 JUMP=5
uint8 JUMP_ONCE=6
uint8 action

uint8 PICTOGRAM_MODE=0 
uint8 STRING_MODE=1

uint8 mode
string character
float64 size
float64 ttl
float64 speed
std_msgs/ColorRGBA color

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: std_msgs/ColorRGBA
float32 r
float32 g
float32 b
float32 a
"""
  # Pseudo-constants
  ADD = 0
  DELETE = 1
  ROTATE_Z = 2
  ROTATE_Y = 3
  ROTATE_X = 4
  JUMP = 5
  JUMP_ONCE = 6
  PICTOGRAM_MODE = 0
  STRING_MODE = 1

  __slots__ = ['header','pose','action','mode','character','size','ttl','speed','color']
  _slot_types = ['std_msgs/Header','geometry_msgs/Pose','uint8','uint8','string','float64','float64','float64','std_msgs/ColorRGBA']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,pose,action,mode,character,size,ttl,speed,color

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Pictogram, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.pose is None:
        self.pose = geometry_msgs.msg.Pose()
      if self.action is None:
        self.action = 0
      if self.mode is None:
        self.mode = 0
      if self.character is None:
        self.character = ''
      if self.size is None:
        self.size = 0.
      if self.ttl is None:
        self.ttl = 0.
      if self.speed is None:
        self.speed = 0.
      if self.color is None:
        self.color = std_msgs.msg.ColorRGBA()
    else:
      self.header = std_msgs.msg.Header()
      self.pose = geometry_msgs.msg.Pose()
      self.action = 0
      self.mode = 0
      self.character = ''
      self.size = 0.
      self.ttl = 0.
      self.speed = 0.
      self.color = std_msgs.msg.ColorRGBA()

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
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_7d2B().pack(_x.pose.position.x, _x.pose.position.y, _x.pose.position.z, _x.pose.orientation.x, _x.pose.orientation.y, _x.pose.orientation.z, _x.pose.orientation.w, _x.action, _x.mode))
      _x = self.character
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_3d4f().pack(_x.size, _x.ttl, _x.speed, _x.color.r, _x.color.g, _x.color.b, _x.color.a))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.pose is None:
        self.pose = geometry_msgs.msg.Pose()
      if self.color is None:
        self.color = std_msgs.msg.ColorRGBA()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 58
      (_x.pose.position.x, _x.pose.position.y, _x.pose.position.z, _x.pose.orientation.x, _x.pose.orientation.y, _x.pose.orientation.z, _x.pose.orientation.w, _x.action, _x.mode,) = _get_struct_7d2B().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.character = str[start:end].decode('utf-8')
      else:
        self.character = str[start:end]
      _x = self
      start = end
      end += 40
      (_x.size, _x.ttl, _x.speed, _x.color.r, _x.color.g, _x.color.b, _x.color.a,) = _get_struct_3d4f().unpack(str[start:end])
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
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_7d2B().pack(_x.pose.position.x, _x.pose.position.y, _x.pose.position.z, _x.pose.orientation.x, _x.pose.orientation.y, _x.pose.orientation.z, _x.pose.orientation.w, _x.action, _x.mode))
      _x = self.character
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_3d4f().pack(_x.size, _x.ttl, _x.speed, _x.color.r, _x.color.g, _x.color.b, _x.color.a))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.pose is None:
        self.pose = geometry_msgs.msg.Pose()
      if self.color is None:
        self.color = std_msgs.msg.ColorRGBA()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 58
      (_x.pose.position.x, _x.pose.position.y, _x.pose.position.z, _x.pose.orientation.x, _x.pose.orientation.y, _x.pose.orientation.z, _x.pose.orientation.w, _x.action, _x.mode,) = _get_struct_7d2B().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.character = str[start:end].decode('utf-8')
      else:
        self.character = str[start:end]
      _x = self
      start = end
      end += 40
      (_x.size, _x.ttl, _x.speed, _x.color.r, _x.color.g, _x.color.b, _x.color.a,) = _get_struct_3d4f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_3d4f = None
def _get_struct_3d4f():
    global _struct_3d4f
    if _struct_3d4f is None:
        _struct_3d4f = struct.Struct("<3d4f")
    return _struct_3d4f
_struct_7d2B = None
def _get_struct_7d2B():
    global _struct_7d2B
    if _struct_7d2B is None:
        _struct_7d2B = struct.Struct("<7d2B")
    return _struct_7d2B
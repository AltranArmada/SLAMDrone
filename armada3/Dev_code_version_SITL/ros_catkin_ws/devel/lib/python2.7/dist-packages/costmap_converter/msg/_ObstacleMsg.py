# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from costmap_converter/ObstacleMsg.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import std_msgs.msg

class ObstacleMsg(genpy.Message):
  _md5sum = "a37f90c2e2437cb2b570855e1c703488"
  _type = "costmap_converter/ObstacleMsg"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """# Special types:
# Polygon with 1 vertex: Point obstacle (you might also specify a non-zero value for radius)
# Polygon with 2 vertices: Line obstacle
# Polygon with more than 2 vertices: First and last points are assumed to be connected

std_msgs/Header header

# Obstacle footprint (polygon descriptions)
geometry_msgs/Polygon polygon

# Specify the radius for circular/point obstacles
float64 radius

# Obstacle ID
# Specify IDs in order to provide (temporal) relationships
# between obstacles among multiple messages.
int64 id

# Individual orientation (centroid)
geometry_msgs/Quaternion orientation

# Individual velocities (centroid)
geometry_msgs/TwistWithCovariance velocities


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
MSG: geometry_msgs/Polygon
#A specification of a polygon where the first and last points are assumed to be connected
Point32[] points

================================================================================
MSG: geometry_msgs/Point32
# This contains the position of a point in free space(with 32 bits of precision).
# It is recommeded to use Point wherever possible instead of Point32.  
# 
# This recommendation is to promote interoperability.  
#
# This message is designed to take up less space when sending
# lots of points at once, as in the case of a PointCloud.  

float32 x
float32 y
float32 z
================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: geometry_msgs/TwistWithCovariance
# This expresses velocity in free space with uncertainty.

Twist twist

# Row-major representation of the 6x6 covariance matrix
# The orientation parameters use a fixed-axis representation.
# In order, the parameters are:
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)
float64[36] covariance

================================================================================
MSG: geometry_msgs/Twist
# This expresses velocity in free space broken into its linear and angular parts.
Vector3  linear
Vector3  angular

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z"""
  __slots__ = ['header','polygon','radius','id','orientation','velocities']
  _slot_types = ['std_msgs/Header','geometry_msgs/Polygon','float64','int64','geometry_msgs/Quaternion','geometry_msgs/TwistWithCovariance']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,polygon,radius,id,orientation,velocities

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ObstacleMsg, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.polygon is None:
        self.polygon = geometry_msgs.msg.Polygon()
      if self.radius is None:
        self.radius = 0.
      if self.id is None:
        self.id = 0
      if self.orientation is None:
        self.orientation = geometry_msgs.msg.Quaternion()
      if self.velocities is None:
        self.velocities = geometry_msgs.msg.TwistWithCovariance()
    else:
      self.header = std_msgs.msg.Header()
      self.polygon = geometry_msgs.msg.Polygon()
      self.radius = 0.
      self.id = 0
      self.orientation = geometry_msgs.msg.Quaternion()
      self.velocities = geometry_msgs.msg.TwistWithCovariance()

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
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.polygon.points)
      buff.write(_struct_I.pack(length))
      for val1 in self.polygon.points:
        _x = val1
        buff.write(_struct_3f.pack(_x.x, _x.y, _x.z))
      _x = self
      buff.write(_struct_dq10d.pack(_x.radius, _x.id, _x.orientation.x, _x.orientation.y, _x.orientation.z, _x.orientation.w, _x.velocities.twist.linear.x, _x.velocities.twist.linear.y, _x.velocities.twist.linear.z, _x.velocities.twist.angular.x, _x.velocities.twist.angular.y, _x.velocities.twist.angular.z))
      buff.write(_struct_36d.pack(*self.velocities.covariance))
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
      if self.polygon is None:
        self.polygon = geometry_msgs.msg.Polygon()
      if self.orientation is None:
        self.orientation = geometry_msgs.msg.Quaternion()
      if self.velocities is None:
        self.velocities = geometry_msgs.msg.TwistWithCovariance()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.polygon.points = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Point32()
        _x = val1
        start = end
        end += 12
        (_x.x, _x.y, _x.z,) = _struct_3f.unpack(str[start:end])
        self.polygon.points.append(val1)
      _x = self
      start = end
      end += 96
      (_x.radius, _x.id, _x.orientation.x, _x.orientation.y, _x.orientation.z, _x.orientation.w, _x.velocities.twist.linear.x, _x.velocities.twist.linear.y, _x.velocities.twist.linear.z, _x.velocities.twist.angular.x, _x.velocities.twist.angular.y, _x.velocities.twist.angular.z,) = _struct_dq10d.unpack(str[start:end])
      start = end
      end += 288
      self.velocities.covariance = _struct_36d.unpack(str[start:end])
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
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.polygon.points)
      buff.write(_struct_I.pack(length))
      for val1 in self.polygon.points:
        _x = val1
        buff.write(_struct_3f.pack(_x.x, _x.y, _x.z))
      _x = self
      buff.write(_struct_dq10d.pack(_x.radius, _x.id, _x.orientation.x, _x.orientation.y, _x.orientation.z, _x.orientation.w, _x.velocities.twist.linear.x, _x.velocities.twist.linear.y, _x.velocities.twist.linear.z, _x.velocities.twist.angular.x, _x.velocities.twist.angular.y, _x.velocities.twist.angular.z))
      buff.write(self.velocities.covariance.tostring())
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
      if self.polygon is None:
        self.polygon = geometry_msgs.msg.Polygon()
      if self.orientation is None:
        self.orientation = geometry_msgs.msg.Quaternion()
      if self.velocities is None:
        self.velocities = geometry_msgs.msg.TwistWithCovariance()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.polygon.points = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Point32()
        _x = val1
        start = end
        end += 12
        (_x.x, _x.y, _x.z,) = _struct_3f.unpack(str[start:end])
        self.polygon.points.append(val1)
      _x = self
      start = end
      end += 96
      (_x.radius, _x.id, _x.orientation.x, _x.orientation.y, _x.orientation.z, _x.orientation.w, _x.velocities.twist.linear.x, _x.velocities.twist.linear.y, _x.velocities.twist.linear.z, _x.velocities.twist.angular.x, _x.velocities.twist.angular.y, _x.velocities.twist.angular.z,) = _struct_dq10d.unpack(str[start:end])
      start = end
      end += 288
      self.velocities.covariance = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=36)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_36d = struct.Struct("<36d")
_struct_3I = struct.Struct("<3I")
_struct_3f = struct.Struct("<3f")
_struct_dq10d = struct.Struct("<dq10d")

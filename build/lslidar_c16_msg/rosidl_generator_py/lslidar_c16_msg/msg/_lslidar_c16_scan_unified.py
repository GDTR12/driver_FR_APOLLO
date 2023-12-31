# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lslidar_c16_msg:msg/LslidarC16ScanUnified.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LslidarC16ScanUnified(type):
    """Metaclass of message 'LslidarC16ScanUnified'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('lslidar_c16_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'lslidar_c16_msg.msg.LslidarC16ScanUnified')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lslidar_c16_scan_unified
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lslidar_c16_scan_unified
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lslidar_c16_scan_unified
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lslidar_c16_scan_unified
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lslidar_c16_scan_unified

            from lslidar_c16_msg.msg import LslidarC16Packet
            if LslidarC16Packet.__class__._TYPE_SUPPORT is None:
                LslidarC16Packet.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LslidarC16ScanUnified(metaclass=Metaclass_LslidarC16ScanUnified):
    """Message class 'LslidarC16ScanUnified'."""

    __slots__ = [
        '_header',
        '_basetime',
        '_packets',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'basetime': 'uint64',
        'packets': 'sequence<lslidar_c16_msg/LslidarC16Packet>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['lslidar_c16_msg', 'msg'], 'LslidarC16Packet')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.basetime = kwargs.get('basetime', int())
        self.packets = kwargs.get('packets', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.basetime != other.basetime:
            return False
        if self.packets != other.packets:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def basetime(self):
        """Message field 'basetime'."""
        return self._basetime

    @basetime.setter
    def basetime(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'basetime' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'basetime' field must be an unsigned integer in [0, 18446744073709551615]"
        self._basetime = value

    @builtins.property
    def packets(self):
        """Message field 'packets'."""
        return self._packets

    @packets.setter
    def packets(self, value):
        if __debug__:
            from lslidar_c16_msg.msg import LslidarC16Packet
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, LslidarC16Packet) for v in value) and
                 True), \
                "The 'packets' field must be a set or sequence and each value of type 'LslidarC16Packet'"
        self._packets = value

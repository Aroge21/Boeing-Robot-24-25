# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:msg/ROI.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ROI(type):
    """Metaclass of message 'ROI'."""

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
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.msg.ROI')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__roi
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__roi
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__roi
            cls._TYPE_SUPPORT = module.type_support_msg__msg__roi
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__roi

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ROI(metaclass=Metaclass_ROI):
    """Message class 'ROI'."""

    __slots__ = [
        '_y_min',
        '_y_max',
        '_x_min',
        '_x_max',
        '_scale',
    ]

    _fields_and_field_types = {
        'y_min': 'int16',
        'y_max': 'int16',
        'x_min': 'int16',
        'x_max': 'int16',
        'scale': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.y_min = kwargs.get('y_min', int())
        self.y_max = kwargs.get('y_max', int())
        self.x_min = kwargs.get('x_min', int())
        self.x_max = kwargs.get('x_max', int())
        self.scale = kwargs.get('scale', float())

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
        if self.y_min != other.y_min:
            return False
        if self.y_max != other.y_max:
            return False
        if self.x_min != other.x_min:
            return False
        if self.x_max != other.x_max:
            return False
        if self.scale != other.scale:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def y_min(self):
        """Message field 'y_min'."""
        return self._y_min

    @y_min.setter
    def y_min(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'y_min' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'y_min' field must be an integer in [-32768, 32767]"
        self._y_min = value

    @builtins.property
    def y_max(self):
        """Message field 'y_max'."""
        return self._y_max

    @y_max.setter
    def y_max(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'y_max' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'y_max' field must be an integer in [-32768, 32767]"
        self._y_max = value

    @builtins.property
    def x_min(self):
        """Message field 'x_min'."""
        return self._x_min

    @x_min.setter
    def x_min(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'x_min' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'x_min' field must be an integer in [-32768, 32767]"
        self._x_min = value

    @builtins.property
    def x_max(self):
        """Message field 'x_max'."""
        return self._x_max

    @x_max.setter
    def x_max(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'x_max' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'x_max' field must be an integer in [-32768, 32767]"
        self._x_max = value

    @builtins.property
    def scale(self):
        """Message field 'scale'."""
        return self._scale

    @scale.setter
    def scale(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'scale' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'scale' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._scale = value

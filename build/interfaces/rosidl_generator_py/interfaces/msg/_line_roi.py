# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:msg/LineROI.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LineROI(type):
    """Metaclass of message 'LineROI'."""

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
                'interfaces.msg.LineROI')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__line_roi
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__line_roi
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__line_roi
            cls._TYPE_SUPPORT = module.type_support_msg__msg__line_roi
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__line_roi

            from interfaces.msg import ROI
            if ROI.__class__._TYPE_SUPPORT is None:
                ROI.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LineROI(metaclass=Metaclass_LineROI):
    """Message class 'LineROI'."""

    __slots__ = [
        '_roi_up',
        '_roi_center',
        '_roi_down',
    ]

    _fields_and_field_types = {
        'roi_up': 'interfaces/ROI',
        'roi_center': 'interfaces/ROI',
        'roi_down': 'interfaces/ROI',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['interfaces', 'msg'], 'ROI'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['interfaces', 'msg'], 'ROI'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['interfaces', 'msg'], 'ROI'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from interfaces.msg import ROI
        self.roi_up = kwargs.get('roi_up', ROI())
        from interfaces.msg import ROI
        self.roi_center = kwargs.get('roi_center', ROI())
        from interfaces.msg import ROI
        self.roi_down = kwargs.get('roi_down', ROI())

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
        if self.roi_up != other.roi_up:
            return False
        if self.roi_center != other.roi_center:
            return False
        if self.roi_down != other.roi_down:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def roi_up(self):
        """Message field 'roi_up'."""
        return self._roi_up

    @roi_up.setter
    def roi_up(self, value):
        if __debug__:
            from interfaces.msg import ROI
            assert \
                isinstance(value, ROI), \
                "The 'roi_up' field must be a sub message of type 'ROI'"
        self._roi_up = value

    @builtins.property
    def roi_center(self):
        """Message field 'roi_center'."""
        return self._roi_center

    @roi_center.setter
    def roi_center(self, value):
        if __debug__:
            from interfaces.msg import ROI
            assert \
                isinstance(value, ROI), \
                "The 'roi_center' field must be a sub message of type 'ROI'"
        self._roi_center = value

    @builtins.property
    def roi_down(self):
        """Message field 'roi_down'."""
        return self._roi_down

    @roi_down.setter
    def roi_down(self, value):
        if __debug__:
            from interfaces.msg import ROI
            assert \
                isinstance(value, ROI), \
                "The 'roi_down' field must be a sub message of type 'ROI'"
        self._roi_down = value

# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_robot_controller_msgs:srv/GetBusServoState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetBusServoState_Request(type):
    """Metaclass of message 'GetBusServoState_Request'."""

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
            module = import_type_support('ros_robot_controller_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros_robot_controller_msgs.srv.GetBusServoState_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_bus_servo_state__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_bus_servo_state__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_bus_servo_state__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_bus_servo_state__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_bus_servo_state__request

            from ros_robot_controller_msgs.msg import GetBusServoCmd
            if GetBusServoCmd.__class__._TYPE_SUPPORT is None:
                GetBusServoCmd.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetBusServoState_Request(metaclass=Metaclass_GetBusServoState_Request):
    """Message class 'GetBusServoState_Request'."""

    __slots__ = [
        '_cmd',
    ]

    _fields_and_field_types = {
        'cmd': 'sequence<ros_robot_controller_msgs/GetBusServoCmd>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros_robot_controller_msgs', 'msg'], 'GetBusServoCmd')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cmd = kwargs.get('cmd', [])

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
        if self.cmd != other.cmd:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cmd(self):
        """Message field 'cmd'."""
        return self._cmd

    @cmd.setter
    def cmd(self, value):
        if __debug__:
            from ros_robot_controller_msgs.msg import GetBusServoCmd
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
                 all(isinstance(v, GetBusServoCmd) for v in value) and
                 True), \
                "The 'cmd' field must be a set or sequence and each value of type 'GetBusServoCmd'"
        self._cmd = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetBusServoState_Response(type):
    """Metaclass of message 'GetBusServoState_Response'."""

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
            module = import_type_support('ros_robot_controller_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros_robot_controller_msgs.srv.GetBusServoState_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_bus_servo_state__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_bus_servo_state__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_bus_servo_state__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_bus_servo_state__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_bus_servo_state__response

            from ros_robot_controller_msgs.msg import BusServoState
            if BusServoState.__class__._TYPE_SUPPORT is None:
                BusServoState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetBusServoState_Response(metaclass=Metaclass_GetBusServoState_Response):
    """Message class 'GetBusServoState_Response'."""

    __slots__ = [
        '_success',
        '_state',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'state': 'sequence<ros_robot_controller_msgs/BusServoState>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros_robot_controller_msgs', 'msg'], 'BusServoState')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.state = kwargs.get('state', [])

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
        if self.success != other.success:
            return False
        if self.state != other.state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            from ros_robot_controller_msgs.msg import BusServoState
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
                 all(isinstance(v, BusServoState) for v in value) and
                 True), \
                "The 'state' field must be a set or sequence and each value of type 'BusServoState'"
        self._state = value


class Metaclass_GetBusServoState(type):
    """Metaclass of service 'GetBusServoState'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ros_robot_controller_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros_robot_controller_msgs.srv.GetBusServoState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_bus_servo_state

            from ros_robot_controller_msgs.srv import _get_bus_servo_state
            if _get_bus_servo_state.Metaclass_GetBusServoState_Request._TYPE_SUPPORT is None:
                _get_bus_servo_state.Metaclass_GetBusServoState_Request.__import_type_support__()
            if _get_bus_servo_state.Metaclass_GetBusServoState_Response._TYPE_SUPPORT is None:
                _get_bus_servo_state.Metaclass_GetBusServoState_Response.__import_type_support__()


class GetBusServoState(metaclass=Metaclass_GetBusServoState):
    from ros_robot_controller_msgs.srv._get_bus_servo_state import GetBusServoState_Request as Request
    from ros_robot_controller_msgs.srv._get_bus_servo_state import GetBusServoState_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

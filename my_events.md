># **MY_EVENT_H**

> __/* \
** EPITECH PROJECT, 2021\
** runner - my_event.h\
** File description:\
** jitter jitter\
*/__

# Safety
> **#ifndef MY_EVENT_H_\
#define MY_EVENT_H_**

# Required libs
> __#include <SFML/Window/Event.h>__

# **Data structs**

# struct event_tactile
> __typedef struct event_tactile_s__\
__{__\
    __sfEvtTouchBegan *tb;__             ///< A touch event began (data in event.touch)\
    __sfEvtTouchMoved *tm;__             ///< A touch moved (data in event.touch)\
    __sfEvtTouchEnded *tend;__             ///< A touch event ended (data in event.touch)\
__} event_tactile_t;__

# struct event_joystick

> __typedef struct event_joystick_s__\
__{__\
    __sfEvtJoystickButtonPressed *jdown;__  ///< A joystick button was pressed (data in event.joystickButton)\
    __sfEvtJoystickButtonReleased *jup;__ ///< A joystick button was released (data in event.joystickButton)\
    __sfEvtJoystickMoved *jmoved;__         ///< The joystick moved along an axis (data in event.joystickMove)\
    __sfEvtJoystickConnected *jcon;__      ///< A joystick was connected (data in event.joystickConnect)\
    __sfEvtJoystickDisconnected *jdcon;__   ///< A joystick was disconnected (data in event.joystickConnect)\
__} event_joystick_t;__

# struct event

> __typedef struct event_s__\
__{__\
    __sfEvtKeyPressed *kdown;__           ///< A key was pressed (data in event.key)\
    __sfEvtKeyReleased *kup;__            ///< A key was released (data in event.key)\
    __sfEvtMouseWheelScrolled *scroll;__     ///< The mouse wheel was scrolled (data in event.mouseWheelScroll)\
    __sfEvtMouseButtonPressed *mbdown;__     ///< A mouse button was pressed (data in event.mouseButton)\
    __sfEvtMouseButtonReleased *mbup;__    ///< A mouse button was released (data in event.mouseButton)\
    __sfEvtMouseMoved *mm;__             ///< The mouse cursor moved (data in event.mouseMove)\
    __event_joystick_t joystick;__\
    __event_tactile_t et;__\
__} event_t;__

# **I/O Scan Struct**

# struct tactile

> **typedef struct event_to_listen_tactile_s {**\
    __int tb;__\
    __int tm;__\
    __int tend;__\
__} event_to_listen_tactile_t;__

# struct joystick

> **typedef struct event_to_listen_joystick_s** {\
    __int jdown;__\
    __int jup;__\
    __int jmoved;__\
    __int jcon;__\
    __int jdcon;__\
__} event_to_listen_joystick_t;__

# struct event_listen

> __typedef struct event_to_listen_s {__\
    **int kup;**\
    **int kdown;**\
    **int scroll;**\
    **int mbdown;**\
    **int mbup;**\
    **int mm;**\
    **event_to_listen_joystick_t ej;** //event joystick\
    **event_to_listen_tactile_t et;** //evvenrt tactile\
**} event_to_listen_t;**

# **Functions**

> **event_t on_event(event_t event, event_to_listen_t e_t_l);**\ 

# **Closing security**
> **#endif**
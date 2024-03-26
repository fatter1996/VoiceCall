include("TCPSocket/TCPSocket.pri")
include("UDPSocket/UDPSocket.pri")
include("VoiceDialog/VoiceDialog.pri")

HEADERS += \
    $$PWD/CallButton.h \
    $$PWD/Universal.h \
    $$PWD/VoiceCallWnd.h

SOURCES += \
    $$PWD/CallButton.cpp \
    $$PWD/Universal.cpp \
    $$PWD/VoiceCallWnd.cpp

FORMS += \
    $$PWD/VoiceCallWnd.ui

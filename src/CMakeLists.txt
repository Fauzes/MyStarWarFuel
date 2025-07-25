project(MyStarWarFuel)

set( MyStarWarFuel_source MoveComand.cpp
                        MyVector.cpp
                        MySpaceship.cpp
                        IMovingObject.cpp
                        MyAngle.cpp
                        IRotatingObject.cpp
                        RotateComand.cpp
                        BurnFueldComand.cpp
                        CheckFuelComand.cpp
                        ComandExeption.cpp
                        IFuelObject.cpp
                        Icommand.cpp
                        comandhendlerex.cpp
                        comandwritelog.cpp
                        logCntr.cpp
                        MacroComand.cpp)

add_library( MyStarWarFuel STATIC ${MyStarWarFuel_source}
    ../inc/IMovingObject.h ../inc/MoveComand.h ../inc/MySpaceship.h ../inc/MyVector.h  ../inc/MyAngle.h ../inc/IRotatingObject.h ../inc/RotateComand.h
    ../inc/BurnFueldComand.h ../inc/CheckFuelComand.h ../inc/ComandExeption.h ../inc/CommandTypes.h ../inc/IFuelObject.h ../inc/ICommand.h
    ../inc/comandhendlerex.h ../inc/comandwritelog.h ../inc/logCntr.h ../inc/MacroComand.h)


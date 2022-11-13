
set(MAIN_SRC
  main.cpp
  lighting.h
  lightint.cpp
  television.h
  television.cpp
  airconditioner.h
  airconditioner.cpp
  bath.h
  bath.cpp
  homectrlfacade.h
  homectrlfacade.cpp
)

add_executable(
  ${PROJECT_NAME}
  ${MAIN_SRC}
)


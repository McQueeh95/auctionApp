cmake_minimum_required(VERSION 3.16)

project(auctionApplication VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)
find_package(Qt6 REQUIRED COMPONENTS Sql)


set(PROJECT_SOURCES
        main.cpp
        widget.cpp
        widget.h
        widget.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(auctionApplication
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        lot.h lot.cpp
        admin.h admin.cpp
        databasemanager.h databasemanager.cpp
        form.h form.cpp form.ui
        registrationquery.h registrationquery.cpp
        loginquery.h loginquery.cpp
        addlotdialog.h addlotdialog.cpp addlotdialog.ui
        uiquery.h uiquery.cpp
        seller.h seller.cpp
        sellerform.h sellerform.cpp sellerform.ui
        lotquery.h lotquery.cpp

        sellerslots.h sellerslots.cpp sellerslots.ui
        sellersquery.h sellersquery.cpp
        lottablemodel.h lottablemodel.cpp
        signup.h signup.cpp signup.ui
        windowController.h
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET auctionApplication APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(auctionApplication SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(auctionApplication
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(auctionApplication PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(auctionApplication PRIVATE Qt6::Sql)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.auctionApplication)
endif()
set_target_properties(auctionApplication PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS auctionApplication
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(auctionApplication)
endif()

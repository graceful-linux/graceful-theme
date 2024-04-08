# icon-theme
#install(DIRECTORY
#        ${CMAKE_SOURCE_DIR}/icon-theme/icons/actions
#        ${CMAKE_SOURCE_DIR}/icon-theme/icons/animations
#        ${CMAKE_SOURCE_DIR}/icon-theme/icons/applets
#        ${CMAKE_SOURCE_DIR}/icon-theme/icons/apps
#        ${CMAKE_SOURCE_DIR}/icon-theme/icons/categories
#        ${CMAKE_SOURCE_DIR}/icon-theme/icons/devices
#        ${CMAKE_SOURCE_DIR}/icon-theme/icons/emblems
#        ${CMAKE_SOURCE_DIR}/icon-theme/icons/emotes
#        ${CMAKE_SOURCE_DIR}/icon-theme/icons/mimetypes
#        ${CMAKE_SOURCE_DIR}/icon-theme/icons/places
#        ${CMAKE_SOURCE_DIR}/icon-theme/icons/preferences
#        ${CMAKE_SOURCE_DIR}/icon-theme/icons/status
#        DESTINATION /usr/share/icons/graceful-linux)
#
#install(FILES
#        ${CMAKE_SOURCE_DIR}/icon-theme/icons/LICENSE
#        ${CMAKE_SOURCE_DIR}/icon-theme/icons/index.theme
#        DESTINATION /usr/share/icons/graceful-linux)
#

# gtk3-theme
install(FILES
        ${CMAKE_SOURCE_DIR}/icon-theme/gtk3-theme/index.theme
        DESTINATION  /usr/share/themes/graceful-linux/)

install(FILES
        ${CMAKE_SOURCE_DIR}/icon-theme/gtk3-theme/settings.ini
        DESTINATION  /etc/gtk-3.0/)

install(DIRECTORY
        ${CMAKE_SOURCE_DIR}/icon-theme/gtk3-theme/other
        ${CMAKE_SOURCE_DIR}/icon-theme/gtk3-theme/arrows
        ${CMAKE_SOURCE_DIR}/icon-theme/gtk3-theme/radio-objects
        ${CMAKE_SOURCE_DIR}/icon-theme/gtk3-theme/title-buttons
        ${CMAKE_SOURCE_DIR}/icon-theme/gtk3-theme/checkbox-objects
        ${CMAKE_SOURCE_DIR}/icon-theme/gtk3-theme/scale-slider-marks
        DESTINATION /usr/share/themes/graceful-linux/gtk-3.0/)

install(FILES
        ${CMAKE_SOURCE_DIR}/icon-theme/gtk3-theme/gtk.css
        DESTINATION  /usr/share/themes/graceful-linux/gtk-3.0/)

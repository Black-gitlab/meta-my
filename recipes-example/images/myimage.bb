require recipes-core/images/core-image-minimal.bb

IMAGE_INSTALL += "usbutils"

IMAGE_NAME = "myimage"

IMAGE_INSTALL_append = " mymakefile"
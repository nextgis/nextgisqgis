FROM ubuntu:18.04

# This will make apt-get install without question
ARG DEBIAN_FRONTEND=noninteractive
# ENV TZ 'UTC' ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone && tzdata

RUN apt-get update \
  && apt-get install -y \
    apt-transport-https ca-certificates \
    python3-pip \
    curl \
    dumb-init \
    # ninja-build \
    git \
    devscripts \
    debhelper \
    equivs \
    build-essential \
    bash \
    cmake \
    # flex \
    # bison \
    libproj-dev \
    libgeos-dev \
    libgdal-dev \
    libspatialindex-dev \
    libsqlite3-dev \
    libspatialite-dev \
    libqca-qt5-2-dev \
    libzip-dev \
    libqt5svg5-dev \
    qt5keychain-dev \
    # libexiv2-dev \
    qt3d5-dev \
    qt3d-assimpsceneimport-plugin \
    qt3d-defaultgeometryloader-plugin \
    qt3d-gltfsceneio-plugin \
    qt3d-scene2d-plugin

COPY . /root/ngqgis/

WORKDIR /root/ngqgis/build

RUN cmake .. \
        # -DQT5_3DEXTRA_LIBRARY="/usr/lib/x86_64-linux-gnu/libQt53DExtras.so" \
        # -DQT5_3DEXTRA_INCLUDE_DIR="/root/ngqgis/external/qt3dextra-headers" \
        # -DQt53DExtras_DIR="/root/ngqgis/external/qt3dextra-headers/cmake/Qt53DExtras" \
        # -DCMAKE_PREFIX_PATH="/root/ngqgis/external/qt3dextra-headers" \
        -DCMAKE_INSTALL_PREFIX=install \
        # -DUSING_NINJA=ON \
        # -G Ninja \
    && cmake --build . \
        --target install \
        --config Release \
        -- -j8

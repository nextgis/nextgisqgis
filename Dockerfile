FROM ubuntu:20.04

# This will make apt-get install without question
ARG DEBIAN_FRONTEND=noninteractive

RUN apt-get update -y && \
	apt-get -y install --no-install-recommends --yes language-pack-ru \
	apt-transport-https ca-certificates curl gnupg && \
	echo "deb https://rm.nextgis.com/api/repo/11/deb focal main" | tee -a /etc/apt/sources.list && \
	curl -s -L https://rm.nextgis.com/api/repo/11/deb/key.gpg | apt-key add - && \
	apt-get update -y && apt-get install -y \
    bash \
    git \    
    build-essential \
    cmake cmake-data \
    libproj-dev \
    libgeos-dev \
    libgdal-dev \
    libspatialindex-dev \
    libsqlite3-dev \
    libspatialite-dev \
    libqca-qt5-2-dev \
    libzip-dev \
    libexpat1-dev \
    libgsl-dev \
    libpq-dev \
    libspatialindex-dev \
    libspatialite-dev \
    opencl-headers \    
    libqt5svg5-dev \
    qt5keychain-dev \
    # libexiv2-dev \
    qt3d5-dev \
    # qt3d-assimpsceneimport-plugin \
    # qt3d-defaultgeometryloader-plugin \
    # qt3d-gltfsceneio-plugin \
    # qt3d-scene2d-plugin \
    libqca-qt5-2-dev \
    # libqca-qt5-2-plugins \
    libqscintilla2-qt5-dev \
    libsqlite3-dev \
    libqwt-qt5-dev \
            #    libqt5xmlpatterns5-dev,
    qt5keychain-dev \
            #    qt3d-assimpsceneimport-plugin,
            #    qt3d-defaultgeometryloader-plugin,
            #    qt3d-gltfsceneio-plugin,
            #    qt3d-scene2d-plugin,
    qtbase5-dev \
    qtbase5-private-dev \
    qttools5-dev-tools \
    qttools5-dev \
    qtdeclarative5-dev \    
    python3-dev

COPY . /root/ngqgis/

WORKDIR /root/ngqgis/build

RUN cmake .. \
        -DCMAKE_INSTALL_PREFIX=install \
        -DSKIP_DEFAULTS=ON \
        -DBUILD_SHARED_LIBS=ON \
        -DPACKAGE_VENDOR=NextGIS \
        -DBUILD_TESTING=OFF \
        -DCMAKE_BUILD_TYPE=Release \
        -DWITH_BINDINGS=OFF -DWITH_OAUTH2_PLUGIN=OFF -DWITH_3D=OFF -DWITH_QGIS_PROCESS=OFF \
    && cmake --build . \
        --target install \
        --config Release -- -j8

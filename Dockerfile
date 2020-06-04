FROM ubuntu:18.04

# This will make apt-get install without question
ARG DEBIAN_FRONTEND=noninteractive
ENV TZ 'UTC'

RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone && apt-get update \
  && apt-get install -y \
    apt-transport-https ca-certificates tzdata \
    python3-pip \
    curl \
    dumb-init \
    git devscripts debhelper equivs build-essential bash cmake \
    flex bison libproj-dev libgeos-dev libgdal-dev libspatialindex-dev \
    libsqlite3-dev libspatialite-dev libqca-qt5-2-dev libzip-dev \
    libqt5svg5-dev libqt5serialport5-dev qtpositioning5-dev qt5keychain-dev

COPY . /root/ngqgis/

WORKDIR /root/ngqgis/src/core/build

RUN cmake .. -DCMAKE_INSTALL_PREFIX=install && \
    cmake --build . --target install --config Release

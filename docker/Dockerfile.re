# Wallpaper Engine reverse-engineering environment
# Ubuntu base + Ghidra (headless) + radare2/rizin + binutils + Python RE toolkit
FROM ubuntu:24.04

ENV DEBIAN_FRONTEND=noninteractive
ENV LANG=C.UTF-8

# ---- Core toolchain + RE tools from apt ----
RUN apt-get update && apt-get install -y --no-install-recommends \
        ca-certificates \
        wget \
        curl \
        unzip \
        xz-utils \
        file \
        xxd \
        git \
        bsdmainutils \
        binutils \
        binutils-mingw-w64-x86-64 \
        binutils-mingw-w64-i686 \
        mingw-w64-common \
        less \
        jq \
        && rm -rf /var/lib/apt/lists/*

# ---- Python 3 + RE libraries ----
RUN apt-get update && apt-get install -y --no-install-recommends \
        python3 \
        python3-pip \
        python3-venv \
    && rm -rf /var/lib/apt/lists/* \
    && pip3 install --no-cache-dir --break-system-packages \
        pefile \
        lief \
        capstone \
        unicorn \
        keystone-engine \
        r2pipe \
        frida-tools

# ---- rizin / radare2 from apt (most robust; secondary to Ghidra) ----
RUN apt-get update && apt-get install -y --no-install-recommends \
        radare2 \
    && rm -rf /var/lib/apt/lists/*

# ---- Ghidra (headless analyzer) ----
# Requires JDK. Install Temurin (Eclipse Adoptium) JDK 21.
RUN apt-get update && apt-get install -y --no-install-recommends \
        gnupg \
        software-properties-common \
    && mkdir -p /etc/apt/keyrings \
    && wget -qO - https://packages.adoptium.net/artifactory/api/gpg/key/public \
        | gpg --dearmor -o /etc/apt/keyrings/adoptium.gpg \
    && echo "deb [signed-by=/etc/apt/keyrings/adoptium.gpg] https://packages.adoptium.net/artifactory/deb $(. /etc/os-release && echo $VERSION_CODENAME) main" \
        > /etc/apt/sources.list.d/adoptium.list \
    && apt-get update && apt-get install -y --no-install-recommends temurin-21-jdk \
    && rm -rf /var/lib/apt/lists/*

ARG GHIDRA_VERSION=12.1.2
ARG GHIDRA_DATE=20260605
RUN wget -q "https://github.com/NationalSecurityAgency/ghidra/releases/download/Ghidra_${GHIDRA_VERSION}_build/ghidra_${GHIDRA_VERSION}_PUBLIC_${GHIDRA_DATE}.zip" -O /tmp/ghidra.zip \
    && unzip -q /tmp/ghidra.zip -d /opt \
    && ln -s /opt/ghidra_${GHIDRA_VERSION}_PUBLIC /opt/ghidra \
    && rm /tmp/ghidra.zip

ENV JAVA_HOME=/usr/lib/jvm/temurin-21-jdk-amd64
ENV GHIDRA_HOME=/opt/ghidra
ENV PATH="${PATH}:/opt/ghidra/support"

# ---- Workspace ----
RUN mkdir -p /work/we /work/out /work/scripts
WORKDIR /work

# Default: keep container alive for interactive/headless runs
CMD ["sleep", "infinity"]

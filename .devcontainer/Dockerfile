# This image setups the base users for dev container.
FROM mcr.microsoft.com/devcontainers/base:debian-12

ENV DEBIAN_FRONTEND=noninteractive

# Updating
RUN apt-get update && \
    apt-get install -y sudo

# Installing g++-12 and setting it as default g++.
RUN apt-get install -y g++-12 && \
    update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-12 120 && \
    update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-12 120 && \
    update-alternatives --set g++ /usr/bin/g++-12 && \
    update-alternatives --set gcc /usr/bin/gcc-12

# Installing c++ debugger
RUN apt-get install -y gdb=13.1-3

# Installing clang for better error hilgihts syntax on writing
RUN sudo apt-get install clang-tidy=1:14.0-55.7~deb12u1 -y

# Installing python
RUN sudo apt install python3=3.11.2-1+b1
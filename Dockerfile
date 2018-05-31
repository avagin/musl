FROM alpine

RUN apk update && apk add \
	gcc \
	build-base  \
	coreutils \
	git \
	pkgconfig \
	vim \
	bash

COPY . /musl
WORKDIR /musl

RUN ./configure
RUN make -j 4

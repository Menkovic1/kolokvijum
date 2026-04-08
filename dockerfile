FROM gcc:latest

WORKDIR /app

COPY main.c .

RUN gcc main.c -o program

CMD ["./program"]


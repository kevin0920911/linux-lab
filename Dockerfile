FROM ubuntu:22.04



RUN apt update && \
    apt upgrade -y && \
    apt install -y gcc g++ python3 python3-pip vim sudo 

RUN useradd -ms /bin/bash user 
COPY ./src/ /home/user
RUN chmod +x /home/user/init.sh && \
    /home/user/init.sh && \
    rm -f /home/user/init.sh

USER user
WORKDIR /home/user
ENV TERM=xterm-color



CMD ["/bin/bash"]
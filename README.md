# Linux Lab for NCYU

This is Linux Lab (2025) for NCYU Hacker Club.

## How to use
```bash
git clone https://github.com/kevin0920911/linux-lab.git
cd linux-lab 

docker build -t linux-lab .
docker run -it --name linux-lab linux-lab
```

Then, if you want to enter the container, just run:
```bash
docker start -ai linux-lab 
```
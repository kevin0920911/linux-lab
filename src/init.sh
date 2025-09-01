echo 'user:password' | chpasswd
usermod -aG sudo user


cd /home/user

# 1. Welcome
echo "export PATH=$PATH:/usr/games && echo -e 'Welcome The Flag is: NCYU{Welc0me_t0_th3_1abbbbb}'" >> .bashrc

# 2. ls_cat

# 3. cd 
mkdir /etc/mygo
mkdir /var/avemujica

mv cd/part1 cd/part1
mv cd/part2 /etc/mygo/mygo
mv cd/part3 /var/avemujica/avemujica

# 4. hidden file

# 5. chmod 
gcc -o /home/user/chmod/chmod /home/user/chmod/chmod.c 
chown user /home/user/chmod/chmod 
chmod -x /home/user/chmod/chmod 
rm -f /home/user/chmod/chmod.c 

# 6. mv & mkdir 
gcc -o /home/user/mv_mkdir/mv /home/user/mv_mkdir/mv.c 
chown user /home/user/mv_mkdir/mv
rm -f /home/user/mv_mkdir/mv.c 

# 7. write file 
gcc -o /home/user/write_file/write_file /home/user/write_file/write_file.c 
chown user /home/user/write_file/write_file
rm -f /home/user/write_file/write_file.c 


chown -R user:user /home/user

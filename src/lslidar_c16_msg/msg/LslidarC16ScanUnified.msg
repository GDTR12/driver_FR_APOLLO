#lslidar C16 scan packets

std_msgs/Header           header         #standard ros message header
uint64           basetime       #time to the top of hour
LslidarC16Packet[] packets        #vector of raw packets

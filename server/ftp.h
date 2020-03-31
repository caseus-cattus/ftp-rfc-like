enum ac_commands {USER, PASS, ACCT, CWD, CDUP, SMNTP, REIN, QUIT};
enum tp_commands {PORT=8, PASV, TYPE, STRU, MODE};
enum ftps_commands {RETR=13, STOR, STOU, APPE, ALLO, REST, RNFR, RNTO, 
                    ABOR, DELE, RMD, MKD, PWD, LIST, NLST, SITE, SYST, STAT, HELP, NOOP};
enum f_repls {PP='1', PC='2', PI='3', TNC='4', PNC='5'};
enum s_repls {S='0', I='1', C='2', A='3', U='4', F='5'};
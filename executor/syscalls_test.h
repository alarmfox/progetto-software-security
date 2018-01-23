// AUTOGENERATED FILE

#if 0
#define GOARCH "32"
#define SYZ_REVISION "b9cbeaf95275aebd2bf6f299b1071f67344453a5"
unsigned syscall_count = 82;
call_t syscalls[] = {
	{"mmap", 0, (syscall_t)mmap},
	{"mutate0", 0, (syscall_t)mutate0},
	{"mutate1", 0, (syscall_t)mutate1},
	{"mutate2", 0, (syscall_t)mutate2},
	{"mutate3", 0, (syscall_t)mutate3},
	{"mutate4", 0, (syscall_t)mutate4},
	{"mutate5", 0, (syscall_t)mutate5},
	{"mutate6", 0, (syscall_t)mutate6},
	{"mutate7", 0, (syscall_t)mutate7},
	{"mutate8", 0, (syscall_t)mutate8},
	{"serialize0", 0, (syscall_t)serialize0},
	{"serialize1", 0, (syscall_t)serialize1},
	{"syz_test", 0, (syscall_t)syz_test},
	{"syz_test$align0", 0, (syscall_t)syz_test},
	{"syz_test$align1", 0, (syscall_t)syz_test},
	{"syz_test$align2", 0, (syscall_t)syz_test},
	{"syz_test$align3", 0, (syscall_t)syz_test},
	{"syz_test$align4", 0, (syscall_t)syz_test},
	{"syz_test$align5", 0, (syscall_t)syz_test},
	{"syz_test$align6", 0, (syscall_t)syz_test},
	{"syz_test$array0", 0, (syscall_t)syz_test},
	{"syz_test$array1", 0, (syscall_t)syz_test},
	{"syz_test$array2", 0, (syscall_t)syz_test},
	{"syz_test$bf0", 0, (syscall_t)syz_test},
	{"syz_test$bf1", 0, (syscall_t)syz_test},
	{"syz_test$csum_encode", 0, (syscall_t)syz_test},
	{"syz_test$csum_ipv4", 0, (syscall_t)syz_test},
	{"syz_test$csum_ipv4_tcp", 0, (syscall_t)syz_test},
	{"syz_test$csum_ipv4_udp", 0, (syscall_t)syz_test},
	{"syz_test$csum_ipv6_icmp", 0, (syscall_t)syz_test},
	{"syz_test$csum_ipv6_tcp", 0, (syscall_t)syz_test},
	{"syz_test$csum_ipv6_udp", 0, (syscall_t)syz_test},
	{"syz_test$end0", 0, (syscall_t)syz_test},
	{"syz_test$end1", 0, (syscall_t)syz_test},
	{"syz_test$hint_data", 0, (syscall_t)syz_test},
	{"syz_test$int", 0, (syscall_t)syz_test},
	{"syz_test$length0", 0, (syscall_t)syz_test},
	{"syz_test$length1", 0, (syscall_t)syz_test},
	{"syz_test$length10", 0, (syscall_t)syz_test},
	{"syz_test$length11", 0, (syscall_t)syz_test},
	{"syz_test$length12", 0, (syscall_t)syz_test},
	{"syz_test$length13", 0, (syscall_t)syz_test},
	{"syz_test$length14", 0, (syscall_t)syz_test},
	{"syz_test$length15", 0, (syscall_t)syz_test},
	{"syz_test$length16", 0, (syscall_t)syz_test},
	{"syz_test$length17", 0, (syscall_t)syz_test},
	{"syz_test$length18", 0, (syscall_t)syz_test},
	{"syz_test$length19", 0, (syscall_t)syz_test},
	{"syz_test$length2", 0, (syscall_t)syz_test},
	{"syz_test$length20", 0, (syscall_t)syz_test},
	{"syz_test$length21", 0, (syscall_t)syz_test},
	{"syz_test$length22", 0, (syscall_t)syz_test},
	{"syz_test$length23", 0, (syscall_t)syz_test},
	{"syz_test$length3", 0, (syscall_t)syz_test},
	{"syz_test$length4", 0, (syscall_t)syz_test},
	{"syz_test$length5", 0, (syscall_t)syz_test},
	{"syz_test$length6", 0, (syscall_t)syz_test},
	{"syz_test$length7", 0, (syscall_t)syz_test},
	{"syz_test$length8", 0, (syscall_t)syz_test},
	{"syz_test$length9", 0, (syscall_t)syz_test},
	{"syz_test$missing_resource", 0, (syscall_t)syz_test},
	{"syz_test$opt0", 0, (syscall_t)syz_test},
	{"syz_test$opt1", 0, (syscall_t)syz_test},
	{"syz_test$opt2", 0, (syscall_t)syz_test},
	{"syz_test$opt3", 0, (syscall_t)syz_test},
	{"syz_test$recur0", 0, (syscall_t)syz_test},
	{"syz_test$recur1", 0, (syscall_t)syz_test},
	{"syz_test$recur2", 0, (syscall_t)syz_test},
	{"syz_test$regression0", 0, (syscall_t)syz_test},
	{"syz_test$regression1", 0, (syscall_t)syz_test},
	{"syz_test$regression2", 0, (syscall_t)syz_test},
	{"syz_test$res0", 0, (syscall_t)syz_test},
	{"syz_test$res1", 0, (syscall_t)syz_test},
	{"syz_test$struct", 0, (syscall_t)syz_test},
	{"syz_test$text_x86_16", 0, (syscall_t)syz_test},
	{"syz_test$text_x86_32", 0, (syscall_t)syz_test},
	{"syz_test$text_x86_64", 0, (syscall_t)syz_test},
	{"syz_test$text_x86_real", 0, (syscall_t)syz_test},
	{"syz_test$union0", 0, (syscall_t)syz_test},
	{"syz_test$union1", 0, (syscall_t)syz_test},
	{"syz_test$union2", 0, (syscall_t)syz_test},
	{"syz_test$vma0", 0, (syscall_t)syz_test},

};
#endif

#if 0
#define GOARCH "64"
#define SYZ_REVISION "ed5cfa6417cbae5ddc998f597dcdbb96fea761c3"
unsigned syscall_count = 82;
call_t syscalls[] = {
	{"mmap", 0, (syscall_t)mmap},
	{"mutate0", 0, (syscall_t)mutate0},
	{"mutate1", 0, (syscall_t)mutate1},
	{"mutate2", 0, (syscall_t)mutate2},
	{"mutate3", 0, (syscall_t)mutate3},
	{"mutate4", 0, (syscall_t)mutate4},
	{"mutate5", 0, (syscall_t)mutate5},
	{"mutate6", 0, (syscall_t)mutate6},
	{"mutate7", 0, (syscall_t)mutate7},
	{"mutate8", 0, (syscall_t)mutate8},
	{"serialize0", 0, (syscall_t)serialize0},
	{"serialize1", 0, (syscall_t)serialize1},
	{"syz_test", 0, (syscall_t)syz_test},
	{"syz_test$align0", 0, (syscall_t)syz_test},
	{"syz_test$align1", 0, (syscall_t)syz_test},
	{"syz_test$align2", 0, (syscall_t)syz_test},
	{"syz_test$align3", 0, (syscall_t)syz_test},
	{"syz_test$align4", 0, (syscall_t)syz_test},
	{"syz_test$align5", 0, (syscall_t)syz_test},
	{"syz_test$align6", 0, (syscall_t)syz_test},
	{"syz_test$array0", 0, (syscall_t)syz_test},
	{"syz_test$array1", 0, (syscall_t)syz_test},
	{"syz_test$array2", 0, (syscall_t)syz_test},
	{"syz_test$bf0", 0, (syscall_t)syz_test},
	{"syz_test$bf1", 0, (syscall_t)syz_test},
	{"syz_test$csum_encode", 0, (syscall_t)syz_test},
	{"syz_test$csum_ipv4", 0, (syscall_t)syz_test},
	{"syz_test$csum_ipv4_tcp", 0, (syscall_t)syz_test},
	{"syz_test$csum_ipv4_udp", 0, (syscall_t)syz_test},
	{"syz_test$csum_ipv6_icmp", 0, (syscall_t)syz_test},
	{"syz_test$csum_ipv6_tcp", 0, (syscall_t)syz_test},
	{"syz_test$csum_ipv6_udp", 0, (syscall_t)syz_test},
	{"syz_test$end0", 0, (syscall_t)syz_test},
	{"syz_test$end1", 0, (syscall_t)syz_test},
	{"syz_test$hint_data", 0, (syscall_t)syz_test},
	{"syz_test$int", 0, (syscall_t)syz_test},
	{"syz_test$length0", 0, (syscall_t)syz_test},
	{"syz_test$length1", 0, (syscall_t)syz_test},
	{"syz_test$length10", 0, (syscall_t)syz_test},
	{"syz_test$length11", 0, (syscall_t)syz_test},
	{"syz_test$length12", 0, (syscall_t)syz_test},
	{"syz_test$length13", 0, (syscall_t)syz_test},
	{"syz_test$length14", 0, (syscall_t)syz_test},
	{"syz_test$length15", 0, (syscall_t)syz_test},
	{"syz_test$length16", 0, (syscall_t)syz_test},
	{"syz_test$length17", 0, (syscall_t)syz_test},
	{"syz_test$length18", 0, (syscall_t)syz_test},
	{"syz_test$length19", 0, (syscall_t)syz_test},
	{"syz_test$length2", 0, (syscall_t)syz_test},
	{"syz_test$length20", 0, (syscall_t)syz_test},
	{"syz_test$length21", 0, (syscall_t)syz_test},
	{"syz_test$length22", 0, (syscall_t)syz_test},
	{"syz_test$length23", 0, (syscall_t)syz_test},
	{"syz_test$length3", 0, (syscall_t)syz_test},
	{"syz_test$length4", 0, (syscall_t)syz_test},
	{"syz_test$length5", 0, (syscall_t)syz_test},
	{"syz_test$length6", 0, (syscall_t)syz_test},
	{"syz_test$length7", 0, (syscall_t)syz_test},
	{"syz_test$length8", 0, (syscall_t)syz_test},
	{"syz_test$length9", 0, (syscall_t)syz_test},
	{"syz_test$missing_resource", 0, (syscall_t)syz_test},
	{"syz_test$opt0", 0, (syscall_t)syz_test},
	{"syz_test$opt1", 0, (syscall_t)syz_test},
	{"syz_test$opt2", 0, (syscall_t)syz_test},
	{"syz_test$opt3", 0, (syscall_t)syz_test},
	{"syz_test$recur0", 0, (syscall_t)syz_test},
	{"syz_test$recur1", 0, (syscall_t)syz_test},
	{"syz_test$recur2", 0, (syscall_t)syz_test},
	{"syz_test$regression0", 0, (syscall_t)syz_test},
	{"syz_test$regression1", 0, (syscall_t)syz_test},
	{"syz_test$regression2", 0, (syscall_t)syz_test},
	{"syz_test$res0", 0, (syscall_t)syz_test},
	{"syz_test$res1", 0, (syscall_t)syz_test},
	{"syz_test$struct", 0, (syscall_t)syz_test},
	{"syz_test$text_x86_16", 0, (syscall_t)syz_test},
	{"syz_test$text_x86_32", 0, (syscall_t)syz_test},
	{"syz_test$text_x86_64", 0, (syscall_t)syz_test},
	{"syz_test$text_x86_real", 0, (syscall_t)syz_test},
	{"syz_test$union0", 0, (syscall_t)syz_test},
	{"syz_test$union1", 0, (syscall_t)syz_test},
	{"syz_test$union2", 0, (syscall_t)syz_test},
	{"syz_test$vma0", 0, (syscall_t)syz_test},

};
#endif

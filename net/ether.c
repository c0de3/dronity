#include <stdlib.h>
#include <linux/if_ether.h>
#include "net.h"
#include "utils.h"
#include "compat.h"

static const int ether_types[] = {

	/*These are the defined Ethernet Protocol ID's. */
	ETH_P_LOOP, ETH_P_PUP, ETH_P_PUPAT, ETH_P_IP,
	ETH_P_X25, ETH_P_ARP, ETH_P_BPQ, ETH_P_IEEEPUP,
	ETH_P_IEEEPUPAT, ETH_P_BATMAN, ETH_P_DEC, ETH_P_DNA_DL,
	ETH_P_DNA_RC, ETH_P_DNA_RT, ETH_P_LAT, ETH_P_DIAG,
	ETH_P_CUST, ETH_P_SCA, ETH_P_RARP,
	ETH_P_ATALK, ETH_P_AARP, ETH_P_8021Q, ETH_P_IPX,
	ETH_P_IPV6, ETH_P_SLOW, ETH_P_WCCP,

	ETH_P_PPP_DISC, ETH_P_PPP_SES, ETH_P_MPLS_UC, ETH_P_MPLS_MC,
	ETH_P_ATMMPOA, ETH_P_LINK_CTL, ETH_P_ATMFATE,

	ETH_P_AOE, ETH_P_8021AD, ETH_P_802_EX1,
	ETH_P_TIPC, ETH_P_8021AH, ETH_P_MVRP, ETH_P_PRP,
	ETH_P_TDLS, ETH_P_QINQ1,
	ETH_P_QINQ2, ETH_P_QINQ3, ETH_P_AF_IUCV,

	ETH_P_802_3_MIN,

	/* Non DIX types. Won't clash for 1500 types. */
	ETH_P_802_3, ETH_P_AX25, ETH_P_ALL, ETH_P_802_2,
	ETH_P_SNAP, ETH_P_DDCMP, ETH_P_WAN_PPP, ETH_P_PPP_MP,
	ETH_P_LOCALTALK, ETH_P_CANFD, ETH_P_PPPTALK,
	ETH_P_TR_802_2, ETH_P_MOBITEX, ETH_P_CONTROL, ETH_P_IRDA,
	ETH_P_ECONET, ETH_P_HDLC, ETH_P_ARCNET,
	ETH_P_CAIF,
};

#define NR_ETHER_TYPES ARRAY_SIZE(ether_types)

int get_random_ether_type(void)
{
	return ether_types[rand() % NR_ETHER_TYPES];
}

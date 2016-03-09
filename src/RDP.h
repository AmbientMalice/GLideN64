#ifndef RDP_H
#define RDP_H

#define MAXCMD                  0x100000
#define CMD_OVERFLOW_RESERVE    32
static uint32_t rdp_cmd_data[MAXCMD + CMD_OVERFLOW_RESERVE];

typedef struct
{
	u32 w2, w3;
	u32 cmd_ptr;
	u32 cmd_cur;
	u32 cmd_data[MAXCMD + 32];
} RDPInfo;

extern RDPInfo RDP;

void RDP_Init();
void RDP_Half_1(u32 _c);
void RDP_ProcessRDPList();
void RDP_RepeatLastLoadBlock();
void RDP_SetScissor(u32 w0, u32 w1);

#endif


// Function: FUN_1404caa04
// Addr: 1404caa04
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404caa04(undefined4 param_1)

{
  byte *in_RAX;
  char cVar1;
  char unaff_BL;
  longlong unaff_RSI;
  
  uRam00000001b451aa0c = uRam00000001b451aa0c & (uint)in_RAX;
  *in_RAX = *in_RAX | (byte)in_RAX;
  bRam000000014de6aa46 = bRam000000014de6aa46 | 0x33;
  cVar1 = (char)param_1;
  in_RAX[unaff_RSI * 8 + 0x210049] = in_RAX[unaff_RSI * 8 + 0x210049] + cVar1;
  *in_RAX = *in_RAX + (byte)in_RAX;
  bRam000000014de6aa56 = bRam000000014de6aa56 | 0x33;
  in_RAX[unaff_RSI * 8 + 0xa210049] = in_RAX[unaff_RSI * 8 + 0xa210049] + cVar1;
  rdpmc(param_1);
  rdpmc(CONCAT31((int3)((uint)param_1 >> 8),cVar1 + unaff_BL));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


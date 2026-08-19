// Function: FUN_1404a7878
// Addr: 1404a7878
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7878(char *param_1,char param_2)

{
  byte bVar1;
  short in_AX;
  byte *pbVar2;
  char unaff_BH;
  longlong unaff_RSI;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  
  pbVar2 = (byte *)(ulonglong)(uint)(int)in_AX;
  unaff_RDI[unaff_RSI * 2 + 0x4a] = unaff_RDI[unaff_RSI * 2 + 0x4a] + unaff_BH;
  *param_1 = *param_1 + (char)((ushort)in_AX >> 8);
  bVar1 = (byte)in_AX;
  *pbVar2 = *pbVar2 + bVar1;
  pbVar2[-0x67fff5c4] = pbVar2[-0x67fff5c4] + param_2;
  unaff_RDI[unaff_RSI * 2 + 0x4a] = unaff_RDI[unaff_RSI * 2 + 0x4a] + unaff_BH;
  *param_1 = *param_1 + bVar1;
  *unaff_RDI = *unaff_RDI + (char)param_1;
  *(uint *)(pbVar2 + in_FS_OFFSET) = *(uint *)(pbVar2 + in_FS_OFFSET) | (int)in_AX;
  sysenter();
  *pbVar2 = *pbVar2 | bVar1;
  rdmsr((int)param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


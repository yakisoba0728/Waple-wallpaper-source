// Function: FUN_1404be958
// Addr: 1404be958
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be958(char *param_1,char param_2)

{
  undefined4 uVar1;
  uint uVar2;
  char *pcVar3;
  byte unaff_BL;
  byte bVar4;
  byte unaff_BH;
  char cVar5;
  undefined4 *unaff_RSI;
  bool bVar6;
  
  bVar6 = CARRY1(bRam00000001744bf929,unaff_BH);
  bRam00000001744bf929 = bRam00000001744bf929 + unaff_BH;
  uRam00000000a82b0010 = uRam00000000a82b0010 + -0x57d4fff0 + (uint)bVar6;
  bVar4 = unaff_BL & bRam0000000030440022;
  uVar2 = uRam00000000a82b0010 + 0xa82b0010;
  pcVar3 = (char *)(ulonglong)uVar2;
  pcVar3[0x14] = pcVar3[0x14] + unaff_BH + (0x57d4ffef < uRam00000000a82b0010);
  *pcVar3 = *pcVar3 + (char)param_1;
  cVar5 = (char)*unaff_RSI + -8;
  pcVar3[0x53] = pcVar3[0x53] + bVar4;
  *param_1 = *param_1 + cVar5;
  *pcVar3 = *pcVar3 + (char)uVar2;
  pcVar3[-0x10ffd9ff] = pcVar3[-0x10ffd9ff] + param_2;
  uVar1 = *unaff_RSI;
  pcVar3[0x53] = pcVar3[0x53] + bVar4;
  *param_1 = *param_1 + cVar5 + (char)uVar1;
  *(char *)((longlong)pcVar3 * 2) = *(char *)((longlong)pcVar3 * 2) - (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


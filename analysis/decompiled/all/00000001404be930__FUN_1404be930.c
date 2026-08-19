// Function: FUN_1404be930
// Addr: 1404be930
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be930(char *param_1,undefined8 param_2,char param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  undefined8 in_RAX;
  byte unaff_BL;
  byte bVar6;
  byte unaff_BH;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  bool bVar7;
  char *pcVar4;
  undefined1 *puVar5;
  
  cVar2 = (char)in_RAX + '\x18';
  pcVar4 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2);
  *param_4 = *param_4;
  *pcVar4 = *pcVar4 + cVar2;
  *param_1 = *param_1 + (char)((ulonglong)param_2 >> 8);
  uVar3 = (uint)pcVar4 & 0x25fd5500;
  puVar5 = (undefined1 *)(ulonglong)uVar3;
  puVar5[unaff_RBP * 8] = puVar5[unaff_RBP * 8] + (char)param_2;
  *param_4 = *param_4;
  *puVar5 = *puVar5;
  pcVar4 = (char *)(ulonglong)((uVar3 >> 8 & 0x25fb31) << 8);
  puVar5 = (undefined1 *)(unaff_RDI + unaff_RBP * 8);
  *puVar5 = *puVar5;
  *param_4 = *param_4;
  *pcVar4 = *pcVar4 + param_3;
  bVar7 = CARRY1(bRam00000001744bf929,unaff_BH);
  bRam00000001744bf929 = bRam00000001744bf929 + unaff_BH;
  uRam00000000a82b0010 = uRam00000000a82b0010 + -0x57d4fff0 + (uint)bVar7;
  bVar6 = unaff_BL & bRam0000000030440022;
  uVar3 = uRam00000000a82b0010 + 0xa82b0010;
  pcVar4 = (char *)(ulonglong)uVar3;
  pcVar4[0x14] = pcVar4[0x14] + unaff_BH + (0x57d4ffef < uRam00000000a82b0010);
  *pcVar4 = *pcVar4 + (char)param_1;
  cVar2 = (char)*unaff_RSI + -8;
  pcVar4[0x53] = pcVar4[0x53] + bVar6;
  *param_1 = *param_1 + cVar2;
  *pcVar4 = *pcVar4 + (char)uVar3;
  pcVar4[-0x10ffd9ff] = pcVar4[-0x10ffd9ff] + (char)param_2;
  uVar1 = *unaff_RSI;
  pcVar4[0x53] = pcVar4[0x53] + bVar6;
  *param_1 = *param_1 + cVar2 + (char)uVar1;
  *(char *)((longlong)pcVar4 * 2) = *(char *)((longlong)pcVar4 * 2) - (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


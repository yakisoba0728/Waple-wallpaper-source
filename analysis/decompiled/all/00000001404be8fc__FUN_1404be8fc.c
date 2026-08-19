// Function: FUN_1404be8fc
// Addr: 1404be8fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be8fc(char *param_1,undefined1 *param_2,char param_3,byte *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint *in_RAX;
  char cVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  byte bVar10;
  longlong unaff_RBX;
  char cVar11;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  uint unaff_EDI;
  undefined4 unaff_0000003c;
  bool bVar12;
  char *pcVar4;
  undefined1 *puVar5;
  
  cVar11 = (char)((ulonglong)param_1 >> 8);
  cVar6 = (char)param_1;
  *in_RAX = *in_RAX & (uint)param_1;
  param_2[unaff_RBX] = param_2[unaff_RBX] | (byte)((ulonglong)in_RAX >> 8);
  uVar9 = (uint)unaff_RBX ^ unaff_EDI;
  uVar2 = (uint)in_RAX & 0x25fd5500;
  pcVar4 = (char *)(ulonglong)uVar2;
  cVar7 = (char)param_2;
  pcVar4[unaff_RBP * 8] = pcVar4[unaff_RBP * 8] + cVar7;
  *param_4 = *param_4;
  *param_2 = *param_2;
  *pcVar4 = *pcVar4 + cVar6;
  uVar2 = uVar2 >> 8;
  uVar3 = (uVar2 & 0x25fe7a) << 8;
  puVar5 = (undefined1 *)(ulonglong)uVar3;
  puVar5[unaff_RBP * 8] = puVar5[unaff_RBP * 8] + cVar11;
  *param_4 = *param_4 - 0x10;
  *puVar5 = *puVar5;
  *(char *)(unaff_RBP + -3) = *(char *)(unaff_RBP + -3) + cVar7;
  puVar5 = (undefined1 *)(ulonglong)uVar3;
  puVar5[unaff_RBP * 8] = puVar5[unaff_RBP * 8] + cVar11;
  *param_4 = *param_4 - 0x10;
  *puVar5 = *puVar5;
  *param_1 = *param_1 + (char)((ulonglong)param_2 >> 8);
  puVar5 = (undefined1 *)(ulonglong)uVar3;
  puVar5[unaff_RBP * 8] = puVar5[unaff_RBP * 8] + cVar7;
  *param_4 = *param_4 - 0x10;
  *puVar5 = *puVar5;
  pcVar4 = (char *)(ulonglong)((uVar2 & 0x25fa30) << 8);
  puVar5 = (undefined1 *)(CONCAT44(unaff_0000003c,unaff_EDI) + unaff_RBP * 8);
  *puVar5 = *puVar5;
  bVar8 = *param_4;
  *param_4 = *param_4 - 0x10;
  *pcVar4 = *pcVar4 + param_3 + (0xf < bVar8);
  bVar10 = (byte)(uVar9 >> 8);
  bVar12 = CARRY1(bRam00000001744bf929,bVar10);
  bRam00000001744bf929 = bRam00000001744bf929 + bVar10;
  uRam00000000a82b0010 = uRam00000000a82b0010 + -0x57d4fff0 + (uint)bVar12;
  bVar8 = (byte)uVar9 & bRam0000000030440022;
  uVar2 = uRam00000000a82b0010 + 0xa82b0010;
  pcVar4 = (char *)(ulonglong)uVar2;
  pcVar4[0x14] = pcVar4[0x14] + bVar10 + (0x57d4ffef < uRam00000000a82b0010);
  *pcVar4 = *pcVar4 + cVar6;
  cVar11 = (char)*unaff_RSI + -0x18;
  pcVar4[0x53] = pcVar4[0x53] + bVar8;
  *param_1 = *param_1 + cVar11;
  *pcVar4 = *pcVar4 + (char)uVar2;
  pcVar4[-0x10ffd9ff] = pcVar4[-0x10ffd9ff] + cVar7;
  uVar1 = *unaff_RSI;
  pcVar4[0x53] = pcVar4[0x53] + bVar8;
  *param_1 = *param_1 + cVar11 + (char)uVar1;
  *(char *)((longlong)pcVar4 * 2) = *(char *)((longlong)pcVar4 * 2) - cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


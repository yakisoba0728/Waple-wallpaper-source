// Function: FUN_1404cc7d8
// Addr: 1404cc7d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc7d8(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  char cVar7;
  uint *in_RAX;
  byte *pbVar5;
  char *pcVar6;
  char *pcVar8;
  byte bVar9;
  byte bVar10;
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  bVar9 = (byte)param_2;
  uVar4 = (uint)in_RAX;
  *in_RAX = *in_RAX & uVar4;
  uVar2 = *in_RAX;
  bVar3 = (byte)in_RAX;
  *(byte *)in_RAX = (char)*in_RAX + bVar3;
  pcVar8 = (char *)(param_1 + -1);
  if (pcVar8 == (char *)0x0 || (char)*in_RAX == '\0') {
    pbVar5 = (byte *)(ulonglong)(uVar4 ^ 0x351c2a00);
    pbVar5[unaff_RBP * 8 + 0x10010049] =
         pbVar5[unaff_RBP * 8 + 0x10010049] + (char)((uVar4 ^ 0x351c2a00) >> 8);
    *pbVar5 = *pbVar5 | bVar3;
    pbVar1 = pbVar5 + (longlong)pcVar8;
    bVar3 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar9;
    pbVar5[unaff_RDI] = pbVar5[unaff_RDI] + bVar10 + CARRY1(bVar3,bVar9);
    *pbVar5 = *pbVar5 + bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!SCARRY1((char)uVar2,bVar3)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = uVar4 + 0x351fa000;
  *(char *)(param_1 + 0x1f) = *(char *)(param_1 + 0x1f) + (char)(uVar4 >> 8);
  pcVar6 = (char *)(ulonglong)(uVar4 ^ 0x4cc71800);
  cVar7 = (char)((uVar4 ^ 0x4cc71800) >> 8);
  *pcVar8 = *pcVar8 + cVar7;
  *pcVar6 = *pcVar6 + (char)uVar4;
  pcVar6[0x6100351f] = pcVar6[0x6100351f] + cVar7;
  bRam000000018d13e023 = bRam000000018d13e023 & bVar10;
  *pcVar8 = *pcVar8 + (char)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


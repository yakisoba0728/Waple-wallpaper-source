// Function: FUN_1404a7cb8
// Addr: 1404a7cb8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a7d0f) overlaps instruction at (ram,0x0001404a7d0e)
    */

void FUN_1404a7cb8(byte *param_1,int param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint3 uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  char cVar9;
  undefined8 in_RAX;
  byte bVar10;
  uint *puVar11;
  char unaff_BH;
  char *pcVar12;
  longlong unaff_RBP;
  uint *unaff_RSI;
  uint *puVar13;
  longlong unaff_RDI;
  bool bVar14;
  char acStack_8 [8];
  char *pcVar8;
  
  cVar6 = (char)in_RAX * '\x02';
  iVar7 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar6);
  out((short)param_2,iVar7);
  *param_4 = *param_4 + cVar6;
  iVar7 = iVar7 + 0x70050004;
  uVar3 = (uint3)((uint)iVar7 >> 8);
  bVar4 = (char)iVar7 + 0x60;
  param_2 = param_2 + *(int *)((ulonglong)CONCAT31(uVar3,bVar4) + 2);
  *param_1 = *param_1 ^ bVar4;
  bVar4 = bVar4 | *(byte *)((ulonglong)CONCAT31(uVar3,bVar4) * 2);
  puVar11 = (uint *)(ulonglong)
                    CONCAT22((short)((uint)param_2 >> 0x10),
                             CONCAT11((byte)((uint)param_2 >> 8) |
                                      (&stack0x00000000)[CONCAT31(uVar3,bVar4)],(char)param_2));
  bVar10 = (byte)param_1;
  bVar14 = CARRY1((byte)*puVar11,bVar10);
  *(byte *)puVar11 = (byte)*puVar11 + bVar10;
  cVar6 = bVar4 + (char)*unaff_RSI;
  bVar5 = cVar6 + bVar14;
  pcVar8 = (char *)(ulonglong)CONCAT31(uVar3,bVar5);
  if (SCARRY1(bVar4,(char)*unaff_RSI) != SCARRY1(cVar6,bVar14)) {
    bVar14 = CARRY1(*param_1,bVar5);
    *param_1 = *param_1 + bVar5;
code_r0x0001404a7cfd:
    iRam00000001524b8e03 = iRam00000001524b8e03 + (int)pcVar8 + (uint)bVar14;
    *(byte *)puVar11 = (byte)*puVar11 + bVar10;
    if (param_1 == (byte *)0x1 || (byte)*puVar11 == 0) {
      *(char *)unaff_RSI = (char)*unaff_RSI;
      *pcVar8 = *pcVar8 + (char)pcVar8;
      *puVar11 = *puVar11 & (uint)&stack0x00000000;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)puVar11 = (byte)*puVar11 + (char)((ulonglong)pcVar8 >> 8);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  cVar6 = bVar5 + 2;
  pcVar8 = (char *)(ulonglong)CONCAT31(uVar3,cVar6);
  pcVar8[unaff_RBP * 2] = pcVar8[unaff_RBP * 2] + cVar6;
  *pcVar8 = *pcVar8 + cVar6;
  pbVar1 = (byte *)((longlong)(puVar11 + 0x2ab4480) + (longlong)param_1);
  *pbVar1 = *pbVar1;
  if ((POPCOUNT(*pbVar1) & 1U) == 0) {
    *param_1 = *param_1 + (char)((uint)iVar7 >> 8);
    *pcVar8 = *pcVar8 + cVar6;
    pcVar8[0x12000aac] = pcVar8[0x12000aac] + cVar6;
    puVar13 = unaff_RSI + 1;
    uVar2 = *unaff_RSI;
    bVar4 = (byte)uVar2 | *(byte *)(ulonglong)uVar2;
    pcVar8 = (char *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar4);
    pcVar12 = (char *)register0x00000020;
    if ((POPCOUNT(bVar4) & 1U) == 0) {
      bVar14 = CARRY1(*param_1,bVar4);
      *param_1 = *param_1 + bVar4;
      unaff_RSI = puVar13;
      goto code_r0x0001404a7cfd;
    }
  }
  else {
    pcVar12 = acStack_8;
    acStack_8[0] = '\x06';
    acStack_8[1] = '\0';
    acStack_8[2] = 'D';
    acStack_8[3] = -0x50;
    acStack_8[4] = -1;
    acStack_8[5] = -1;
    acStack_8[6] = -1;
    acStack_8[7] = -1;
    unaff_RDI = unaff_RDI + 1;
    puVar13 = (uint *)((longlong)unaff_RSI + 1);
    pcVar8 = (char *)CONCAT71((uint7)uVar3,10);
    acStack_8[unaff_RDI * 2] = acStack_8[unaff_RDI * 2] + unaff_BH;
    *param_1 = *param_1 + (char)acStack_8;
  }
  cVar6 = (char)pcVar8;
  *pcVar8 = *pcVar8 + cVar6;
  pcVar8[(longlong)puVar13 * 4 + 10] = pcVar8[(longlong)puVar13 * 4 + 10] + cVar6;
  puVar13 = puVar13 + 0xf0002ac;
  uVar2 = *puVar13;
  cVar9 = (char)((ulonglong)pcVar8 >> 8);
  *(char *)puVar13 = (char)*puVar13 + cVar9;
  if (SCARRY1((char)uVar2,cVar9) == (char)*puVar13 < '\0') {
    *param_1 = *param_1 + cVar9;
    *pcVar8 = *pcVar8 + cVar6;
    pcVar8[-0x51] = pcVar8[-0x51] + cVar9;
    pcVar8 = (char *)CONCAT71((int7)((ulonglong)pcVar8 >> 8),10);
    pcVar12[unaff_RDI * 2] = pcVar12[unaff_RDI * 2] + (char)((ulonglong)param_1 >> 8);
    *param_1 = *param_1 + (char)pcVar12;
    *(byte *)puVar11 = (byte)*puVar11 + bVar10;
    *pcVar8 = *pcVar8 + '\n';
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(char **)(pcVar12 + -8) = pcVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


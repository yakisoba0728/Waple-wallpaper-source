// Function: FUN_1404a7c60
// Addr: 1404a7c60
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a7d0f) overlaps instruction at (ram,0x0001404a7d0e)
    */

void FUN_1404a7c60(byte *param_1,char *param_2)

{
  undefined1 *puVar1;
  undefined3 uVar2;
  uint3 uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  char cVar11;
  char *in_RAX;
  char *pcVar9;
  byte *pbVar10;
  byte bVar12;
  byte bVar13;
  int iVar14;
  uint *puVar15;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  undefined8 *puVar16;
  longlong unaff_RBP;
  uint *unaff_RSI;
  uint *puVar17;
  longlong unaff_RDI;
  bool bVar18;
  undefined8 uStack_8;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  param_2[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] =
       param_2[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] + cVar6;
  *in_RAX = *in_RAX + cVar6;
  bVar4 = (byte)in_RAX | *(byte *)(ulonglong)(uint)(int)(short)in_RAX;
  uVar7 = CONCAT22((char)((ulonglong)in_RAX >> 8) >> 7,CONCAT11(0x98,bVar4));
  bVar4 = bVar4 | *(byte *)(ulonglong)uVar7;
  uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar4);
  pcVar9 = (char *)(ulonglong)uVar7;
  pbVar10 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4a);
  *pbVar10 = *pbVar10 ^ unaff_BH;
  *param_1 = *param_1 + 0x98;
  *(char *)((longlong)pcVar9 * 2) = *(char *)((longlong)pcVar9 * 2) + bVar4;
  param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] =
       param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] + cVar6;
  param_2[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] =
       param_2[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] + cVar6;
  *pcVar9 = *pcVar9 + cVar6;
  bVar4 = bVar4 | *(byte *)(ulonglong)(uint)(int)(short)uVar7;
  uVar7 = CONCAT22(0xff,CONCAT11(0x98,bVar4));
  uVar2 = (undefined3)(uVar7 >> 8);
  bVar4 = bVar4 | *(byte *)(ulonglong)uVar7;
  pcVar9 = (char *)(ulonglong)CONCAT31(uVar2,bVar4);
  pbVar10 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4a);
  *pbVar10 = *pbVar10 ^ unaff_BH;
  *param_1 = *param_1 + 0x98;
  *param_2 = *param_2 + bVar4;
  *pcVar9 = *pcVar9 + bVar4;
  pcVar9 = (char *)((ulonglong)CONCAT31(uVar2,bVar4) ^ 0x13);
  *pcVar9 = *pcVar9 + cVar6;
  bVar5 = (byte)pcVar9 | *(byte *)(ulonglong)(uint)(int)(short)pcVar9;
  uVar7 = CONCAT22(0xff,CONCAT11(0x98,bVar5));
  bVar4 = *(byte *)(ulonglong)uVar7;
  pbVar10 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4a);
  *pbVar10 = *pbVar10 ^ unaff_BH;
  *param_1 = *param_1 + 0x98;
  uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5 | bVar4) + 0x34050002;
  pbVar10 = (byte *)(ulonglong)uVar7;
  *pbVar10 = *pbVar10 | (byte)uVar7;
  bVar13 = (byte)((ulonglong)param_1 >> 8);
  pbVar10[-0x57b2fff6] = pbVar10[-0x57b2fff6] & bVar13;
  uVar2 = (undefined3)(uVar7 >> 8);
  bVar5 = (byte)uVar7 | *pbVar10;
  pbVar10 = (byte *)(ulonglong)CONCAT31(uVar2,bVar5);
  cVar6 = (char)(uVar7 >> 8);
  *param_1 = *param_1 + cVar6;
  *pbVar10 = *pbVar10 + bVar5;
  *pbVar10 = *pbVar10 + cVar6;
  bVar12 = (byte)param_1;
  *(char *)(unaff_RBP + -0x58) = *(char *)(unaff_RBP + -0x58) + bVar12;
  bVar4 = *pbVar10;
  *param_1 = *param_1 + (bVar5 | bVar4);
  iVar8 = CONCAT31(uVar2,bVar5 | bVar4) + 0x70050004;
  uVar3 = (uint3)((uint)iVar8 >> 8);
  bVar4 = (char)iVar8 + 0x60;
  iVar14 = (int)param_2 + *(int *)((ulonglong)CONCAT31(uVar3,bVar4) + 2);
  *param_1 = *param_1 ^ bVar4;
  bVar4 = bVar4 | *(byte *)((ulonglong)CONCAT31(uVar3,bVar4) * 2);
  puVar15 = (uint *)(ulonglong)
                    CONCAT22((short)((uint)iVar14 >> 0x10),
                             CONCAT11((byte)((uint)iVar14 >> 8) |
                                      (&stack0x00000000)[CONCAT31(uVar3,bVar4)],(char)iVar14));
  bVar18 = CARRY1((byte)*puVar15,bVar12);
  *(byte *)puVar15 = (byte)*puVar15 + bVar12;
  cVar6 = bVar4 + (char)*unaff_RSI;
  bVar5 = cVar6 + bVar18;
  pcVar9 = (char *)(ulonglong)CONCAT31(uVar3,bVar5);
  if (SCARRY1(bVar4,(char)*unaff_RSI) != SCARRY1(cVar6,bVar18)) {
    bVar18 = CARRY1(*param_1,bVar5);
    *param_1 = *param_1 + bVar5;
code_r0x0001404a7cfd:
    iRam00000001524b8e03 = iRam00000001524b8e03 + (int)pcVar9 + (uint)bVar18;
    *(byte *)puVar15 = (byte)*puVar15 + bVar12;
    if (param_1 == (byte *)0x1 || (byte)*puVar15 == 0) {
      *(char *)unaff_RSI = (char)*unaff_RSI;
      *pcVar9 = *pcVar9 + (char)pcVar9;
      *puVar15 = *puVar15 & (uint)&stack0x00000000;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)puVar15 = (byte)*puVar15 + (char)((ulonglong)pcVar9 >> 8);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  cVar6 = bVar5 + 2;
  pcVar9 = (char *)(ulonglong)CONCAT31(uVar3,cVar6);
  pcVar9[unaff_RBP * 2] = pcVar9[unaff_RBP * 2] + cVar6;
  *pcVar9 = *pcVar9 + cVar6;
  pbVar10 = (byte *)((longlong)(puVar15 + 0x2ab4480) + (longlong)param_1);
  *pbVar10 = *pbVar10;
  if ((POPCOUNT(*pbVar10) & 1U) == 0) {
    *param_1 = *param_1 + (char)((uint)iVar8 >> 8);
    *pcVar9 = *pcVar9 + cVar6;
    pcVar9[0x12000aac] = pcVar9[0x12000aac] + cVar6;
    puVar17 = unaff_RSI + 1;
    uVar7 = *unaff_RSI;
    bVar4 = (byte)uVar7 | *(byte *)(ulonglong)uVar7;
    pcVar9 = (char *)(ulonglong)CONCAT31((int3)(uVar7 >> 8),bVar4);
    puVar16 = (undefined8 *)register0x00000020;
    if ((POPCOUNT(bVar4) & 1U) == 0) {
      bVar18 = CARRY1(*param_1,bVar4);
      *param_1 = *param_1 + bVar4;
      unaff_RSI = puVar17;
      goto code_r0x0001404a7cfd;
    }
  }
  else {
    puVar16 = &uStack_8;
    uStack_8 = 0xffffffffb0440006;
    unaff_RDI = unaff_RDI + 1;
    puVar17 = (uint *)((longlong)unaff_RSI + 1);
    pcVar9 = (char *)CONCAT71((uint7)uVar3,10);
    puVar1 = (undefined1 *)((longlong)&uStack_8 + unaff_RDI * 2);
    *puVar1 = *puVar1;
    *param_1 = *param_1 + (char)&uStack_8;
  }
  cVar6 = (char)pcVar9;
  *pcVar9 = *pcVar9 + cVar6;
  pcVar9[(longlong)puVar17 * 4 + 10] = pcVar9[(longlong)puVar17 * 4 + 10] + cVar6;
  puVar17 = puVar17 + 0xf0002ac;
  uVar7 = *puVar17;
  cVar11 = (char)((ulonglong)pcVar9 >> 8);
  *(char *)puVar17 = (char)*puVar17 + cVar11;
  if (SCARRY1((char)uVar7,cVar11) == (char)*puVar17 < '\0') {
    *param_1 = *param_1 + cVar11;
    *pcVar9 = *pcVar9 + cVar6;
    pcVar9[-0x51] = pcVar9[-0x51] + cVar11;
    pcVar9 = (char *)CONCAT71((int7)((ulonglong)pcVar9 >> 8),10);
    *(char *)((longlong)puVar16 + unaff_RDI * 2) =
         *(char *)((longlong)puVar16 + unaff_RDI * 2) + bVar13;
    *param_1 = *param_1 + (char)puVar16;
    *(byte *)puVar15 = (byte)*puVar15 + bVar12;
    *pcVar9 = *pcVar9 + '\n';
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(char **)((longlong)puVar16 + -8) = pcVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


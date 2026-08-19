// Function: FUN_1404cbbe4
// Addr: 1404cbbe4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cbc84) overlaps instruction at (ram,0x0001404cbc83)
    */

void FUN_1404cbbe4(byte *param_1,ulonglong param_2)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  int in_EAX;
  uint uVar6;
  uint uVar7;
  undefined7 uVar11;
  char *pcVar9;
  char cVar12;
  char cVar14;
  char *unaff_RBX;
  longlong lVar13;
  char *unaff_RSI;
  undefined1 *unaff_RDI;
  char unaff_R12B;
  bool bVar15;
  byte *pbVar8;
  byte *pbVar10;
  
  cVar12 = (char)param_1;
  uVar6 = in_EAX + 0x90000d74;
  pbVar8 = (byte *)(ulonglong)uVar6;
  cVar5 = (char)param_2;
  if (SCARRY4(in_EAX,-0x6ffff28c)) {
code_r0x0001404cbc1f:
    unaff_RBX[(longlong)unaff_RDI * 4] = unaff_RBX[(longlong)unaff_RDI * 4] + cVar12;
    *param_1 = *param_1 + unaff_R12B;
    bVar3 = (byte)pbVar8;
    *pbVar8 = *pbVar8 + bVar3;
    pbVar10 = pbVar8 + -0x30ffcb90;
    bVar2 = *pbVar10;
    *pbVar10 = *pbVar10 + cVar5;
    uVar11 = (undefined7)((ulonglong)pbVar8 >> 8);
    if (SCARRY1(bVar2,cVar5)) {
      *(char *)((longlong)register0x00000020 + param_2 * 8) =
           *(char *)((longlong)register0x00000020 + param_2 * 8) + cVar5;
      uVar7 = (uint)CONCAT71(uVar11,bVar3 + *pbVar8);
      uVar6 = uVar7 + 0xf0000474;
      if (0xffffb8b < uVar7) {
        *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)uVar6;
        *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
        *(undefined1 *)(param_2 + 0x34) = *(undefined1 *)(param_2 + 0x34);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      unaff_RBX[(longlong)unaff_RSI * 2] = unaff_RBX[(longlong)unaff_RSI * 2] + cVar12;
      uVar1 = in((short)param_2);
      *unaff_RDI = uVar1;
      *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pbVar8 = *pbVar8 + bVar3;
    lVar13 = 0x1301004c;
    bVar4 = bVar3 + *pbVar8;
    uVar6 = (int)param_2 + *(int *)(param_2 + 0xf) + (uint)CARRY1(bVar3,*pbVar8);
    param_2 = (ulonglong)uVar6;
    bVar3 = (byte)((ulonglong)pbVar8 >> 8);
    *param_1 = *param_1 ^ bVar3;
    pbVar10 = (byte *)(CONCAT71(uVar11,bVar4) * 2);
    bVar2 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar4;
    pcVar9 = (char *)CONCAT62((int6)((ulonglong)pbVar8 >> 0x10),
                              CONCAT11(bVar3 + (char)(uVar6 >> 8) + CARRY1(bVar2,bVar4),bVar4));
    *pcVar9 = *pcVar9 + bVar4;
    bVar15 = 0x3ffffc3b < (uint)pcVar9;
    pbVar8 = (byte *)(ulonglong)((uint)pcVar9 + 0xc00003c4);
  }
  else {
    cVar14 = (char)((ulonglong)unaff_RBX >> 8);
    unaff_RBX = (char *)CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),
                                 CONCAT11(cVar14 + cVar12,(char)unaff_RBX));
    if (SCARRY1(cVar14,cVar12)) {
      *param_1 = *param_1 + (char)(uVar6 >> 8);
      goto code_r0x0001404cbc1f;
    }
    *pbVar8 = *pbVar8 + (byte)uVar6;
    lVar13 = 0x2d21004c;
    *pbVar8 = *pbVar8 | (byte)uVar6;
    register0x00000020 = (BADSPACEBASE *)&stack0xfffffffffffffff8;
    uVar6 = in_EAX + 0x680007a0U | *(uint *)(ulonglong)(in_EAX + 0x680007a0U) | 0xe4;
    uVar7 = uVar6 + 0xcf000c64;
    pbVar8 = (byte *)(ulonglong)uVar7;
    if (SCARRY4(uVar6,-0x30fff39c)) {
      *pbVar8 = *pbVar8 + cVar5;
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    bVar2 = (byte)uVar7;
    bVar15 = SCARRY1(cRam000000002d21004c,bVar2);
    cRam000000002d21004c = cRam000000002d21004c + bVar2;
    if (bVar15) {
      pcVar9 = (char *)((longlong)unaff_RDI * 4 + 0x2d21004c);
      *pcVar9 = *pcVar9 + cVar12;
      *param_1 = *param_1 + unaff_R12B;
      *pbVar8 = *pbVar8 + bVar2;
      unaff_RBX = (char *)CONCAT62(0x2d21,CONCAT11(cVar12,0x4c));
      cVar14 = *unaff_RBX;
      *unaff_RBX = *unaff_RBX + bVar2;
      pbVar10 = pbVar8;
      if (!SCARRY1(cVar14,bVar2)) goto code_r0x0001404cbc53;
      goto code_r0x0001404cbc1f;
    }
    bVar15 = CARRY1(bRam00000001004cc00d,bVar2);
    bRam00000001004cc00d = bRam00000001004cc00d + bVar2;
  }
  if (bVar15) {
    pcVar9 = (char *)(lVar13 + (longlong)unaff_RSI * 2);
    *pcVar9 = *pcVar9 + cVar12;
    uVar1 = in((short)param_2);
    *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar2 = (byte)(param_2 >> 8);
  cVar5 = (byte)pbVar8 + bVar2;
  pbVar10 = (byte *)CONCAT71((int7)((ulonglong)pbVar8 >> 8),cVar5);
  cVar14 = (char)((ulonglong)pbVar8 >> 8);
  if (CARRY1((byte)pbVar8,bVar2)) {
    pcVar9 = (char *)(lVar13 + 0x4c + (longlong)unaff_RDI * 4);
    *pcVar9 = *pcVar9 + (char)((ulonglong)param_1 >> 8);
    *param_1 = *param_1 + cVar14;
    *unaff_RSI = *unaff_RSI + cVar12;
    *pbVar10 = *pbVar10 + cVar5;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  pcVar9 = (char *)(lVar13 + 0x4c + (longlong)unaff_RDI * 4);
  *pcVar9 = *pcVar9 + cVar14;
code_r0x0001404cbc53:
  *param_1 = *param_1 + (char)((ulonglong)pbVar10 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


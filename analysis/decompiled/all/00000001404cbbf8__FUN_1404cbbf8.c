// Function: FUN_1404cbbf8
// Addr: 1404cbbf8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cbc84) overlaps instruction at (ram,0x0001404cbc83)
    */

void FUN_1404cbbf8(byte *param_1,ulonglong param_2)

{
  undefined1 uVar1;
  undefined3 uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte bVar9;
  int in_EAX;
  uint uVar6;
  char cVar10;
  uint uVar11;
  char cVar12;
  char *unaff_RBX;
  char *unaff_RSI;
  undefined1 *unaff_RDI;
  char unaff_R12B;
  bool bVar13;
  byte *pbVar7;
  byte *pbVar8;
  
  cVar10 = (char)param_1;
  uVar11 = in_EAX + 0xd7fffa2cU | *(uint *)(ulonglong)(in_EAX + 0xd7fffa2cU) | 0xe4;
  uVar6 = uVar11 + 0xcf000c64;
  pbVar7 = (byte *)(ulonglong)uVar6;
  cVar5 = (char)param_2;
  if (SCARRY4(uVar11,-0x30fff39c)) {
    *pbVar7 = *pbVar7 + cVar5;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  cVar12 = *unaff_RBX;
  bVar3 = (byte)uVar6;
  *unaff_RBX = *unaff_RBX + bVar3;
  if (SCARRY1(cVar12,bVar3)) {
    unaff_RBX[(longlong)unaff_RDI * 4] = unaff_RBX[(longlong)unaff_RDI * 4] + cVar10;
    *param_1 = *param_1 + unaff_R12B;
    *pbVar7 = *pbVar7 + bVar3;
    cVar12 = (char)((ulonglong)unaff_RBX >> 8);
    unaff_RBX = (char *)CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),
                                 CONCAT11(cVar12 + cVar10,(char)unaff_RBX));
    pbVar8 = pbVar7;
    if (!SCARRY1(cVar12,cVar10)) {
      cVar12 = *unaff_RBX;
      *unaff_RBX = *unaff_RBX + bVar3;
      if (!SCARRY1(cVar12,bVar3)) goto code_r0x0001404cbc53;
      unaff_RBX[(longlong)unaff_RDI * 4] = unaff_RBX[(longlong)unaff_RDI * 4] + cVar10;
      *param_1 = *param_1 + unaff_R12B;
      *pbVar7 = *pbVar7 + bVar3;
      pbVar8 = pbVar7 + -0x30ffcb90;
      bVar4 = *pbVar8;
      *pbVar8 = *pbVar8 + cVar5;
      uVar2 = (undefined3)(uVar6 >> 8);
      if (SCARRY1(bVar4,cVar5)) {
        (&stack0xfffffffffffffff8)[param_2 * 8] = (&stack0xfffffffffffffff8)[param_2 * 8] + cVar5;
        uVar11 = CONCAT31(uVar2,bVar3 + *pbVar7);
        uVar6 = uVar11 + 0xf0000474;
        if (uVar11 < 0xffffb8c) {
          unaff_RBX[(longlong)unaff_RSI * 2] = unaff_RBX[(longlong)unaff_RSI * 2] + cVar10;
          uVar1 = in((short)param_2);
          *unaff_RDI = uVar1;
          *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)uVar6;
        *(undefined1 *)(param_2 + 0x34) = *(undefined1 *)(param_2 + 0x34);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *pbVar7 = *pbVar7 + bVar3;
      unaff_RBX = (char *)0x1301004c;
      bVar4 = bVar3 + *pbVar7;
      uVar11 = (int)param_2 + *(int *)(param_2 + 0xf) + (uint)CARRY1(bVar3,*pbVar7);
      param_2 = (ulonglong)uVar11;
      bVar9 = (byte)(uVar6 >> 8);
      *param_1 = *param_1 ^ bVar9;
      pbVar7 = (byte *)((ulonglong)CONCAT31(uVar2,bVar4) * 2);
      bVar3 = *pbVar7;
      *pbVar7 = *pbVar7 + bVar4;
      uVar11 = CONCAT22((short)(uVar6 >> 0x10),
                        CONCAT11(bVar9 + (char)(uVar11 >> 8) + CARRY1(bVar3,bVar4),bVar4));
      *(char *)(ulonglong)uVar11 = *(char *)(ulonglong)uVar11 + bVar4;
      bVar13 = 0x3ffffc3b < uVar11;
      pbVar7 = (byte *)(ulonglong)(uVar11 + 0xc00003c4);
      goto code_r0x0001404cbc49;
    }
  }
  else {
    bVar13 = CARRY1(bRam00000001004cc00d,bVar3);
    bRam00000001004cc00d = bRam00000001004cc00d + bVar3;
code_r0x0001404cbc49:
    if (bVar13) {
      unaff_RBX[(longlong)unaff_RSI * 2] = unaff_RBX[(longlong)unaff_RSI * 2] + cVar10;
      uVar1 = in((short)param_2);
      *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar3 = (byte)(param_2 >> 8);
    cVar5 = (byte)pbVar7 + bVar3;
    pbVar8 = (byte *)CONCAT71((int7)((ulonglong)pbVar7 >> 8),cVar5);
    if (CARRY1((byte)pbVar7,bVar3)) {
      unaff_RBX[(longlong)unaff_RDI * 4 + 0x4c] =
           unaff_RBX[(longlong)unaff_RDI * 4 + 0x4c] + (char)((ulonglong)param_1 >> 8);
      *param_1 = *param_1 + (char)((ulonglong)pbVar7 >> 8);
      *unaff_RSI = *unaff_RSI + cVar10;
      *pbVar8 = *pbVar8 + cVar5;
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  unaff_RBX[(longlong)unaff_RDI * 4 + 0x4c] =
       unaff_RBX[(longlong)unaff_RDI * 4 + 0x4c] + (char)((ulonglong)pbVar8 >> 8);
code_r0x0001404cbc53:
  *param_1 = *param_1 + (char)((ulonglong)pbVar8 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


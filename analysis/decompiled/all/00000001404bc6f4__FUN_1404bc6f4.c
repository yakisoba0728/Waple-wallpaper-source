// Function: FUN_1404bc6f4
// Addr: 1404bc6f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bc6f5) overlaps instruction at (ram,0x0001404bc6f4)
    */

void FUN_1404bc6f4(longlong param_1,longlong param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined7 uVar6;
  byte *in_RAX;
  int *piVar4;
  byte *pbVar5;
  char cVar7;
  byte bVar8;
  byte bVar9;
  undefined6 uVar10;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined8 *puVar11;
  char *pcVar12;
  ulonglong uVar13;
  undefined8 *unaff_RBP;
  undefined8 *puVar14;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  bool in_ZF;
  undefined8 uStack_5b;
  char acStack_53 [67];
  undefined8 uStack_10;
  
  uVar10 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  bVar8 = (byte)param_2;
  param_1 = param_1 + -1;
  if (param_1 == 0 || in_ZF != false) {
    uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
    bVar2 = (byte)in_RAX & *in_RAX;
    bVar2 = bVar2 & *(byte *)CONCAT71(uVar6,bVar2);
    cVar7 = (char)((ulonglong)param_1 >> 8);
    bVar1 = *param_4;
    *param_4 = *param_4 + bVar2;
    piVar4 = (int *)CONCAT71(uVar6,bVar2 + 10 + CARRY1(bVar1,bVar2));
    pbVar5 = (byte *)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                               CONCAT11(cVar7 << 1 | cVar7 < '\0',(char)param_1)) + (longlong)piVar4
                     );
    bVar1 = *pbVar5;
    *pbVar5 = *pbVar5 + bVar8;
    *piVar4 = *piVar4 + (uint)piVar4 + (uint)CARRY1(bVar1,bVar8);
    *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
    bVar9 = bVar9 + *(char *)(ulonglong)((uint)piVar4 | 0x9e00bf0);
    *(uint *)((longlong)unaff_RBP + 4) = *(uint *)((longlong)unaff_RBP + 4) & unaff_ESI;
    puVar14 = unaff_RBP;
  }
  else {
    puVar11 = (undefined8 *)&stack0xfffffffffffffff8;
    puVar14 = (undefined8 *)&stack0xfffffffffffffff8;
    cVar7 = '\a';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar11 = puVar11 + -1;
      *puVar11 = *unaff_RBP;
      cVar7 = cVar7 + -1;
    } while ('\0' < cVar7);
    pcVar12 = acStack_53;
    if (in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    while( true ) {
      *pcVar12 = *pcVar12 + (byte)in_RAX;
      *(int *)in_RAX = *(int *)in_RAX - (int)in_RAX;
      param_1 = param_1 + -1;
      if (param_1 == 0 || *(int *)in_RAX == 0) break;
      pcVar12[-8] = '\x11';
      pcVar12[-7] = '\0';
      pcVar12[-6] = '-';
      pcVar12[-5] = -0xc;
      pcVar12[-4] = -1;
      pcVar12[-3] = -1;
      pcVar12[-2] = -1;
      pcVar12[-1] = -1;
      uVar3 = (int)in_RAX - *(int *)in_RAX;
      pbVar5 = (byte *)(ulonglong)uVar3;
      *(uint *)(pbVar5 + (longlong)&stack0xfffffffffffffff8) =
           *(int *)(pbVar5 + (longlong)&stack0xfffffffffffffff8) - unaff_ESI;
      pbVar5[CONCAT71(unaff_00000019,unaff_BL) * 8] =
           pbVar5[CONCAT71(unaff_00000019,unaff_BL) * 8] + unaff_BL;
      uVar3 = CONCAT31((int3)(uVar3 >> 8),((byte)uVar3 | *pbVar5) + (char)param_1);
      uVar3 = uVar3 | *(uint *)(ulonglong)uVar3;
      (&stack0xfffffffffffffff8)[param_2] = (&stack0xfffffffffffffff8)[param_2] | bVar9;
      in_RAX = (byte *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),(char)uVar3 + 'd');
      pcVar12 = pcVar12 + -8;
    }
    uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
    bVar1 = (byte)in_RAX & *in_RAX;
    uVar13 = (ulonglong)(uint)((int)pcVar12 * 2);
    bVar1 = bVar1 & *(byte *)CONCAT71(uVar6,bVar1);
    cVar7 = (char)((ulonglong)param_1 >> 8);
    *param_4 = *param_4 + (char)((int)pcVar12 * 2);
    *(char *)CONCAT71(uVar6,bVar1) = *(char *)CONCAT71(uVar6,bVar1) + bVar1;
    bVar1 = bVar1 + (char)((ulonglong)in_RAX >> 8);
    if (CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                 CONCAT11(cVar7 << 1 | cVar7 < '\0',(char)param_1)) != 0) {
      *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
           *(char *)CONCAT71(unaff_00000019,unaff_BL) + bVar1;
      in(0x22);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      *(undefined8 *)(uVar13 - 8) = 0xffffffffebe00007;
      bVar1 = bVar1 & *(byte *)CONCAT71(uVar6,bVar1);
      bVar1 = bVar1 & *(byte *)CONCAT71(uVar6,bVar1);
      pbVar5 = (byte *)CONCAT71(uVar6,bVar1);
      *param_4 = *param_4 + (char)(uVar13 - 8);
      *(byte *)CONCAT62(uVar10,CONCAT11(bVar9 ^ bVar1,bVar8)) =
           *(char *)CONCAT62(uVar10,CONCAT11(bVar9 ^ bVar1,bVar8)) + bVar1;
      *pbVar5 = *pbVar5 + bVar1;
      *(undefined8 *)(uVar13 - 0x10) = 0xffffffffebe00007;
      bVar9 = bVar1 & *pbVar5 & *(byte *)CONCAT71(uVar6,bVar1 & *pbVar5);
      bVar8 = *param_4;
      *param_4 = *param_4 + bVar9;
      *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
           *(char *)CONCAT44(unaff_00000034,unaff_ESI) +
           bVar9 + (char)*(undefined4 *)(CONCAT71(uVar6,bVar9) * 2) + CARRY1(bVar8,bVar9);
      *(ulonglong *)(uVar13 - 0x18) = CONCAT44(unaff_00000034,unaff_ESI);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  *(byte *)(puVar14 + 0xf) = *(char *)(puVar14 + 0xf) + bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


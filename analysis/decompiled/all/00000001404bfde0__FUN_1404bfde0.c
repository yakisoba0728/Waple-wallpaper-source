// Function: FUN_1404bfde0
// Addr: 1404bfde0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bfde0(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  char *in_RAX;
  byte *pbVar7;
  char cVar9;
  byte bVar10;
  byte bVar11;
  undefined6 uVar12;
  undefined4 unaff_EBX;
  undefined8 *unaff_RBP;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  bool bVar13;
  undefined1 auStackX_8 [32];
  char *pcVar8;
  
  uVar12 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar6 = (char)((ulonglong)param_2 >> 8);
  bVar11 = (byte)param_2;
  bVar10 = (byte)((ulonglong)param_1 >> 8);
  cVar9 = (char)param_1;
  *(int *)(in_RAX + 5) = *(int *)(in_RAX + 5) - (int)unaff_RBP;
  *in_RAX = *in_RAX + bVar11;
  LocalDescriptorTableRegister(*(undefined2 *)(in_RAX + in_FS_OFFSET));
  pbVar7 = (byte *)((ulonglong)in_RAX ^ 0xe);
  bVar5 = *pbVar7;
  bVar1 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar11;
  if (!SCARRY1(bVar1,bVar11)) {
    register0x00000020 = (BADSPACEBASE *)auStackX_8;
  }
  *pbVar7 = *pbVar7 + (char)pbVar7 + CARRY1(bVar5,bVar11);
  *(undefined8 **)register0x00000020 = unaff_RBP;
  cVar4 = '\x10';
  plVar3 = (longlong *)register0x00000020;
  do {
    unaff_RBP = unaff_RBP + -1;
    plVar3 = plVar3 + -1;
    *plVar3 = *unaff_RBP;
    cVar4 = cVar4 + -1;
  } while ('\0' < cVar4);
  *(BADSPACEBASE **)((longlong)register0x00000020 + -0x88) = register0x00000020;
  *(byte *)CONCAT62(uVar12,CONCAT11(cVar6,0xc)) =
       *(char *)CONCAT62(uVar12,CONCAT11(cVar6,0xc)) + bVar10;
  *unaff_RDI = cVar9;
  *unaff_RDI = *unaff_RDI + cVar9;
  bVar13 = SCARRY4(iRam00000001472c060f,(int)((longlong)register0x00000020 + -0x93));
  iRam00000001472c060f = iRam00000001472c060f + (int)((longlong)register0x00000020 + -0x93);
  if (!bVar13) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iRam00000000aebc3274 = iRam00000000aebc3274 + -0x5143cd8c;
  bVar5 = -cRam00000000aebc32c8 - 0x38;
  pbVar7 = (byte *)(ulonglong)CONCAT31(0xaebc32,bVar5);
  from_bcd(*(unkbyte10 *)unaff_RDI);
  from_bcd(*(unkbyte10 *)unaff_RDI);
  *pbVar7 = *pbVar7 + 0x32;
  *param_4 = *param_4 + (char)((longlong)register0x00000020 + -0x93);
  *pbVar7 = *pbVar7 + (char)((uint)unaff_EBX >> 8);
  *pbVar7 = *pbVar7 | bVar5;
  uVar2 = CONCAT31(0xaebc32,bVar5 ^ bVar10);
  *(uint *)(ulonglong)uVar2 = *(uint *)(ulonglong)uVar2 | uVar2;
  uVar2 = uVar2 - CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX + cVar6);
  bVar5 = (byte)uVar2 | *(byte *)(ulonglong)uVar2;
  cVar6 = bVar5 + 0x78;
  pcVar8 = (char *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),cVar6);
  *pcVar8 = *pcVar8 + cVar6 + (0x87 < bVar5);
  from_bcd(*(unkbyte10 *)unaff_RDI);
  *pcVar8 = *pcVar8 + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


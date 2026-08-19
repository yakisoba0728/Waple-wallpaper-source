// Function: FUN_1404a7728
// Addr: 1404a7728
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a778e) overlaps instruction at (ram,0x0001404a778d)
    */

void FUN_1404a7728(longlong param_1,longlong param_2)

{
  char *pcVar1;
  undefined3 uVar2;
  undefined1 uVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  char cVar10;
  byte *in_RAX;
  undefined7 uVar11;
  ulonglong uVar8;
  byte *pbVar9;
  char *pcVar12;
  longlong unaff_RBP;
  int unaff_ESI;
  undefined4 unaff_00000034;
  int *unaff_RDI;
  
  bVar5 = (byte)in_RAX;
  *(byte *)(param_2 + 0x6002e004) = *(byte *)(param_2 + 0x6002e004) | bVar5;
  *in_RAX = *in_RAX + bVar5;
  uRam00000001744f7738 = uRam00000001744f7738 & (uint)in_RAX;
  *(undefined1 *)(param_2 + param_1) = *(undefined1 *)(param_2 + param_1);
  pcVar12 = (char *)(param_1 + -1);
  uVar11 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar10 = (char)((ulonglong)pcVar12 >> 8);
  if (pcVar12 == (char *)0x0) {
    uVar7 = (uint)CONCAT71(uVar11,bVar5 | *in_RAX);
    if ((bVar5 | *in_RAX) != 0) {
      cRam0000000000000000 = cRam0000000000000000 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    uVar3 = in((short)param_2);
    uVar8 = CONCAT71(uVar11,uVar3) & 0xffffffffffffff0a;
    pcVar1 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x4a +
                     CONCAT44(unaff_00000034,unaff_ESI) * 2);
    *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
    *pcVar12 = *pcVar12 + (char)(uVar8 >> 8);
    *(char *)(unaff_RBP + 0x7688000a) = *(char *)(unaff_RBP + 0x7688000a) + cVar10;
    *pcVar12 = *pcVar12;
    uVar6 = ((int)uVar8 + 0x74050002U | 0xa24ec00) + 0xd4050002;
    verw();
    bVar5 = (byte)uVar6 | *(byte *)(ulonglong)uVar6;
    uVar7 = CONCAT31((int3)(uVar6 >> 8),bVar5);
    if (bVar5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pcVar12 = *pcVar12 + (char)(uVar6 >> 8);
  }
  uVar7 = uVar7 & 0x769c000a;
  *pcVar12 = *pcVar12 + -8;
  cVar4 = (char)uVar7;
  *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + cVar4;
  *(char *)(unaff_RBP + 0x7688000a) = *(char *)(unaff_RBP + 0x7688000a) + cVar10;
  *pcVar12 = *pcVar12 + -8;
  uVar7 = CONCAT31((int3)(CONCAT22((short)(uVar7 >> 0x10),CONCAT11(cVar10,cVar4)) >> 8),cVar4) +
          0x34050002;
  pbVar9 = (byte *)(ulonglong)uVar7;
  *pbVar9 = *pbVar9 | (byte)uVar7;
  pcVar12 = (char *)(param_1 + -2);
  if (pcVar12 == (char *)0x0 || *pbVar9 == 0) {
    uVar2 = (undefined3)(uVar7 >> 8);
    bVar5 = (byte)uVar7 | *pbVar9;
    *unaff_RDI = *unaff_RDI + unaff_ESI;
    bVar5 = bVar5 | *(byte *)(ulonglong)CONCAT31(uVar2,bVar5);
    cVar10 = (char)(uVar7 >> 8);
    *pcVar12 = *pcVar12 + cVar10;
    *(char *)(ulonglong)CONCAT31(uVar2,bVar5) = *(char *)(ulonglong)CONCAT31(uVar2,bVar5) + bVar5;
    bVar5 = bVar5 + cVar10;
    bVar5 = bVar5 | *(byte *)(ulonglong)CONCAT31(uVar2,bVar5);
    *unaff_RDI = *unaff_RDI + unaff_ESI;
    *pcVar12 = *pcVar12 + (bVar5 | *(byte *)(ulonglong)CONCAT31(uVar2,bVar5));
    pcVar12 = (char *)(param_2 + CONCAT44(unaff_00000034,unaff_ESI) * 2);
    *pcVar12 = *pcVar12 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// Function: FUN_1404a0974
// Addr: 1404a0974
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0974(undefined8 param_1,byte *param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint *in_RAX;
  uint *puVar8;
  byte bVar9;
  byte bVar10;
  undefined6 uVar11;
  longlong unaff_RBP;
  int *unaff_RDI;
  int *piVar7;
  
  uVar11 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar9 = (byte)param_1;
  pbVar1 = (byte *)((longlong)in_RAX + (longlong)param_2);
  cVar4 = (char)((ulonglong)in_RAX >> 8);
  *pbVar1 = *pbVar1 + cVar4;
  uVar5 = (uint)in_RAX;
  if ((POPCOUNT(*pbVar1) & 1U) == 0) {
    uVar5 = uVar5 + *in_RAX;
    piVar7 = (int *)(ulonglong)uVar5;
    *(char *)(piVar7 + 2) = (char)piVar7[2] + (char)(uVar5 >> 8);
    *(undefined1 *)CONCAT62(uVar11,CONCAT11(*(char *)((longlong)piVar7 + 3),bVar9)) =
         *(undefined1 *)CONCAT62(uVar11,CONCAT11(*(char *)((longlong)piVar7 + 3),bVar9));
    *(char *)piVar7 = (char)*piVar7 + (char)uVar5;
    *(char *)((longlong)piVar7 + 0x66) = *(char *)((longlong)piVar7 + 0x66) + (char)uVar5;
    uVar5 = uVar5 + *piVar7;
    piVar7 = (int *)(ulonglong)uVar5;
    if ((POPCOUNT(uVar5 & 0xff) & 1U) == 0) {
      uVar5 = uVar5 + *piVar7;
      *param_2 = *param_2 | bVar9;
      *unaff_RDI = *unaff_RDI + uVar5;
      *(int *)(ulonglong)uVar5 = *(int *)(ulonglong)uVar5 + uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar2 = in((short)param_2);
    *(undefined1 *)unaff_RDI = uVar2;
  }
  else {
    *in_RAX = *in_RAX & uVar5;
    *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
    bVar10 = (byte)((ulonglong)param_1 >> 8) | *(byte *)(unaff_RBP + 3);
    *param_2 = *param_2 + cVar4;
    iVar6 = in((short)param_2);
    *unaff_RDI = iVar6;
    uVar3 = *in_RAX;
    cVar4 = in(8);
    piVar7 = (int *)(ulonglong)CONCAT31((int3)(uVar5 + uVar3 >> 8),cVar4);
    *(undefined1 *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) =
         *(undefined1 *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9));
    *(char *)piVar7 = (char)*piVar7 + cVar4;
    *(char *)(unaff_RDI + 0x1c) = (char)unaff_RDI[0x1c] + (char)(uVar5 + uVar3 >> 8);
  }
  iVar6 = (int)piVar7 + *piVar7;
  uVar5 = CONCAT22((short)((uint)iVar6 >> 0x10),
                   CONCAT11((char)((uint)iVar6 >> 8) + bVar9,(char)iVar6));
  puVar8 = (uint *)(ulonglong)uVar5;
  *param_2 = *param_2 | bVar9;
  *puVar8 = *puVar8 & uVar5;
  *(char *)puVar8 = (char)*puVar8 + (char)iVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


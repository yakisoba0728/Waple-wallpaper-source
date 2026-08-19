// Function: FUN_1404a095c
// Addr: 1404a095c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a095c(undefined8 param_1,byte *param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint *in_RAX;
  uint *puVar9;
  byte bVar11;
  byte bVar12;
  undefined2 uVar13;
  undefined4 uVar14;
  longlong unaff_RBP;
  int *unaff_RDI;
  ulonglong uVar8;
  int *piVar10;
  
  uVar14 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar13 = (undefined2)((ulonglong)param_1 >> 0x10);
  bVar11 = (byte)param_1;
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  if ((POPCOUNT((char)*in_RAX) & 1U) != 0) {
    uRam00000001245709d2 = uRam00000001245709d2 & (uint)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar6 = (uint)in_RAX + *in_RAX;
  uVar8 = (ulonglong)uVar6;
  bVar12 = *(byte *)(uVar8 + 3);
  cVar5 = (char)(uVar6 >> 8);
  *(char *)(uVar8 + 8) = *(char *)(uVar8 + 8) + cVar5;
  *(undefined1 *)CONCAT44(uVar14,CONCAT22(uVar13,CONCAT11(bVar12,bVar11))) =
       *(undefined1 *)CONCAT44(uVar14,CONCAT22(uVar13,CONCAT11(bVar12,bVar11)));
  cVar4 = (char)uVar6;
  *(char *)(uVar8 * 2) = *(char *)(uVar8 * 2) + cVar4;
  cVar5 = cVar5 * '\x02';
  uVar6 = CONCAT31((int3)(CONCAT22((short)(uVar6 >> 0x10),CONCAT11(cVar5,cVar4)) >> 8),cVar4);
  puVar9 = (uint *)(ulonglong)uVar6;
  pbVar1 = (byte *)((longlong)puVar9 + (longlong)param_2);
  *pbVar1 = *pbVar1 + cVar5;
  if ((POPCOUNT(*pbVar1) & 1U) == 0) {
    uVar6 = uVar6 + *puVar9;
    piVar10 = (int *)(ulonglong)uVar6;
    *(char *)(piVar10 + 2) = (char)piVar10[2] + (char)(uVar6 >> 8);
    *(undefined1 *)
     CONCAT44(uVar14,CONCAT22(uVar13,CONCAT11(*(char *)((longlong)piVar10 + 3),bVar11))) =
         *(undefined1 *)
          CONCAT44(uVar14,CONCAT22(uVar13,CONCAT11(*(char *)((longlong)piVar10 + 3),bVar11)));
    *(char *)piVar10 = (char)*piVar10 + (char)uVar6;
    *(char *)((longlong)piVar10 + 0x66) = *(char *)((longlong)piVar10 + 0x66) + (char)uVar6;
    uVar6 = uVar6 + *piVar10;
    piVar10 = (int *)(ulonglong)uVar6;
    if ((POPCOUNT(uVar6 & 0xff) & 1U) == 0) {
      uVar6 = uVar6 + *piVar10;
      *param_2 = *param_2 | bVar11;
      *unaff_RDI = *unaff_RDI + uVar6;
      *(int *)(ulonglong)uVar6 = *(int *)(ulonglong)uVar6 + uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar2 = in((short)param_2);
    *(undefined1 *)unaff_RDI = uVar2;
  }
  else {
    *puVar9 = *puVar9 & uVar6;
    *(char *)puVar9 = (char)*puVar9 + cVar4;
    bVar12 = bVar12 | *(byte *)(unaff_RBP + 3);
    *param_2 = *param_2 + cVar5;
    iVar7 = in((short)param_2);
    *unaff_RDI = iVar7;
    uVar3 = *puVar9;
    cVar5 = in(8);
    piVar10 = (int *)(ulonglong)CONCAT31((int3)(uVar6 + uVar3 >> 8),cVar5);
    *(undefined1 *)CONCAT44(uVar14,CONCAT22(uVar13,CONCAT11(bVar12,bVar11))) =
         *(undefined1 *)CONCAT44(uVar14,CONCAT22(uVar13,CONCAT11(bVar12,bVar11)));
    *(char *)piVar10 = (char)*piVar10 + cVar5;
    *(char *)(unaff_RDI + 0x1c) = (char)unaff_RDI[0x1c] + (char)(uVar6 + uVar3 >> 8);
  }
  iVar7 = (int)piVar10 + *piVar10;
  uVar6 = CONCAT22((short)((uint)iVar7 >> 0x10),
                   CONCAT11((char)((uint)iVar7 >> 8) + bVar11,(char)iVar7));
  puVar9 = (uint *)(ulonglong)uVar6;
  *param_2 = *param_2 | bVar11;
  *puVar9 = *puVar9 & uVar6;
  *(char *)puVar9 = (char)*puVar9 + (char)iVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


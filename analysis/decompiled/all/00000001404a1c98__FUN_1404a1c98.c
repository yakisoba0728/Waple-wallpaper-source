// Function: FUN_1404a1c98
// Addr: 1404a1c98
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a1d2b) overlaps instruction at (ram,0x0001404a1d29)
    */

void FUN_1404a1c98(byte *param_1,int *param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  byte *in_RAX;
  undefined7 uVar9;
  char *pcVar6;
  int *piVar8;
  byte bVar10;
  char cVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  byte unaff_BL;
  byte unaff_BH;
  uint unaff_EBP;
  int *unaff_RSI;
  int *piVar14;
  char *unaff_RDI;
  char *pcVar15;
  longlong in_FS_OFFSET;
  bool in_OF;
  uint auStack_8 [2];
  uint *puVar7;
  
  uVar13 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar12 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar5 = (char)((ulonglong)param_2 >> 8);
  bVar10 = (byte)param_2;
  bVar4 = (byte)in_RAX;
  if (!in_OF) {
    *(uint *)(in_RAX + (longlong)&stack0x00000000) =
         *(uint *)(in_RAX + (longlong)&stack0x00000000) | unaff_EBP;
    *param_1 = *param_1;
    *in_RAX = *in_RAX + bVar4;
    in_RAX[0x68] = in_RAX[0x68] + cVar5;
    *(uint *)(in_RAX + (longlong)&stack0x00000000) =
         *(uint *)(in_RAX + (longlong)&stack0x00000000) | unaff_EBP;
    *param_1 = *param_1;
    *(byte *)param_2 = (char)*param_2 + bVar4;
    *in_RAX = *in_RAX + bVar4;
    auStack_8[0] = 0x6870001e;
    auStack_8[1] = 0;
    *(uint *)((longlong)auStack_8 + (longlong)in_RAX) =
         *(uint *)((longlong)auStack_8 + (longlong)in_RAX) | unaff_EBP;
    bVar10 = *param_1;
    *param_1 = *param_1 + bVar4;
    bVar2 = *param_1;
    *(byte *)param_2 = (char)*param_2 + unaff_BL;
    *(byte *)param_2 = (char)*param_2 + unaff_BL;
    *unaff_RSI = *unaff_RSI + (int)param_2;
    *(byte *)unaff_RSI = (char)*unaff_RSI + (((char)param_1 - bVar2) - CARRY1(bVar10,bVar4));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar15 = (char *)((longlong)param_2 + (longlong)param_1 * 2);
  *pcVar15 = *pcVar15 + unaff_BL;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  *in_RAX = *in_RAX + bVar4;
  piVar14 = unaff_RSI + -0xefffee4;
  iVar3 = *piVar14;
  cVar11 = (char)((ulonglong)param_1 >> 8);
  *(char *)piVar14 = (char)*piVar14 + cVar11;
  if (!SCARRY1((char)iVar3,cVar11)) {
    bVar2 = *in_RAX;
    *in_RAX = *in_RAX + bVar10;
    in_RAX = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(bVar4 + 0xb6) - CARRY1(bVar2,bVar10));
  }
  cVar11 = (char)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + cVar11;
  *(char *)param_2 = (char)*param_2 + (char)in_RAX;
  *in_RAX = *in_RAX + (char)in_RAX;
  uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar4 = in(0x1a);
  *(char *)CONCAT71(uVar9,bVar4) = *(char *)CONCAT71(uVar9,bVar4) + cVar11;
  out(*unaff_RSI,(short)param_2);
  pcVar6 = (char *)CONCAT71(uVar9,bVar4);
  piVar14 = unaff_RSI + 1;
  pcVar15 = unaff_RDI + 1;
  if (SBORROW1(bVar4,*unaff_RDI)) {
    *param_1 = *param_1 + cVar11;
    *pcVar6 = *pcVar6 + bVar4;
    *pcVar6 = *pcVar6 + cVar11;
    piVar14 = unaff_RSI + 2;
    out(unaff_RSI[1],(short)param_2);
    piVar8 = (int *)CONCAT71(uVar9,bVar4);
    pcVar15 = unaff_RDI + 2;
    if (SBORROW1(bVar4,unaff_RDI[1])) {
      bVar2 = *param_1;
      *param_1 = *param_1 + bVar4;
      *pcVar15 = *pcVar15 + bVar4 + CARRY1(bVar2,bVar4);
      *(byte *)piVar8 = (char)*piVar8 + bVar10;
      iVar3 = *piVar8;
      cVar11 = bVar10 + (char)*piVar8;
      bVar10 = *param_1;
      bRam60047005e007f009 = bVar4;
      *param_1 = *param_1 + bVar4;
      *(uint *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(cVar5,cVar11))) =
           (*(int *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(cVar5,cVar11))) - (int)param_1) -
           (uint)CARRY1(bVar10,bVar4);
      bVar4 = *param_1;
      *param_1 = *param_1 + unaff_BL;
      piVar1 = (int *)(CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(cVar5,cVar11))) +
                      CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(cVar5,cVar11))));
      *piVar1 = (*piVar1 - ((int)piVar14 + iVar3)) -
                (uint)(CARRY4((uint)piVar8,*(uint *)(in_FS_OFFSET + (longlong)piVar8)) ||
                      CARRY4((uint)piVar8 + *(uint *)(in_FS_OFFSET + (longlong)piVar8),
                             (uint)CARRY1(bVar4,unaff_BL)));
      *param_1 = *param_1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar6 = (char *)CONCAT71(uVar9,bVar4 + unaff_BH);
  }
  cVar5 = (byte)pcVar6 + unaff_BH;
  puVar7 = (uint *)CONCAT71((int7)((ulonglong)pcVar6 >> 8),cVar5);
  iVar3 = *param_2;
  *puVar7 = *puVar7 & (uint)puVar7;
  *(char *)puVar7 = (char)*puVar7 + cVar5;
  bVar4 = (byte)(((int)param_1 - iVar3) - (uint)CARRY1((byte)pcVar6,unaff_BH) >> 8);
  pcVar15[4] = pcVar15[4] & bVar4;
  *(byte *)(piVar14 + -0x1fffee4) = (char)piVar14[-0x1fffee4] + bVar4;
  *puVar7 = *puVar7 + (int)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


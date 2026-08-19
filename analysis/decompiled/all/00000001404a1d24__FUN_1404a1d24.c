// Function: FUN_1404a1d24
// Addr: 1404a1d24
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a1d2b) overlaps instruction at (ram,0x0001404a1d29)
    */

void FUN_1404a1d24(byte *param_1,int *param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  int *in_RAX;
  undefined1 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  byte unaff_BL;
  byte unaff_BH;
  undefined4 *unaff_RSI;
  undefined4 *puVar10;
  char *unaff_RDI;
  char *pcVar11;
  longlong in_FS_OFFSET;
  uint *puVar6;
  
  uVar9 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar8 = (undefined2)((ulonglong)param_2 >> 0x10);
  uVar7 = (undefined1)((ulonglong)param_2 >> 8);
  bVar4 = (byte)in_RAX;
  puVar10 = unaff_RSI;
  pcVar11 = unaff_RDI + 1;
  if (SBORROW1(bVar4,*unaff_RDI)) {
    cVar5 = (char)((ulonglong)in_RAX >> 8);
    *param_1 = *param_1 + cVar5;
    *(byte *)in_RAX = (char)*in_RAX + bVar4;
    *(char *)in_RAX = (char)*in_RAX + cVar5;
    puVar10 = unaff_RSI + 1;
    out(*unaff_RSI,(short)param_2);
    pcVar11 = unaff_RDI + 2;
    if (SBORROW1(bVar4,unaff_RDI[1])) {
      bVar2 = *param_1;
      *param_1 = *param_1 + bVar4;
      *pcVar11 = *pcVar11 + bVar4 + CARRY1(bVar2,bVar4);
      *(char *)in_RAX = (char)*in_RAX + (char)param_2;
      iVar3 = *in_RAX;
      cVar5 = (char)param_2 + (char)*in_RAX;
      bVar2 = *param_1;
      bRam60047005e007f009 = bVar4;
      *param_1 = *param_1 + bVar4;
      *(uint *)CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(uVar7,cVar5))) =
           (*(int *)CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(uVar7,cVar5))) - (int)param_1) -
           (uint)CARRY1(bVar2,bVar4);
      bVar4 = *param_1;
      *param_1 = *param_1 + unaff_BL;
      piVar1 = (int *)(CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(uVar7,cVar5))) +
                      CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(uVar7,cVar5))));
      *piVar1 = (*piVar1 - ((int)puVar10 + iVar3)) -
                (uint)(CARRY4((uint)in_RAX,*(uint *)(in_FS_OFFSET + (longlong)in_RAX)) ||
                      CARRY4((uint)in_RAX + *(uint *)(in_FS_OFFSET + (longlong)in_RAX),
                             (uint)CARRY1(bVar4,unaff_BL)));
      *param_1 = *param_1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    in_RAX = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar4 + unaff_BH);
  }
  cVar5 = (byte)in_RAX + unaff_BH;
  puVar6 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar5);
  iVar3 = *param_2;
  *puVar6 = *puVar6 & (uint)puVar6;
  *(char *)puVar6 = (char)*puVar6 + cVar5;
  bVar4 = (byte)(((int)param_1 - iVar3) - (uint)CARRY1((byte)in_RAX,unaff_BH) >> 8);
  pcVar11[4] = pcVar11[4] & bVar4;
  *(byte *)(puVar10 + -0x1fffee4) = *(char *)(puVar10 + -0x1fffee4) + bVar4;
  *puVar6 = *puVar6 + (int)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


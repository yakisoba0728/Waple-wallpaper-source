// Function: FUN_14049fb44
// Addr: 14049fb44
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049fb54) overlaps instruction at (ram,0x00014049fb53)
    */

void FUN_14049fb44(longlong param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  int iVar2;
  undefined3 uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  char *in_RAX;
  char *pcVar10;
  int *piVar11;
  byte *pbVar12;
  byte bVar13;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *puVar14;
  undefined8 unaff_RBP;
  int *unaff_RSI;
  char *unaff_RDI;
  undefined1 auStack_10 [8];
  byte *pbVar8;
  uint *puVar9;
  
  bVar13 = (byte)((ulonglong)param_2 >> 8);
  puVar14 = &stack0xfffffffffffffff8;
  *param_4 = *param_4 + (char)&stack0xfffffffffffffff8;
  *in_RAX = *in_RAX + (char)in_RAX;
  bVar4 = (char)in_RAX + (char)((ulonglong)in_RAX >> 8);
  pbVar8 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar4);
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BH;
  pbVar12 = (byte *)(param_1 + -1);
  iVar2 = (int)param_2;
  if (pbVar12 == (byte *)0x0 ||
      *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) == '\0') {
    param_2[(longlong)unaff_RDI * 8 + 0x49] =
         param_2[(longlong)unaff_RDI * 8 + 0x49] + (char)param_2;
    *pbVar12 = *pbVar12 + bVar4;
  }
  else {
    puVar14 = auStack_10;
    *param_4 = *param_4 + bVar4;
  }
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) | (uint)pbVar8;
  *pbVar12 = *pbVar12 + (char)pbVar12;
  *unaff_RSI = *unaff_RSI + iVar2;
  *param_2 = *param_2 + bVar4;
  *pbVar8 = *pbVar8 ^ bVar4;
  bVar1 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar4;
  iVar6 = (uint)pbVar8 + (uint)CARRY1(bVar1,bVar4);
  uVar7 = iVar6 + 0x3a153206;
  pcVar10 = (char *)(ulonglong)uVar7;
  *(char **)(puVar14 + -8) = pcVar10;
  *pcVar10 = *pcVar10 + (char)uVar7;
  *(int *)param_2 = *(int *)param_2 + iVar2;
  uVar7 = iVar6 + 0x6d794406;
  puVar9 = (uint *)(ulonglong)uVar7;
  *param_2 = *param_2 + (char)param_2;
  *unaff_RSI = *unaff_RSI + (int)unaff_RBP;
  cVar5 = (char)uVar7;
  *(char *)unaff_RSI = (char)*unaff_RSI + cVar5;
  *(uint **)(puVar14 + -0x10) = puVar9;
  *(char *)puVar9 = (char)*puVar9 + cVar5;
  *puVar9 = *puVar9 & (uint)pbVar12;
  pcVar10 = (char *)(ulonglong)CONCAT31((int3)(uVar7 >> 8),cVar5 + (char)*puVar9);
  pcVar10[(longlong)unaff_RSI] = pcVar10[(longlong)unaff_RSI] | bVar13;
  *pcVar10 = *pcVar10 + bVar13;
  uVar7 = in(1);
  piVar11 = (int *)(ulonglong)uVar7;
  cVar5 = (char)(uVar7 >> 8);
  param_2[-0x1b] = param_2[-0x1b] + cVar5;
  *piVar11 = *piVar11 + uVar7;
  *unaff_RDI = (char)*unaff_RSI;
  *param_4 = *param_4 + (char)(puVar14 + -0x10);
  bVar4 = (byte)uVar7;
  *param_2 = *param_2 | bVar4;
  *(char *)piVar11 = (char)*piVar11 + (char)pbVar12;
  if ((char)*piVar11 != '\0') {
    param_2[-0x1b] = param_2[-0x1b] + cVar5;
    *piVar11 = *piVar11 + uVar7;
    out(*(undefined4 *)((longlong)unaff_RSI + 1),(short)param_2);
    in(1);
    param_2[(longlong)(unaff_RDI + 1) * 8 + 0x8210049] =
         param_2[(longlong)(unaff_RDI + 1) * 8 + 0x8210049] + bVar13;
    out(*(undefined4 *)((longlong)unaff_RSI + 5),(short)param_2);
    uVar7 = in(1);
    puVar9 = (uint *)(ulonglong)uVar7;
    unaff_RDI[-0x1a] = unaff_RDI[-0x1a] + bVar13;
    *puVar9 = *puVar9 + uVar7;
    *(undefined8 *)(puVar14 + -0x18) = unaff_RBP;
    *puVar9 = *puVar9 & uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4 + bVar4;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BL;
  uVar3 = (undefined3)(CONCAT22((short)(uVar7 >> 0x10),CONCAT11(0xfa,bVar4)) >> 8);
  piVar11 = (int *)((ulonglong)CONCAT31(uVar3,bVar4) ^ 0x59);
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BL;
  *piVar11 = *piVar11 + iVar2;
  pbVar8 = (byte *)((ulonglong)(CONCAT31(uVar3,(char)piVar11) | 0xd0) + 7);
  *pbVar8 = *pbVar8 | bVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


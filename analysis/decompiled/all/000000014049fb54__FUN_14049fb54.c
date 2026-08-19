// Function: FUN_14049fb54
// Addr: 14049fb54
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049fb54(byte *param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  int iVar2;
  undefined3 uVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  byte *in_RAX;
  char *pcVar10;
  int *piVar11;
  byte bVar12;
  char unaff_BL;
  undefined7 unaff_00000019;
  int unaff_EBP;
  int *unaff_RSI;
  char *unaff_RDI;
  uint *puVar9;
  
  bVar12 = (byte)((ulonglong)param_2 >> 8);
  bVar4 = (byte)in_RAX;
  *param_4 = *param_4 + bVar4;
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) =
       *(uint *)CONCAT71(unaff_00000019,unaff_BL) | (uint)in_RAX;
  *param_1 = *param_1 + (char)param_1;
  iVar2 = (int)param_2;
  *unaff_RSI = *unaff_RSI + iVar2;
  *param_2 = *param_2 + bVar4;
  *in_RAX = *in_RAX ^ bVar4;
  bVar6 = *param_1;
  *param_1 = *param_1 + bVar4;
  iVar7 = (uint)in_RAX + (uint)CARRY1(bVar6,bVar4);
  uVar8 = iVar7 + 0x3a153206;
  *(char *)(ulonglong)uVar8 = *(char *)(ulonglong)uVar8 + (char)uVar8;
  *(int *)param_2 = *(int *)param_2 + iVar2;
  uVar8 = iVar7 + 0x6d794406;
  puVar9 = (uint *)(ulonglong)uVar8;
  *param_2 = *param_2 + (char)param_2;
  *unaff_RSI = *unaff_RSI + unaff_EBP;
  cVar5 = (char)uVar8;
  *(char *)unaff_RSI = (char)*unaff_RSI + cVar5;
  *(char *)puVar9 = (char)*puVar9 + cVar5;
  *puVar9 = *puVar9 & (uint)param_1;
  pcVar10 = (char *)(ulonglong)CONCAT31((int3)(uVar8 >> 8),cVar5 + (char)*puVar9);
  pcVar10[(longlong)unaff_RSI] = pcVar10[(longlong)unaff_RSI] | bVar12;
  *pcVar10 = *pcVar10 + bVar12;
  uVar8 = in(1);
  piVar11 = (int *)(ulonglong)uVar8;
  cVar5 = (char)(uVar8 >> 8);
  param_2[-0x1b] = param_2[-0x1b] + cVar5;
  *piVar11 = *piVar11 + uVar8;
  *unaff_RDI = (char)*unaff_RSI;
  *param_4 = *param_4 + -0x18;
  bVar6 = (byte)uVar8;
  *param_2 = *param_2 | bVar6;
  *(char *)piVar11 = (char)*piVar11 + (char)param_1;
  if ((char)*piVar11 != '\0') {
    param_2[-0x1b] = param_2[-0x1b] + cVar5;
    *piVar11 = *piVar11 + uVar8;
    out(*(undefined4 *)((longlong)unaff_RSI + 1),(short)param_2);
    in(1);
    param_2[(longlong)(unaff_RDI + 1) * 8 + 0x8210049] =
         param_2[(longlong)(unaff_RDI + 1) * 8 + 0x8210049] + bVar12;
    out(*(undefined4 *)((longlong)unaff_RSI + 5),(short)param_2);
    uVar8 = in(1);
    puVar9 = (uint *)(ulonglong)uVar8;
    unaff_RDI[-0x1a] = unaff_RDI[-0x1a] + bVar12;
    *puVar9 = *puVar9 + uVar8;
    *puVar9 = *puVar9 & uVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4 + bVar6;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
  uVar3 = (undefined3)(CONCAT22((short)(uVar8 >> 0x10),CONCAT11(0xfa,bVar6)) >> 8);
  piVar11 = (int *)((ulonglong)CONCAT31(uVar3,bVar6) ^ 0x59);
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
  *piVar11 = *piVar11 + iVar2;
  pbVar1 = (byte *)((ulonglong)(CONCAT31(uVar3,(char)piVar11) | 0xd0) + 7);
  *pbVar1 = *pbVar1 | bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


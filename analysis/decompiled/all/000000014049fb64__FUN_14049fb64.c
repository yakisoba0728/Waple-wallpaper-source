// Function: FUN_14049fb64
// Addr: 14049fb64
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049fb64(uint param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  int iVar2;
  undefined3 uVar3;
  char cVar4;
  byte bVar5;
  int in_EAX;
  uint uVar6;
  char *pcVar8;
  int *piVar9;
  byte bVar10;
  char unaff_BL;
  undefined7 unaff_00000019;
  int unaff_EBP;
  int *unaff_RSI;
  char *unaff_RDI;
  uint *puVar7;
  
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  iVar2 = (int)param_2;
  iRam00000001745efb6f = iRam00000001745efb6f + iVar2;
  uVar6 = in_EAX + 0x6003201;
  *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)uVar6;
  *(int *)param_2 = *(int *)param_2 + iVar2;
  uVar6 = in_EAX + 0x39644401;
  puVar7 = (uint *)(ulonglong)uVar6;
  *param_2 = *param_2 + (char)param_2;
  *unaff_RSI = *unaff_RSI + unaff_EBP;
  cVar4 = (char)uVar6;
  *(char *)unaff_RSI = (char)*unaff_RSI + cVar4;
  *(char *)puVar7 = (char)*puVar7 + cVar4;
  *puVar7 = *puVar7 & param_1;
  pcVar8 = (char *)(ulonglong)CONCAT31((int3)(uVar6 >> 8),cVar4 + (char)*puVar7);
  pcVar8[(longlong)unaff_RSI] = pcVar8[(longlong)unaff_RSI] | bVar10;
  *pcVar8 = *pcVar8 + bVar10;
  uVar6 = in(1);
  piVar9 = (int *)(ulonglong)uVar6;
  cVar4 = (char)(uVar6 >> 8);
  param_2[-0x1b] = param_2[-0x1b] + cVar4;
  *piVar9 = *piVar9 + uVar6;
  *unaff_RDI = (char)*unaff_RSI;
  *param_4 = *param_4 + -0x10;
  bVar5 = (byte)uVar6;
  *param_2 = *param_2 | bVar5;
  *(char *)piVar9 = (char)*piVar9 + (char)param_1;
  if ((char)*piVar9 != '\0') {
    param_2[-0x1b] = param_2[-0x1b] + cVar4;
    *piVar9 = *piVar9 + uVar6;
    out(*(undefined4 *)((longlong)unaff_RSI + 1),(short)param_2);
    in(1);
    param_2[(longlong)(unaff_RDI + 1) * 8 + 0x8210049] =
         param_2[(longlong)(unaff_RDI + 1) * 8 + 0x8210049] + bVar10;
    out(*(undefined4 *)((longlong)unaff_RSI + 5),(short)param_2);
    uVar6 = in(1);
    puVar7 = (uint *)(ulonglong)uVar6;
    unaff_RDI[-0x1a] = unaff_RDI[-0x1a] + bVar10;
    *puVar7 = *puVar7 + uVar6;
    *puVar7 = *puVar7 & uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4 + bVar5;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
  uVar3 = (undefined3)(CONCAT22((short)(uVar6 >> 0x10),CONCAT11(0xfa,bVar5)) >> 8);
  piVar9 = (int *)((ulonglong)CONCAT31(uVar3,bVar5) ^ 0x59);
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
  *piVar9 = *piVar9 + iVar2;
  pbVar1 = (byte *)((ulonglong)(CONCAT31(uVar3,(char)piVar9) | 0xd0) + 7);
  *pbVar1 = *pbVar1 | bVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// Function: FUN_14049fc78
// Addr: 14049fc78
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049fc78(undefined8 param_1,byte *param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined8 in_RAX;
  int *piVar3;
  byte bVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  undefined6 uVar9;
  char cVar10;
  undefined7 uVar11;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  int unaff_EBP;
  char *unaff_RSI;
  byte *unaff_RDI;
  char cVar4;
  
  uVar11 = (undefined7)((ulonglong)param_2 >> 8);
  uVar9 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar8 = (char)((ulonglong)param_1 >> 8);
  bVar5 = (byte)param_1;
  cVar10 = (char)in_RAX;
  cVar4 = (char)((ulonglong)in_RAX >> 8) + cVar10;
  piVar3 = (int *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar4,cVar10));
  *(char *)piVar3 = (char)*piVar3 + cVar4;
  uVar2 = (uint)piVar3;
  *piVar3 = *piVar3 + uVar2;
  cVar7 = cVar8 >> 1;
  pcVar1 = (char *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x49 + (longlong)unaff_RDI * 8);
  *pcVar1 = *pcVar1 + cVar4;
  *(char *)CONCAT62(uVar9,CONCAT11(cVar7,bVar5)) =
       *(char *)CONCAT62(uVar9,CONCAT11(cVar7,bVar5)) + cVar4;
  *(char *)piVar3 = (char)*piVar3 + cVar10;
  *(char *)piVar3 = (char)*piVar3 + cVar4;
  *piVar3 = *piVar3 + uVar2;
  cVar8 = cVar8 >> 2;
  pcVar1 = (char *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x49 + (longlong)unaff_RDI * 8);
  *pcVar1 = *pcVar1 + cVar4;
  *(char *)CONCAT62(uVar9,CONCAT11(cVar8,bVar5)) =
       *(char *)CONCAT62(uVar9,CONCAT11(cVar8,bVar5)) + cVar10;
  bVar6 = *param_2;
  *param_2 = *param_2 + cVar4;
  piVar3 = (int *)(CONCAT62(uVar9,CONCAT11(cVar8,bVar5 & bVar6)) + 0xe);
  *piVar3 = *piVar3 + unaff_EBP;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  cVar10 = (char)param_2 + *(char *)((ulonglong)(uVar2 | 0x9e00bf0) + 1);
  bVar6 = bVar5 & bVar6 & *(byte *)CONCAT71(uVar11,cVar10);
  *(char *)CONCAT71(uVar11,cVar10) =
       *(char *)CONCAT71(uVar11,cVar10) + (char)((uVar2 | 0x9e00bf0) >> 8);
  *(int *)CONCAT62(uVar9,CONCAT11(cVar8,bVar6)) =
       *(int *)CONCAT62(uVar9,CONCAT11(cVar8,bVar6)) + unaff_EBX;
  *unaff_RSI = *unaff_RSI + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


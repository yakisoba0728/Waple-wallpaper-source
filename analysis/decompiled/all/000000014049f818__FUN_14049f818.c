// Function: FUN_14049f818
// Addr: 14049f818
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f818(int *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 in_RAX;
  char *pcVar4;
  ulonglong uVar5;
  int *piVar6;
  byte bVar8;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined7 uVar9;
  undefined7 uVar7;
  
  uVar9 = (undefined7)((ulonglong)param_4 >> 8);
  pbVar1 = (byte *)((longlong)param_1 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  bVar8 = (byte)(param_2 >> 8);
  *pbVar1 = *pbVar1 | bVar8;
  out((short)param_2,(int)in_RAX);
  pcVar4 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  *pcVar4 = *pcVar4 + bVar8;
  uVar5 = CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                   CONCAT11((byte)((ulonglong)in_RAX >> 8) | bVar8,1)) >> 8),1);
  uVar2 = (ulonglong)*(uint *)(uVar5 - 0x4ef3ffff);
  uVar5 = (ulonglong)param_2 << 0x20 | uVar5 & 0xffffffff;
  uVar3 = uVar5 / uVar2;
  piVar6 = (int *)(uVar3 & 0xffffffff);
  uVar5 = uVar5 % uVar2;
  *piVar6 = *piVar6 + (int)uVar3;
  pcVar4 = (char *)((longlong)piVar6 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH + bVar8,unaff_BL)))
  ;
  *pcVar4 = *pcVar4 + (char)((ulonglong)piVar6 >> 8);
  *(byte *)(unaff_RDI + uVar5) = *(byte *)(unaff_RDI + uVar5) | (byte)uVar5;
  uVar7 = (undefined7)((ulonglong)piVar6 >> 8);
  piVar6 = (int *)((ulonglong)piVar6 | 0xb1);
  *piVar6 = *piVar6 + (int)piVar6;
  *(char *)((longlong)piVar6 + -9) = *(char *)((longlong)piVar6 + -9) + unaff_BL;
  *(char *)CONCAT71(uVar9,1) = *(char *)CONCAT71(uVar9,1) + unaff_SPL;
  *(char *)piVar6 = (char)*piVar6 + (char)piVar6;
  *(char *)(param_1 + unaff_RSI) = (char)param_1[unaff_RSI] + (char)param_1;
  *piVar6 = *piVar6 + (int)piVar6;
  *(char *)((longlong)piVar6 + -9) = *(char *)((longlong)piVar6 + -9) + unaff_BL;
  *(char *)CONCAT71(uVar9,1) = *(char *)CONCAT71(uVar9,1) + unaff_SPL;
  *(char *)piVar6 = (char)*piVar6 + (char)piVar6;
  piVar6 = (int *)CONCAT71(uVar7,1);
  *(char *)(param_1 + unaff_RSI) = (char)param_1[unaff_RSI] + (char)param_1;
  *piVar6 = *piVar6 + (int)piVar6;
  out((short)uVar5,(int)piVar6);
  pcVar4 = (char *)CONCAT71(uVar7,1);
  *pcVar4 = *pcVar4 + (char)(uVar5 >> 8);
  pcVar4[-0x4f10ffff] = pcVar4[-0x4f10ffff] ^ 1;
  *pcVar4 = *pcVar4 + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + (int)pcVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// Function: FUN_14049f828
// Addr: 14049f828
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f828(int *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  uint *in_RAX;
  ulonglong uVar4;
  int *piVar5;
  char *pcVar6;
  char unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined7 uVar8;
  undefined7 uVar7;
  
  uVar8 = (undefined7)((ulonglong)param_4 >> 8);
  *in_RAX = *in_RAX & (uint)param_1;
  cVar3 = (char)in_RAX + (char)*in_RAX;
  uVar4 = CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                   CONCAT11((byte)((ulonglong)in_RAX >> 8) | (byte)(param_2 >> 8),
                                            cVar3)) >> 8),cVar3);
  uVar1 = (ulonglong)*(uint *)(uVar4 - 0x4ef3ffff);
  uVar4 = (ulonglong)param_2 << 0x20 | uVar4 & 0xffffffff;
  uVar2 = uVar4 / uVar1;
  piVar5 = (int *)(uVar2 & 0xffffffff);
  uVar4 = uVar4 % uVar1;
  *piVar5 = *piVar5 + (int)uVar2;
  pcVar6 = (char *)((longlong)piVar5 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  *pcVar6 = *pcVar6 + (char)((ulonglong)piVar5 >> 8);
  *(byte *)(unaff_RDI + uVar4) = *(byte *)(unaff_RDI + uVar4) | (byte)uVar4;
  uVar7 = (undefined7)((ulonglong)piVar5 >> 8);
  piVar5 = (int *)((ulonglong)piVar5 | 0xb1);
  *piVar5 = *piVar5 + (int)piVar5;
  *(char *)((longlong)piVar5 + -9) = *(char *)((longlong)piVar5 + -9) + unaff_BL;
  *(char *)CONCAT71(uVar8,1) = *(char *)CONCAT71(uVar8,1) + unaff_SPL;
  *(char *)piVar5 = (char)*piVar5 + (char)piVar5;
  *(char *)(param_1 + unaff_RSI) = (char)param_1[unaff_RSI] + (char)param_1;
  *piVar5 = *piVar5 + (int)piVar5;
  *(char *)((longlong)piVar5 + -9) = *(char *)((longlong)piVar5 + -9) + unaff_BL;
  *(char *)CONCAT71(uVar8,1) = *(char *)CONCAT71(uVar8,1) + unaff_SPL;
  *(char *)piVar5 = (char)*piVar5 + (char)piVar5;
  piVar5 = (int *)CONCAT71(uVar7,1);
  *(char *)(param_1 + unaff_RSI) = (char)param_1[unaff_RSI] + (char)param_1;
  *piVar5 = *piVar5 + (int)piVar5;
  out((short)uVar4,(int)piVar5);
  pcVar6 = (char *)CONCAT71(uVar7,1);
  *pcVar6 = *pcVar6 + (char)(uVar4 >> 8);
  pcVar6[-0x4f10ffff] = pcVar6[-0x4f10ffff] ^ 1;
  *pcVar6 = *pcVar6 + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + (int)pcVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


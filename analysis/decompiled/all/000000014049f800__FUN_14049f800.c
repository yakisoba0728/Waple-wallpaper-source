// Function: FUN_14049f800
// Addr: 14049f800
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f800(int *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar4;
  uint *in_RAX;
  undefined7 uVar8;
  char *pcVar5;
  ulonglong uVar6;
  int *piVar7;
  char cVar9;
  byte bVar10;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined7 uVar11;
  
  uVar11 = (undefined7)((ulonglong)param_4 >> 8);
  cVar9 = (char)((ulonglong)param_1 >> 8);
  *in_RAX = *in_RAX & (uint)param_1;
  uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar4 = (char)in_RAX + (char)*in_RAX;
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  *(byte *)(unaff_RSI + param_2) = *(byte *)(unaff_RSI + param_2) | bVar10;
  pcVar5 = (char *)(CONCAT71(uVar8,cVar4) + -0x10fffe50);
  *pcVar5 = *pcVar5 + cVar4;
  pcVar5 = (char *)CONCAT71(uVar8,1);
  *pcVar5 = *pcVar5 + cVar9;
  pbVar1 = (byte *)((longlong)param_1 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  *pbVar1 = *pbVar1 | bVar10;
  out((short)param_2,(int)pcVar5);
  *(char *)CONCAT71(uVar8,1) = *(char *)CONCAT71(uVar8,1) + bVar10;
  uVar6 = CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                   CONCAT11((byte)((ulonglong)in_RAX >> 8) | bVar10,1)) >> 8),1);
  uVar2 = (ulonglong)*(uint *)(uVar6 - 0x4ef3ffff);
  uVar6 = param_2 << 0x20 | uVar6 & 0xffffffff;
  uVar3 = uVar6 / uVar2;
  piVar7 = (int *)(uVar3 & 0xffffffff);
  uVar6 = uVar6 % uVar2;
  *piVar7 = *piVar7 + (int)uVar3;
  pcVar5 = (char *)((longlong)piVar7 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH + bVar10,unaff_BL))
                   );
  *pcVar5 = *pcVar5 + (char)((ulonglong)piVar7 >> 8);
  *(byte *)(unaff_RDI + uVar6) = *(byte *)(unaff_RDI + uVar6) | (byte)uVar6;
  uVar8 = (undefined7)((ulonglong)piVar7 >> 8);
  piVar7 = (int *)((ulonglong)piVar7 | 0xb1);
  *piVar7 = *piVar7 + (int)piVar7;
  *(char *)((longlong)piVar7 + -9) = *(char *)((longlong)piVar7 + -9) + unaff_BL;
  *(char *)CONCAT71(uVar11,1) = *(char *)CONCAT71(uVar11,1) + unaff_SPL;
  *(char *)piVar7 = (char)*piVar7 + (char)piVar7;
  *(char *)(param_1 + unaff_RSI) = (char)param_1[unaff_RSI] + (char)param_1;
  *piVar7 = *piVar7 + (int)piVar7;
  *(char *)((longlong)piVar7 + -9) = *(char *)((longlong)piVar7 + -9) + unaff_BL;
  *(char *)CONCAT71(uVar11,1) = *(char *)CONCAT71(uVar11,1) + unaff_SPL;
  *(char *)piVar7 = (char)*piVar7 + (char)piVar7;
  piVar7 = (int *)CONCAT71(uVar8,1);
  *(char *)(param_1 + unaff_RSI) = (char)param_1[unaff_RSI] + (char)param_1;
  *piVar7 = *piVar7 + (int)piVar7;
  out((short)uVar6,(int)piVar7);
  pcVar5 = (char *)CONCAT71(uVar8,1);
  *pcVar5 = *pcVar5 + (char)(uVar6 >> 8);
  pcVar5[-0x4f10ffff] = pcVar5[-0x4f10ffff] ^ 1;
  *pcVar5 = *pcVar5 + cVar9;
  *param_1 = *param_1 + (int)pcVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


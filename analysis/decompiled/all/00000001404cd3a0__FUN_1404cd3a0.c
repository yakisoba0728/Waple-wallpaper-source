// Function: FUN_1404cd3a0
// Addr: 1404cd3a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd3a0(char *param_1,undefined8 param_2,longlong param_3)

{
  char *pcVar1;
  uint uVar2;
  undefined8 in_RAX;
  int *piVar3;
  char cVar5;
  char cVar6;
  undefined6 uVar7;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  byte *unaff_RSI;
  char unaff_DIL;
  undefined7 unaff_00000039;
  char *unaff_R15;
  char *unaff_retaddr;
  byte *pbStackX_10;
  char *pcVar4;
  
  uVar7 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar6 = (char)((ulonglong)param_2 >> 8);
  cVar5 = (char)param_2;
  pcVar1 = (char *)(CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                             CONCAT11((char)((ulonglong)in_RAX >> 8) + cVar6,
                                                      (char)in_RAX)) >> 8),(char)in_RAX) + 0x41);
  *pcVar1 = *pcVar1 + unaff_BL;
  *(char *)CONCAT71(unaff_00000039,unaff_DIL) =
       *(char *)CONCAT71(unaff_00000039,unaff_DIL) + unaff_BH;
  *(char *)(param_3 + 0x21004cd2) = *(char *)(param_3 + 0x21004cd2) + (char)unaff_retaddr;
  *unaff_retaddr = *unaff_retaddr + (char)unaff_retaddr;
  *unaff_retaddr = *unaff_retaddr + cVar5;
  *unaff_R15 = *unaff_R15 + unaff_DIL;
  *(char *)(param_3 + 0x19004cd2) = *(char *)(param_3 + 0x19004cd2) + (byte)pbStackX_10;
  piVar3 = (int *)CONCAT71((int7)((ulonglong)pbStackX_10 >> 8),
                           ((byte)pbStackX_10 | *pbStackX_10) + 1);
  uVar2 = (int)piVar3 - *piVar3 | 0x9e00bf0;
  pcVar4 = (char *)(ulonglong)uVar2;
  *(char *)CONCAT71(unaff_00000039,unaff_DIL) =
       *(char *)CONCAT71(unaff_00000039,unaff_DIL) << 1 |
       *(char *)CONCAT71(unaff_00000039,unaff_DIL) < '\0';
  cVar6 = cVar6 + *pcVar4;
  *unaff_RSI = *unaff_RSI >> ((byte)param_1 & 0x1f);
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
                   CONCAT62(uVar7,CONCAT11(cVar6,cVar5)) * 8);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(CONCAT62(uVar7,CONCAT11(cVar6,cVar5)) + 1);
  *pcVar1 = *pcVar1 + (char)param_3;
  *pcVar4 = *pcVar4 + (char)uVar2;
  *param_1 = *param_1 - cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


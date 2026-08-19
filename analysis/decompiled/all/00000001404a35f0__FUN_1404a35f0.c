// Function: FUN_1404a35f0
// Addr: 1404a35f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a35f0(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  char cVar7;
  undefined8 in_RAX;
  undefined7 uVar8;
  byte *pbVar5;
  int *piVar6;
  byte bVar9;
  char unaff_BL;
  int unaff_EBP;
  char *unaff_RSI;
  longlong unaff_RDI;
  char in_CF;
  
  bVar9 = (byte)((ulonglong)param_1 >> 8);
  uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
  pbVar5 = (byte *)(CONCAT71(uVar8,(((char)in_RAX - *unaff_RSI) - in_CF) + bVar9) ^ 0x4a);
  cVar7 = (char)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + cVar7;
  *pbVar5 = *pbVar5 + (char)pbVar5;
  bVar3 = *pbVar5;
  *pbVar5 = *pbVar5 + (byte)param_2;
  cVar2 = ((char)pbVar5 - *unaff_RSI) - CARRY1(bVar3,(byte)param_2);
  pbVar5 = (byte *)CONCAT71(uVar8,cVar2);
  bVar3 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar9;
  bVar3 = (cVar2 - *unaff_RSI) - CARRY1(bVar3,bVar9);
  *param_1 = *param_1 + (bVar3 ^ 0x4a);
  piVar6 = (int *)(CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                            CONCAT11(cVar7 + unaff_BL,bVar3)) >> 8),bVar3) ^ 0x44);
  pcVar1 = (char *)((longlong)piVar6 + unaff_RDI * 2);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  uVar4 = (int)piVar6 - *piVar6;
  piVar6 = (int *)((ulonglong)uVar4 + 0x2c);
  *piVar6 = *piVar6 - unaff_EBP;
  cRam00000001574a911a = cRam00000001574a911a + (char)(uVar4 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


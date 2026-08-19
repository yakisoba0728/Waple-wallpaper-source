// Function: FUN_1404cf794
// Addr: 1404cf794
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cf794(byte *param_1,undefined8 param_2,char param_3)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  unkbyte10 Var4;
  uint uVar5;
  longlong in_RAX;
  int *piVar6;
  byte bVar7;
  longlong unaff_RSI;
  byte *unaff_RDI;
  unkbyte10 in_ST0;
  
  bVar7 = (byte)param_2;
  Var4 = to_bcd(in_ST0);
  *(unkbyte10 *)(in_RAX + 0x3b) = Var4;
  pcVar2 = (char *)(unaff_RSI * 9 + 0x4c);
  *pcVar2 = *pcVar2 + (char)((ulonglong)param_2 >> 8);
  bVar3 = *param_1;
  *param_1 = *param_1 + bVar7;
  piVar6 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + '\n' + CARRY1(bVar3,bVar7))
  ;
  pbVar1 = param_1 + (longlong)piVar6;
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar7;
  uVar5 = (int)piVar6 + *piVar6 + (uint)CARRY1(bVar3,bVar7) | 0x9e00bf0;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  param_1[unaff_RSI] = param_1[unaff_RSI] + param_3;
  pcVar2 = (char *)((ulonglong)
                    CONCAT22((short)(uVar5 >> 0x10),
                             CONCAT11((char)(uVar5 >> 8) + (char)((ulonglong)param_1 >> 8),
                                      (char)uVar5)) + 0x5032002b);
  *pcVar2 = *pcVar2 + -0x76;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


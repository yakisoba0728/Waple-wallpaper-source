// Function: FUN_1404cdb1c
// Addr: 1404cdb1c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cdb1c(int *param_1,undefined8 param_2,char param_3)

{
  char *pcVar1;
  byte bVar2;
  byte in_AL;
  undefined7 in_register_00000001;
  char cVar3;
  undefined6 uVar4;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  int unaff_EBP;
  undefined4 unaff_0000002c;
  uint *unaff_RSI;
  longlong unaff_RDI;
  char in_R11B;
  
  uVar4 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar3 = (char)param_2;
  pcVar1 = (char *)(CONCAT62(uVar4,CONCAT11(0x2b,cVar3)) + 0x4c +
                   CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8);
  *pcVar1 = *pcVar1 + cVar3;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + (char)((ulonglong)param_1 >> 8);
  *unaff_RSI = *unaff_RSI ^ (uint)param_1;
  pcVar1 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + -0x26);
  *pcVar1 = *pcVar1 + in_R11B;
  *(char *)(unaff_RSI + unaff_RDI * 2) = (char)unaff_RSI[unaff_RDI * 2] + param_3;
  pcVar1 = (char *)(CONCAT62(uVar4,CONCAT11(0x2b,cVar3)) + CONCAT71(in_register_00000001,in_AL));
  *pcVar1 = *pcVar1 + unaff_BH;
  bVar2 = *(byte *)CONCAT71(in_register_00000001,in_AL);
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *param_1 = (*param_1 - unaff_EBP) - (uint)CARRY1(bVar2,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


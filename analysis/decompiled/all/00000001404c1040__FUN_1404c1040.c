// Function: FUN_1404c1040
// Addr: 1404c1040
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c1040(char param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  byte *pbVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined6 uVar5;
  int unaff_EBP;
  char *unaff_RSI;
  char *unaff_RDI;
  
  uVar5 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar4 = (undefined1)((ulonglong)param_2 >> 8);
  uVar3 = (undefined1)param_2;
  *unaff_RDI = (char)in_EAX;
  out((short)param_2,in_EAX);
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) - (char)in_EAX;
  unaff_RDI[1] = *unaff_RSI;
  pbVar2 = (byte *)func_0x000160651093();
  *pbVar2 = *pbVar2 | (byte)pbVar2;
  *(int *)(pbVar2 + 4) = *(int *)(pbVar2 + 4) + unaff_EBP;
  pcVar1 = (char *)(CONCAT62(uVar5,CONCAT11(uVar4,uVar3)) + (longlong)(unaff_RSI + 1) * 4);
  *pcVar1 = *pcVar1 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


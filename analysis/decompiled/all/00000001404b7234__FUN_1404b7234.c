// Function: FUN_1404b7234
// Addr: 1404b7234
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7234(undefined8 param_1)

{
  char *pcVar1;
  undefined3 uVar2;
  uint uVar3;
  byte bVar4;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  char unaff_BH;
  longlong unaff_RSI;
  
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + 0x21004b + unaff_RSI * 2);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  bVar4 = bRam4900134901004b70;
  uVar2 = (undefined3)((uint)in_EAX >> 8);
  uVar3 = CONCAT31(uVar2,bRam4900134901004b70);
  *(uint *)CONCAT44(in_register_00000004,uVar3) =
       *(uint *)CONCAT44(in_register_00000004,uVar3) | uVar3;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT31(uVar2,(bVar4 | *(byte *)CONCAT44(in_register_00000004,uVar3))
                                            ^ (byte)param_1)) + -0x57dffff3);
  *pcVar1 = *pcVar1 - unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


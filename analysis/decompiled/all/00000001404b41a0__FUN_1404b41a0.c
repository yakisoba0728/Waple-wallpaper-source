// Function: FUN_1404b41a0
// Addr: 1404b41a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b41a0(undefined8 param_1)

{
  byte *pbVar1;
  char *pcVar2;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  byte unaff_BH;
  longlong unaff_RBP;
  
  pbVar1 = (byte *)(CONCAT71(in_register_00000001,in_AL) + 0x11);
  *pbVar1 = *pbVar1 ^ unaff_BH;
  pcVar2 = (char *)(CONCAT71(in_register_00000001,in_AL) + unaff_RBP * 2);
  *pcVar2 = *pcVar2 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


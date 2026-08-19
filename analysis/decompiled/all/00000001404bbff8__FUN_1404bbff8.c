// Function: FUN_1404bbff8
// Addr: 1404bbff8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bbff8(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RBX;
  
  pcVar1 = (char *)(param_1 + 0x22 + unaff_RBX * 2);
  *pcVar1 = *pcVar1 + in_AL + -0x3c;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL + -0x3c) + 0x59);
  *pcVar1 = *pcVar1 + (char)param_1;
  *param_4 = *param_4 + '\b';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


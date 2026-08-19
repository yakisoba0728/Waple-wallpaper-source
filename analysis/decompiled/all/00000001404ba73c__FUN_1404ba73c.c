// Function: FUN_1404ba73c
// Addr: 1404ba73c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba73c(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  char unaff_BH;
  char unaff_SPL;
  longlong unaff_RBP;
  
  *param_4 = *param_4 + unaff_SPL;
  *(byte *)(CONCAT71(in_register_00000001,in_AL) ^ 0xa6) =
       *(char *)(CONCAT71(in_register_00000001,in_AL) ^ 0xa6) + (in_AL ^ 0xa6);
  pcVar1 = (char *)(param_1 + 0x20 + unaff_RBP * 8);
  *pcVar1 = *pcVar1 + unaff_BH;
  *(char *)(param_2 + 0x200020e9) = *(char *)(param_2 + 0x200020e9) + (char)param_1;
  *param_4 = *param_4 + unaff_SPL;
  *(byte *)(CONCAT71(in_register_00000001,in_AL) ^ 0xa6) =
       *(char *)(CONCAT71(in_register_00000001,in_AL) ^ 0xa6) + (in_AL ^ 0xa6);
  *(char *)(CONCAT71(in_register_00000001,in_AL) ^ 0xa6) =
       *(char *)(CONCAT71(in_register_00000001,in_AL) ^ 0xa6) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// Function: FUN_1404cb948
// Addr: 1404cb948
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb948(char *param_1)

{
  char *pcVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  char unaff_R12B;
  
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)(CONCAT71(in_register_00000001,in_AL) ^ 0xb8) =
       *(char *)(CONCAT71(in_register_00000001,in_AL) ^ 0xb8) + (in_AL ^ 0xb8);
  pcVar1 = (char *)((CONCAT71(in_register_00000001,in_AL) ^ 0xb8) + 0x3e);
  *pcVar1 = *pcVar1 + (in_AL ^ 0xb8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


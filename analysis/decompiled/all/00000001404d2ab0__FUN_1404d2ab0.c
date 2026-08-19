// Function: FUN_1404d2ab0
// Addr: 1404d2ab0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2ab0(undefined8 param_1,byte param_2)

{
  char *pcVar1;
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL & param_2)) + 0x19000000);
  *pcVar1 = *pcVar1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// Function: FUN_1404a3b04
// Addr: 1404a3b04
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3b04(char *param_1,uint param_2)

{
  uint *puVar1;
  char in_AL;
  undefined7 in_register_00000001;
  
  puVar1 = (uint *)(CONCAT71(in_register_00000001,in_AL) + 0x39740006);
  *puVar1 = *puVar1 | param_2;
  *param_1 = *param_1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// Function: FUN_1404d286c
// Addr: 1404d286c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404d28bf) */

void FUN_1404d286c(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  char unaff_R15B;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x28004d27);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *(char *)(param_3 + 0x2004d27) = *(char *)(param_3 + 0x2004d27) + unaff_R15B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


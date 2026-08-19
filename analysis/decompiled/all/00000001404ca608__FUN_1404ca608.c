// Function: FUN_1404ca608
// Addr: 1404ca608
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca608(char *param_1,byte *param_2)

{
  char in_AL;
  byte bVar1;
  undefined7 in_register_00000001;
  char unaff_R12B;
  char in_CF;
  
  bVar1 = in_AL + -0x5b + in_CF;
  *param_1 = *param_1 + unaff_R12B;
  *param_2 = *param_2 | bVar1;
  *(char *)CONCAT71(in_register_00000001,bVar1) =
       *(char *)CONCAT71(in_register_00000001,bVar1) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


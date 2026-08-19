// Function: FUN_1404d68a4
// Addr: 1404d68a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d68a4(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  undefined7 in_register_00000001;
  char unaff_R12B;
  
  *param_4 = *param_4 + unaff_R12B;
  *param_2 = *param_2 + 'g';
  *(char *)CONCAT71(in_register_00000001,0x67) = *(char *)CONCAT71(in_register_00000001,0x67) + 'g';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


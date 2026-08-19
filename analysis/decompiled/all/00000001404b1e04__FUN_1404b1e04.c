// Function: FUN_1404b1e04
// Addr: 1404b1e04
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1e04(char *param_1,undefined8 param_2)

{
  char in_AL;
  undefined7 in_register_00000001;
  byte *unaff_RBX;
  char unaff_SPL;
  
  *unaff_RBX = *unaff_RBX | (byte)param_1;
  *param_1 = *param_1 + unaff_SPL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


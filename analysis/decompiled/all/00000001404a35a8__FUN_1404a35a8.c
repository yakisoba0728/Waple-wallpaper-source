// Function: FUN_1404a35a8
// Addr: 1404a35a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a35a8(char *param_1,longlong param_2)

{
  byte in_AL;
  undefined7 in_register_00000001;
  byte *unaff_RBX;
  
  *(char *)(param_2 + (longlong)param_1 * 2) = (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + in_AL;
  *unaff_RBX = *unaff_RBX | in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


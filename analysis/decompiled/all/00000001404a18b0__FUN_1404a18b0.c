// Function: FUN_1404a18b0
// Addr: 1404a18b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a18b0(char *param_1)

{
  int *piVar1;
  int in_EAX;
  undefined4 in_register_00000004;
  
  *param_1 = *param_1 + '\x04';
  piVar1 = (int *)(CONCAT44(in_register_00000004,in_EAX) + CONCAT44(in_register_00000004,in_EAX));
  *piVar1 = *piVar1 + in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


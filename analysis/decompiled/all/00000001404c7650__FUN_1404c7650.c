// Function: FUN_1404c7650
// Addr: 1404c7650
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7650(void)

{
  int *piVar1;
  int in_EAX;
  undefined4 in_register_00000004;
  
  piVar1 = (int *)(CONCAT44(in_register_00000004,in_EAX) + -0xb7ffff4);
  *piVar1 = *piVar1 + in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


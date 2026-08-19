// Function: FUN_1404cffb0
// Addr: 1404cffb0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cffb0(void)

{
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  
  *(undefined4 *)CONCAT44(in_register_00000004,in_EAX) = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


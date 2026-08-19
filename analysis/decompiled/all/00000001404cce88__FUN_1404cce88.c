// Function: FUN_1404cce88
// Addr: 1404cce88
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cce88(void)

{
  int in_EAX;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX + (uint)((byte)in_EAX < 0xe4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


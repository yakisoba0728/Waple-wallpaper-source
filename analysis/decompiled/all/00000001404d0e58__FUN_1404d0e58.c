// Function: FUN_1404d0e58
// Addr: 1404d0e58
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0e58(void)

{
  uint *puVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RBP;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  puVar1 = (uint *)(unaff_RBP + -0x721dffc1);
  *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// Function: FUN_1404a08b4
// Addr: 1404a08b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a08b4(void)

{
  undefined4 uVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  
  uRam00000001744f08bc = uRam00000001744f08bc & in_EAX;
  uVar1 = LocalDescriptorTableRegister();
  *(undefined4 *)(CONCAT44(in_register_00000004,in_EAX) + -0x3bfffca0) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// Function: FUN_1404d6524
// Addr: 1404d6524
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6524(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = LocalDescriptorTableRegister();
  *(undefined4 *)(&stack0x00000000 + param_2 * 2) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


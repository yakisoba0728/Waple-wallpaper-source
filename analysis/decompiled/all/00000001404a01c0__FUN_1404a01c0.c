// Function: FUN_1404a01c0
// Addr: 1404a01c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a01c0(char param_1,char *param_2)

{
  undefined4 uVar1;
  longlong in_FS_OFFSET;
  
  *param_2 = *param_2 + param_1;
  uVar1 = LocalDescriptorTableRegister();
  *(undefined4 *)(in_FS_OFFSET + 0x1004a1021) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


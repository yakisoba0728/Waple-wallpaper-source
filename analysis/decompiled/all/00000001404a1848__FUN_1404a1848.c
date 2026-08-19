// Function: FUN_1404a1848
// Addr: 1404a1848
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1848(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  uint *in_RAX;
  undefined4 *unaff_RDI;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


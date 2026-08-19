// Function: FUN_1404aa330
// Addr: 1404aa330
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa330(char *param_1,byte param_2)

{
  undefined4 uVar1;
  undefined4 *in_RAX;
  char *unaff_RBX;
  
  uVar1 = *in_RAX;
  *param_1 = *param_1 + (char)in_RAX;
  *unaff_RBX = *unaff_RBX + (param_2 | (byte)uVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


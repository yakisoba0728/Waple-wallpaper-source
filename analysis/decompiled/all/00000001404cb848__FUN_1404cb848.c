// Function: FUN_1404cb848
// Addr: 1404cb848
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cb85a) overlaps instruction at (ram,0x0001404cb858)
    */

void FUN_1404cb848(char *param_1)

{
  uint in_EAX;
  uint uVar1;
  undefined1 *unaff_RBX;
  
  *param_1 = *param_1 + (char)in_EAX;
  uVar1 = in_EAX | uRam0000000147aec353;
  param_1 = param_1 + -1;
  if (param_1 == (char *)0x0 || uVar1 == 0) {
    *unaff_RBX = *unaff_RBX;
    *param_1 = *param_1 + (char)(uVar1 >> 8);
  }
  else {
    *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
    uRam000000013451b864 = uRam000000013451b864 & uVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// Function: FUN_14049e1ac
// Addr: 14049e1ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e1ac(int *param_1,char param_2,char *param_3)

{
  byte bVar1;
  uint uVar2;
  char *in_RAX;
  char *unaff_RBX;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  *param_1 = *param_1 + (int)param_1;
  uVar2 = (int)in_RAX + 0x5a20900;
  if (!SCARRY4((int)in_RAX,0x5a20900)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = (byte)uVar2;
  *(byte *)(ulonglong)uVar2 = *(byte *)(ulonglong)uVar2 ^ bVar1;
  *(byte *)param_1 = (char)*param_1 + bVar1;
  if (bVar1 != 0 || *param_3 != '\0') {
    *unaff_RBX = *unaff_RBX + param_2;
  }
  *unaff_RBX = *unaff_RBX + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


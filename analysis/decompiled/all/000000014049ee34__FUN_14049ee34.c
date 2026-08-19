// Function: FUN_14049ee34
// Addr: 14049ee34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049ee34(char *param_1,char param_2,undefined8 param_3,char *param_4)

{
  int *in_RAX;
  char *pcVar1;
  int *unaff_RBX;
  char unaff_SPL;
  longlong unaff_RBP;
  int unaff_ESI;
  byte in_CF;
  
  *unaff_RBX = *unaff_RBX + unaff_ESI + (uint)in_CF;
  *in_RAX = *in_RAX + (int)in_RAX;
  pcVar1 = (char *)((ulonglong)in_RAX & 0xffffffffffffffed);
  *param_4 = *param_4 + unaff_SPL;
  *pcVar1 = *pcVar1 + (char)pcVar1;
  *param_1 = *param_1 + param_2;
  pcVar1 = (char *)(unaff_RBP * 8 + 0x1c010049);
  *pcVar1 = *pcVar1 + ((byte)((ulonglong)in_RAX >> 8) ^ (byte)((uint)*(undefined4 *)param_1 >> 8));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


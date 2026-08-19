// Function: FUN_14049ee10
// Addr: 14049ee10
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049ee10(char *param_1,char param_2)

{
  char *pcVar1;
  int in_EAX;
  longlong unaff_RBP;
  
  *param_1 = *param_1 + param_2;
  pcVar1 = (char *)(unaff_RBP * 8 + 0x210049);
  *pcVar1 = *pcVar1 + ((byte)((uint)(in_EAX + -0x1ffff5ac) >> 8) ^
                      (byte)((uint)*(undefined4 *)param_1 >> 8));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


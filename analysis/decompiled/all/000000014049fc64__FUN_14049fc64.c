// Function: FUN_14049fc64
// Addr: 14049fc64
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049fc64(longlong param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  char *in_RAX;
  char *pcVar2;
  
  *param_4 = *param_4;
  *in_RAX = *in_RAX + (char)param_1;
  cVar1 = (char)in_RAX;
  *in_RAX = *in_RAX + cVar1;
  if (-1 < *in_RAX) {
    *in_RAX = *in_RAX + cVar1;
    out((short)param_2,cVar1);
    *in_RAX = *in_RAX + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = *param_2 + (int)param_1;
  pcVar2 = (char *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                            CONCAT11((byte)((ulonglong)param_2 >> 8) | (&stack0x00000000)[param_1],
                                     (char)param_2));
  *pcVar2 = *pcVar2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


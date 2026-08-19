// Function: FUN_14049ea4c
// Addr: 14049ea4c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049ea4c(undefined8 param_1,undefined8 param_2)

{
  uint in_EAX;
  char *pcVar1;
  int unaff_EBP;
  char in_CF;
  
  pcVar1 = (char *)(ulonglong)(in_EAX | 0xbc41100);
  cRam000000016449f4ad = cRam000000016449f4ad + (char)in_EAX;
  *pcVar1 = *pcVar1 + (char)in_EAX;
  pcVar1 = (char *)((longlong)
                    (CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                              CONCAT11(((char)((ulonglong)param_2 >> 8) - (char)(in_EAX >> 8)) -
                                       in_CF,(char)param_2)) << 0x20 | (ulonglong)pcVar1) /
                    (longlong)unaff_EBP & 0xffffffff);
  *pcVar1 = *pcVar1 + (char)pcVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// Function: FUN_14049fcd8
// Addr: 14049fcd8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049fcd8(longlong param_1,int *param_2)

{
  byte bVar1;
  ulonglong in_RAX;
  char *pcVar2;
  byte *unaff_RSI;
  char *pcStack_8;
  
  bVar1 = (byte)in_RAX | 0xd0;
  pcStack_8 = (char *)(in_RAX | 0xd0);
  pcStack_8[7] = pcStack_8[7] | (byte)(in_RAX >> 8);
  *unaff_RSI = *unaff_RSI ^ bVar1;
  *pcStack_8 = *pcStack_8 + bVar1;
  *param_2 = *param_2 + (int)param_1;
  pcVar2 = (char *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                            CONCAT11((byte)((ulonglong)param_2 >> 8) |
                                     *(byte *)((longlong)&pcStack_8 + param_1),(char)param_2));
  *pcVar2 = *pcVar2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


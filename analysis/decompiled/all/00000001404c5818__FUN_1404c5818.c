// Function: FUN_1404c5818
// Addr: 1404c5818
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5818(longlong param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *in_RAX;
  char *pcVar3;
  
  bVar2 = (byte)in_RAX;
  *in_RAX = *in_RAX + bVar2;
  bVar1 = *in_RAX;
  *in_RAX = *in_RAX + bVar2;
  *param_2 = (*param_2 - (int)param_1) - (uint)CARRY1(bVar1,bVar2);
  pcVar3 = (char *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                            CONCAT11((byte)((ulonglong)param_2 >> 8) | (&stack0x00000000)[param_1],
                                     (char)param_2));
  *pcVar3 = *pcVar3 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


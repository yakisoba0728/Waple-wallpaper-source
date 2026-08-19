// Function: FUN_1404acc6c
// Addr: 1404acc6c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404acc6c(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  uint *in_RAX;
  char *pcVar2;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar1 = (byte)in_RAX | (byte)*in_RAX;
  pcVar2 = (char *)(ulonglong)
                   ((uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                   CONCAT11(((char)((ulonglong)in_RAX >> 8) +
                                            (char)((ulonglong)param_2 >> 8)) * '\x02',bVar1)) |
                   0x15d40000);
  *pcVar2 = *pcVar2 + bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


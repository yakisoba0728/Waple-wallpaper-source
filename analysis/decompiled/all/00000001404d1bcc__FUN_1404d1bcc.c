// Function: FUN_1404d1bcc
// Addr: 1404d1bcc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1bcc(undefined8 param_1,undefined8 param_2)

{
  uint *in_RAX;
  char *pcVar1;
  byte in_CF;
  
  bRam00000001563e1c12 = bRam00000001563e1c12 << 1 | in_CF;
  *in_RAX = *in_RAX & (uint)in_RAX;
  pcVar1 = (char *)(ulonglong)
                   ((uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                   CONCAT11(((char)((ulonglong)in_RAX >> 8) +
                                            (char)((ulonglong)param_2 >> 8)) * '\x02',(char)in_RAX))
                   | 0xed40000);
  *pcVar1 = *pcVar1 + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


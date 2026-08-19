// Function: FUN_1404d1bdc
// Addr: 1404d1bdc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1bdc(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_RAX;
  char *pcVar1;
  
  pcVar1 = (char *)(ulonglong)
                   ((uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                   CONCAT11(((char)((ulonglong)in_RAX >> 8) +
                                            (char)((ulonglong)param_2 >> 8)) * '\x02',(char)in_RAX))
                   | 0xed40000);
  *pcVar1 = *pcVar1 + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


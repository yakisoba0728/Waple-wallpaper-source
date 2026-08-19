// Function: FUN_1404d71a8
// Addr: 1404d71a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d71a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_RAX;
  char *pcVar1;
  
  pcVar1 = (char *)(ulonglong)
                   ((uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                   CONCAT11((char)((ulonglong)in_RAX >> 8) +
                                            (char)((ulonglong)param_2 >> 8),(char)in_RAX)) |
                   0xee40000);
  *pcVar1 = *pcVar1 + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


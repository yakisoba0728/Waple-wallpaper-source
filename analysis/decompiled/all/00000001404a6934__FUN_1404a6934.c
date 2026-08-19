// Function: FUN_1404a6934
// Addr: 1404a6934
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6934(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 in_RAX;
  
  uVar1 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11(((char)((ulonglong)in_RAX >> 8) + (char)((ulonglong)param_2 >> 8))
                                 * '\x02',(char)in_RAX)) + 0x6d40000;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


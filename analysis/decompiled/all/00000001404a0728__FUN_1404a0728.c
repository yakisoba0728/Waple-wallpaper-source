// Function: FUN_1404a0728
// Addr: 1404a0728
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0728(undefined8 param_1,char param_2)

{
  uint uVar1;
  undefined8 in_RAX;
  
  uVar1 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((char)((ulonglong)in_RAX >> 8) + param_2 + (char)in_RAX,
                                 (char)in_RAX)) + 0x6740000;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


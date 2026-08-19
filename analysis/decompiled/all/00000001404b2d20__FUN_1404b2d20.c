// Function: FUN_1404b2d20
// Addr: 1404b2d20
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2d20(void)

{
  uint uVar1;
  undefined8 in_RAX;
  
  uVar1 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((char)((ulonglong)in_RAX >> 8) * '\x02',(char)in_RAX)) + 0xcd40000;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


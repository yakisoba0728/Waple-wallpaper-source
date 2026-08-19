// Function: FUN_1404b9068
// Addr: 1404b9068
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9068(void)

{
  char cVar1;
  undefined8 in_RAX;
  char *pcVar2;
  
  cVar1 = (char)in_RAX;
  pcVar2 = (char *)(ulonglong)
                   ((uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                   CONCAT11((char)((ulonglong)in_RAX >> 8) + cVar1,cVar1)) |
                   0xb740000);
  *pcVar2 = *pcVar2 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


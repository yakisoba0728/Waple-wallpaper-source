// Function: FUN_1404b9bbc
// Addr: 1404b9bbc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9bbc(void)

{
  byte *pbVar1;
  char cVar2;
  undefined8 in_RAX;
  char *pcVar3;
  longlong unaff_RBP;
  
  cVar2 = (char)in_RAX;
  pcVar3 = (char *)(ulonglong)
                   ((uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                   CONCAT11((char)((ulonglong)in_RAX >> 8) + cVar2,cVar2)) |
                   0xb740000);
  *pcVar3 = *pcVar3 + cVar2;
  pbVar1 = (byte *)(unaff_RBP + -0x79f0ffe1);
  *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


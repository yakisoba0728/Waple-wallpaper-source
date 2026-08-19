// Function: FUN_1404bfa5c
// Addr: 1404bfa5c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bfa5c(undefined8 param_1,char param_2)

{
  char cVar1;
  undefined8 in_RAX;
  char *pcVar2;
  
  cVar1 = (char)in_RAX;
  pcVar2 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) * '\x02',cVar1));
  *pcVar2 = *pcVar2 + cVar1;
  pcVar2 = (char *)((CONCAT71((int7)((ulonglong)pcVar2 >> 8),cVar1) ^ 0x3f) - 0x22ffd869);
  *pcVar2 = *pcVar2 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


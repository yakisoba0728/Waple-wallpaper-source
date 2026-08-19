// Function: FUN_1404a04b8
// Addr: 1404a04b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a04b8(void)

{
  char cVar1;
  ulonglong in_RAX;
  char *pcVar2;
  char *in_R9;
  
  pcVar2 = (char *)(in_RAX ^ 0xe6);
  *in_R9 = *in_R9;
  cVar1 = (char)pcVar2;
  *pcVar2 = *pcVar2 + cVar1;
  pcVar2[0x35] = pcVar2[0x35] + cVar1;
  *in_R9 = *in_R9 + (cVar1 + (char)*(undefined4 *)pcVar2 ^ 3U);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


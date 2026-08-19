// Function: FUN_1404c6a24
// Addr: 1404c6a24
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6a24(longlong param_1,longlong param_2)

{
  byte bVar1;
  char *pcVar2;
  byte bVar3;
  int *in_RAX;
  byte *pbVar4;
  
  pcVar2 = (char *)(param_2 * 2);
  *pcVar2 = *pcVar2 + (char)param_2;
  pbVar4 = (byte *)(param_1 + -1);
  if (pbVar4 == (byte *)0x0 || *pcVar2 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *in_RAX = *in_RAX + (int)in_RAX;
  bVar1 = *pbVar4;
  bVar3 = (byte)((ulonglong)in_RAX >> 8);
  *pbVar4 = *pbVar4 + bVar3;
  *(char *)((longlong)in_RAX * 2) =
       *(char *)((longlong)in_RAX * 2) + (char)in_RAX + CARRY1(bVar1,bVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


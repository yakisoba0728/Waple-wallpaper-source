// Function: FUN_1404a9c50
// Addr: 1404a9c50
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9c50(char *param_1)

{
  char cVar2;
  uint in_EAX;
  char *pcVar1;
  char *pcVar3;
  longlong unaff_RBX;
  
  out(0x2b,in_EAX);
  pcVar1 = (char *)(ulonglong)(in_EAX | 0x4a9b6400);
  cVar2 = (char)((in_EAX | 0x4a9b6400) >> 8);
  *param_1 = *param_1 + cVar2;
  *pcVar1 = *pcVar1 + (char)in_EAX;
  *pcVar1 = *pcVar1 + cVar2;
  pcVar3 = (char *)(ulonglong)(uint)((int)param_1 - iRam000000014d768363);
  pcVar1 = (char *)(unaff_RBX * 5 + 0x4a);
  *pcVar1 = *pcVar1 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


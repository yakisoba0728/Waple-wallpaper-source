// Function: FUN_1404ceb4c
// Addr: 1404ceb4c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ceb4c(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined8 in_RAX;
  longlong lStack_8;
  byte *pbVar3;
  
  lStack_8 = param_2;
  bVar2 = in(9);
  pbVar3 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2);
  pcVar1 = (char *)((longlong)&lStack_8 + param_2 * 2);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  *pbVar3 = *pbVar3 | bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


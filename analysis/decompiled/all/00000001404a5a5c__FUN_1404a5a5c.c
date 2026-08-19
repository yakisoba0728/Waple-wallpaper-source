// Function: FUN_1404a5a5c
// Addr: 1404a5a5c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5a5c(longlong param_1,char *param_2)

{
  byte bVar1;
  char cVar3;
  char *in_RAX;
  char cVar4;
  char cVar6;
  char *pcVar5;
  byte *pbVar2;
  
  cVar6 = (char)((ulonglong)param_1 >> 8);
  in_RAX[2] = in_RAX[2] + cVar6;
  bVar1 = (byte)in_RAX;
  *in_RAX = *in_RAX + bVar1;
  cVar4 = (char)param_1;
  *in_RAX = cVar4;
  cVar3 = (char)((ulonglong)in_RAX >> 8);
  *param_2 = *param_2 + cVar3;
  *in_RAX = cVar4;
  in_RAX[0x210049ef] = in_RAX[0x210049ef] + cVar6;
  *in_RAX = *in_RAX + bVar1;
  *in_RAX = *in_RAX + bVar1;
  *in_RAX = cVar4;
  *param_2 = *param_2 + cVar3;
  *in_RAX = cVar4;
  in_RAX[0x10049ef] = in_RAX[0x10049ef] + cVar6;
  bVar1 = bVar1 | bRam0000000146cc6483;
  pbVar2 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1);
  pcVar5 = (char *)(param_1 + -1);
  if (pcVar5 == (char *)0x0 || bVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar2 = *pbVar2 ^ bVar1;
  *pcVar5 = *pcVar5 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


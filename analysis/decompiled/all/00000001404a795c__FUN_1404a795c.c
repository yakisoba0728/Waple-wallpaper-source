// Function: FUN_1404a795c
// Addr: 1404a795c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a795c(char *param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  char cVar5;
  byte *in_RAX;
  byte unaff_BH;
  char in_CF;
  longlong lVar4;
  
  in_RAX[0x4a] = (in_RAX[0x4a] - unaff_BH) - in_CF;
  cVar5 = (char)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + cVar5;
  *in_RAX = *in_RAX + (byte)in_RAX;
  in_RAX[0x53] = in_RAX[0x53] + cVar5;
  bVar2 = (byte)in_RAX | *in_RAX;
  lVar4 = CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2);
  param_1[param_2] = param_1[param_2] + (char)param_2;
  pbVar1 = (byte *)(lVar4 + 0x4a);
  *pbVar1 = *pbVar1 | unaff_BH;
  *param_1 = *param_1 + bVar2;
  uVar3 = (uint)lVar4 | 0x10d0003;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 - (char)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


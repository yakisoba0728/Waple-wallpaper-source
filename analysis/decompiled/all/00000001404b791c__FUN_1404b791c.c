// Function: FUN_1404b791c
// Addr: 1404b791c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b791c(char *param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  char *in_RAX;
  char *pcVar5;
  byte bVar6;
  char unaff_BH;
  int unaff_EBP;
  
  in_RAX[0x4b] = in_RAX[0x4b] - unaff_BH;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  *in_RAX = *in_RAX + (char)in_RAX;
  pbVar1 = (byte *)(in_RAX + 0x7001d94);
  bVar2 = *pbVar1;
  bVar6 = (byte)param_2;
  *pbVar1 = *pbVar1 + bVar6;
  uVar4 = (unaff_EBP + -0x4b782800) - (uint)CARRY1(bVar2,bVar6);
  *param_1 = *param_1 + (char)(uVar4 >> 8);
  pcVar5 = (char *)((ulonglong)uVar4 * 2);
  cVar3 = (char)uVar4;
  *pcVar5 = *pcVar5 + cVar3;
  *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + (char)((ushort)param_2 >> 8)
  ;
  pbVar1 = (byte *)(param_1 + uVar4);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar6;
  uVar4 = ((int)&stack0x00000000 + -0x1d950700) - (uint)CARRY1(bVar2,bVar6);
  pcVar5 = (char *)(ulonglong)uVar4;
  *pcVar5 = *pcVar5 + (char)((ulonglong)param_1 >> 8);
  if (-1 < *pcVar5) {
    *param_1 = *param_1 + (char)(uVar4 >> 8);
    uVar4 = uVar4 + 0x54050002;
    *(byte *)(ulonglong)uVar4 = *(byte *)(ulonglong)uVar4 | (byte)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4 + cVar3;
  *pcVar5 = *pcVar5 + (char)uVar4;
  pcVar5[-0x68] = pcVar5[-0x68] + (char)uVar4;
  in(param_2);
  *param_4 = *param_4 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


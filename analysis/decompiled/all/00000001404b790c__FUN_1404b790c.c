// Function: FUN_1404b790c
// Addr: 1404b790c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b790c(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  char cVar2;
  uint in_EAX;
  uint uVar3;
  uint uVar4;
  char *pcVar6;
  char cVar7;
  byte bVar8;
  int unaff_EBP;
  byte *pbVar5;
  
  bVar8 = (byte)param_2;
  cVar7 = (char)((ulonglong)param_1 >> 8);
  uVar3 = in_EAX + 0x90000854;
  uVar4 = ((int)&stack0x00000000 + -0x1d950700) - (uint)(0x6ffff7ab < in_EAX);
  pbVar5 = (byte *)(ulonglong)uVar4;
  *pbVar5 = *pbVar5 + cVar7;
  bVar1 = (byte)uVar4;
  if ((char)*pbVar5 < '\0') {
    *param_1 = *param_1 + (char)uVar3;
    *param_2 = *param_2 + bVar1;
    *pbVar5 = *pbVar5 + bVar1;
    *(ulonglong *)((ulonglong)uVar3 - 8) = (ulonglong)uVar3;
    *pbVar5 = *pbVar5 | bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + (char)(uVar4 >> 8);
  *pbVar5 = *pbVar5 + bVar1;
  pbVar5 = pbVar5 + 0x7001d94;
  bVar1 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar8;
  uVar3 = (unaff_EBP + -0x4b782800) - (uint)CARRY1(bVar1,bVar8);
  *param_1 = *param_1 + (char)(uVar3 >> 8);
  pcVar6 = (char *)((ulonglong)uVar3 * 2);
  cVar2 = (char)uVar3;
  *pcVar6 = *pcVar6 + cVar2;
  *(char *)((longlong)param_1 * 2) =
       *(char *)((longlong)param_1 * 2) + (char)((ulonglong)param_2 >> 8);
  pbVar5 = (byte *)(param_1 + uVar3);
  bVar1 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar8;
  uVar3 = (in_EAX + 0x726b0154) - (uint)CARRY1(bVar1,bVar8);
  pcVar6 = (char *)(ulonglong)uVar3;
  *pcVar6 = *pcVar6 + cVar7;
  if (-1 < *pcVar6) {
    *param_1 = *param_1 + (char)(uVar3 >> 8);
    uVar3 = uVar3 + 0x54050002;
    *(byte *)(ulonglong)uVar3 = *(byte *)(ulonglong)uVar3 | (byte)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4 + cVar2;
  *pcVar6 = *pcVar6 + (char)uVar3;
  pcVar6[-0x68] = pcVar6[-0x68] + (char)uVar3;
  in((short)param_2);
  *param_4 = *param_4 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


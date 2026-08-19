// Function: FUN_1404b78d4
// Addr: 1404b78d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b78d4(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint *in_RAX;
  undefined7 uVar7;
  byte bVar8;
  char *pcVar6;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar5 = *in_RAX;
  bVar2 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar2;
  param_2[-0x6d01ffe3] = param_2[-0x6d01ffe3] + '\x1d' + CARRY1((byte)uVar5,bVar2);
  bVar4 = (byte)((ulonglong)in_RAX >> 8);
  uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar3 = bVar2 + bVar4;
  pcVar6 = (char *)CONCAT71(uVar7,cVar3);
  bVar8 = (byte)param_2;
  if (CARRY1(bVar2,bVar4) || cVar3 == '\0') {
    *param_1 = *param_1 + bVar4;
    *param_2 = *param_2 + cVar3;
    *pcVar6 = *pcVar6 + cVar3;
    bVar4 = in(10);
    pbVar1 = (byte *)(CONCAT71(uVar7,bVar4) + -0x1ffe26e);
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar4;
    *param_1 = *param_1 + (bVar8 - CARRY1(bVar2,bVar4));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4;
  *(char *)((longlong)pcVar6 * 2) = *(char *)((longlong)pcVar6 * 2) + cVar3;
  *(char *)((longlong)param_1 * 2) =
       *(char *)((longlong)param_1 * 2) + (char)((ulonglong)param_2 >> 8);
  pbVar1 = (byte *)(pcVar6 + (longlong)param_1);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar8;
  uVar5 = ((int)&stack0x00000000 + -0x1d950700) - (uint)CARRY1(bVar2,bVar8);
  pcVar6 = (char *)(ulonglong)uVar5;
  *pcVar6 = *pcVar6 + (char)((ulonglong)param_1 >> 8);
  if (-1 < *pcVar6) {
    *param_1 = *param_1 + (char)(uVar5 >> 8);
    uVar5 = uVar5 + 0x54050002;
    *(byte *)(ulonglong)uVar5 = *(byte *)(ulonglong)uVar5 | (byte)uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4 + cVar3;
  *pcVar6 = *pcVar6 + (char)uVar5;
  pcVar6[-0x68] = pcVar6[-0x68] + (char)uVar5;
  in((short)param_2);
  *param_4 = *param_4 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


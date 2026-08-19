// Function: FUN_1404acfb4
// Addr: 1404acfb4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404acfb4(char *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  int in_EAX;
  uint uVar3;
  byte *pbVar4;
  char unaff_BH;
  
  uVar3 = in_EAX + 0x3600470;
  bVar2 = (byte)uVar3;
  *param_2 = *param_2 ^ bVar2;
  *(uint *)(ulonglong)uVar3 = *(uint *)(ulonglong)uVar3 & (uint)param_2;
  pbVar4 = (byte *)(ulonglong)uVar3;
  pbVar4[0x33] = pbVar4[0x33] + unaff_BH;
  bVar1 = *pbVar4;
  *pbVar4 = *pbVar4 + (byte)param_1;
  *(uint *)pbVar4 = *(int *)pbVar4 + uVar3 + (uint)CARRY1(bVar1,(byte)param_1);
  *param_1 = *param_1 + -0x10;
  *(char *)((longlong)pbVar4 * 2) = *(char *)((longlong)pbVar4 * 2) + bVar2;
  pbVar4[0x33] = pbVar4[0x33] + unaff_BH;
  bVar1 = *pbVar4;
  *pbVar4 = *pbVar4 + bVar2;
  *(uint *)pbVar4 = *(int *)pbVar4 + uVar3 + (uint)CARRY1(bVar1,bVar2);
  *param_1 = *param_1 + -0x18;
  *pbVar4 = *pbVar4 + bVar2;
  pbVar4[0x6400113c] = pbVar4[0x6400113c] + bVar2;
  *param_1 = *param_1 + -0x18;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


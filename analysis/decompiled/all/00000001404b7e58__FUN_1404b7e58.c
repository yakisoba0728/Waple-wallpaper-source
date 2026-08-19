// Function: FUN_1404b7e58
// Addr: 1404b7e58
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7e58(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  int in_EAX;
  uint uVar3;
  char *pcVar4;
  longlong unaff_RBX;
  
  uVar3 = in_EAX + 0x53000964;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
  pbVar1 = (byte *)(unaff_RBX + -0x3f);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + (byte)param_2;
  uVar3 = (in_EAX + 0x353d6a64) - (uint)CARRY1(bVar2,(byte)param_2);
  pcVar4 = (char *)(ulonglong)uVar3;
  pcVar4[0x7d] = pcVar4[0x7d] + (char)((ulonglong)param_1 >> 8);
  *param_4 = *param_4 + -8;
  *pcVar4 = *pcVar4 + (char)uVar3;
  *pcVar4 = *pcVar4 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


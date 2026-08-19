// Function: FUN_1404bc81c
// Addr: 1404bc81c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc81c(longlong param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  short sVar2;
  uint *in_RAX;
  undefined7 uVar5;
  char *pcVar4;
  char *pcVar6;
  byte *pbVar3;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(byte *)in_RAX = (char)*in_RAX + (byte)in_RAX;
  sVar2 = (ushort)(byte)in_RAX * (ushort)*param_2;
  pbVar3 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),sVar2);
  pcVar4 = (char *)(param_1 + -0x37ffdd0a);
  *pcVar4 = *pcVar4 + (char)param_1;
  pcVar6 = (char *)(param_1 + -1);
  if (pcVar6 == (char *)0x0 || *pcVar4 == '\0') {
    *pcVar6 = *pcVar6 + (char)((ushort)sVar2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar5 = (undefined7)((ulonglong)pbVar3 >> 8);
  bVar1 = (byte)sVar2 & *pbVar3;
  pbVar3 = (byte *)CONCAT71(uVar5,bVar1);
  *param_4 = *param_4 + '\x18';
  *pbVar3 = *pbVar3 + bVar1;
  pbVar3[-0x7bffdd07] = pbVar3[-0x7bffdd07] + (char)param_2;
  bVar1 = bVar1 & *pbVar3;
  pcVar4 = (char *)CONCAT71(uVar5,bVar1);
  *param_4 = *param_4 + '\x18';
  *param_2 = *param_2 + bVar1;
  *pcVar4 = *pcVar4 + bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


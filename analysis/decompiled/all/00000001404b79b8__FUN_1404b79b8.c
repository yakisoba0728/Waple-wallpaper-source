// Function: FUN_1404b79b8
// Addr: 1404b79b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b79b8(longlong param_1,char *param_2,undefined8 param_3,undefined1 *param_4)

{
  byte bVar1;
  byte bVar6;
  uint uVar2;
  int iVar3;
  char cVar7;
  byte *pbVar5;
  uint *in_RAX;
  char *pcVar8;
  char *pcVar4;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar2 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + (byte)in_RAX;
  pcVar8 = (char *)(param_1 + -1);
  if (pcVar8 == (char *)0x0 || (byte)*in_RAX == 0) {
    in((short)param_2);
    *param_4 = *param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = ((uint)in_RAX + 0xb54f1400) - (uint)CARRY1((byte)uVar2,(byte)in_RAX);
  pcVar4 = (char *)(ulonglong)uVar2;
  bVar6 = (byte)(uVar2 >> 8);
  *pcVar8 = *pcVar8 + bVar6;
  *pcVar4 = *pcVar4 + (char)uVar2;
  pbVar5 = (byte *)(pcVar4 + -0x6a);
  bVar1 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar6;
  iVar3 = (uVar2 + 0xe2692e00) - (uint)CARRY1(bVar1,bVar6);
  cVar7 = (char)((uint)iVar3 >> 8) + (char)((ulonglong)pcVar8 >> 8);
  pbVar5 = (byte *)CONCAT71((uint7)CONCAT21((short)((uint)iVar3 >> 0x10),cVar7),0x4a);
  *pcVar8 = *pcVar8 + cVar7;
  *param_2 = *param_2 + 'J';
  *pbVar5 = *pbVar5 + 0x4a;
  *pbVar5 = *pbVar5 | 0x4a;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


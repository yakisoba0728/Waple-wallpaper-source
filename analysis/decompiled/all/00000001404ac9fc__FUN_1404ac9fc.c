// Function: FUN_1404ac9fc
// Addr: 1404ac9fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac9fc(byte param_1,ulonglong param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  byte *in_RAX;
  char *pcVar8;
  char *pcVar10;
  byte *pbVar11;
  byte bVar12;
  undefined4 unaff_EBX;
  char unaff_BPL;
  longlong unaff_RSI;
  uint unaff_EDI;
  byte *pbVar7;
  uint *puVar9;
  
  *(uint *)(in_RAX + -0x57d4fff9) = *(uint *)(in_RAX + -0x57d4fff9) ^ unaff_EDI;
  *in_RAX = *in_RAX | (byte)in_RAX;
  bVar12 = (byte)unaff_EBX & in_RAX[-0x77e6fff7];
  bVar2 = (byte)in_RAX | *in_RAX;
  pbVar7 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2);
  pbVar7[0xb] = pbVar7[0xb] + (char)((uint)unaff_EBX >> 8);
  bVar5 = *pbVar7;
  *pbVar7 = *pbVar7 + param_1;
  bVar4 = *pbVar7;
  bVar1 = *pbVar7;
  *pbVar7 = bVar1 + bVar2 + CARRY1(bVar5,param_1);
  pcVar8 = (char *)(param_2 & 0xffffffff);
  pcVar10 = (char *)((ulonglong)pbVar7 & 0xffffffff);
  bVar3 = (byte)pcVar8;
  *pcVar8 = *pcVar8 + bVar3 + (CARRY1(bVar4,bVar2) || CARRY1(bVar1 + bVar2,CARRY1(bVar5,param_1)));
  *pcVar8 = *pcVar8 + bVar3;
  pbVar7 = (byte *)(pcVar8 + 0x59001091);
  bVar5 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar3;
  pbVar11 = (byte *)(param_2 & 0xffffffff);
  bVar4 = (byte)pcVar10;
  *pcVar10 = *pcVar10 + bVar4 + CARRY1(bVar5,bVar3);
  cRamffffffff9180000c = cRamffffffff9180000c + bVar4;
  *pbVar11 = *pbVar11 | bVar4;
  *pcVar10 = *pcVar10 + '\f';
  bVar5 = (char)pbVar11 + 0x70;
  pbVar7 = (byte *)CONCAT71((int7)((ulonglong)pbVar11 >> 8),bVar5);
  *(uint *)(pbVar7 + -0x6e7ffff4) =
       *(uint *)(pbVar7 + -0x6e7ffff4) & CONCAT31((int3)((uint)unaff_EBX >> 8),bVar12);
  (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + bVar12;
  *pbVar7 = *pbVar7 | bVar5;
  cRamffffffff9180000c = cRamffffffff9180000c + unaff_BPL + '\b';
  uVar6 = (int)CONCAT71(CONCAT61((int6)((ulonglong)pbVar11 >> 0x10),
                                 (char)((ulonglong)pbVar11 >> 8) +
                                 *(char *)(unaff_RSI + -0x6e7ffff4)),uRam6000109aa800109a) +
          0xe4050002;
  puVar9 = (uint *)(ulonglong)uVar6;
  *puVar9 = *puVar9 | uVar6;
  *(char *)puVar9 = (char)*puVar9 + (char)uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// Function: FUN_1404a356c
// Addr: 1404a356c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a356c(uint param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint in_EAX;
  uint uVar5;
  char *pcVar7;
  int unaff_ESI;
  undefined4 unaff_00000034;
  byte in_CF;
  uint *puVar6;
  
  uVar5 = in_EAX * 2 + (uint)in_CF;
  puVar6 = (uint *)(ulonglong)uVar5;
  puVar6[4] = puVar6[4] + unaff_ESI +
              (uint)(CARRY4(in_EAX,in_EAX) || CARRY4(in_EAX * 2,(uint)in_CF));
  *(char *)puVar6 = (char)*puVar6 + (char)uVar5;
  *puVar6 = *puVar6 & param_1;
  bVar3 = (char)uVar5 + (char)*puVar6;
  uVar5 = CONCAT22((short)(uVar5 >> 0x10),CONCAT11((byte)(uVar5 >> 8) | (byte)param_2,bVar3));
  pbVar1 = (byte *)((ulonglong)uVar5 + 0x28000612);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar3;
  uVar5 = uVar5 + *(int *)CONCAT44(unaff_00000034,unaff_ESI) + (uint)CARRY1(bVar2,bVar3);
  pcVar7 = (char *)(ulonglong)uVar5;
  pcVar7[0x21004a34] = pcVar7[0x21004a34] + (char)param_1;
  bVar3 = (byte)uVar5;
  *pcVar7 = *pcVar7 + bVar3;
  pbVar1 = (byte *)(pcVar7 + 0x28000612);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar3;
  uVar5 = uVar5 + *(int *)CONCAT44(unaff_00000034,unaff_ESI) + (uint)CARRY1(bVar2,bVar3);
  pcVar7 = (char *)(ulonglong)uVar5;
  pcVar7[0x21004a34] = pcVar7[0x21004a34] + (char)param_1;
  cVar4 = (char)uVar5;
  *param_2 = *param_2 + cVar4;
  *pcVar7 = *pcVar7 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// Function: FUN_1404b3bb4
// Addr: 1404b3bb4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3bb4(int *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulonglong in_RAX;
  char *pcVar5;
  uint unaff_EBX;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  uint *puVar4;
  char cVar6;
  
  uVar3 = (uint)(uint *)(in_RAX & 0xffffffffffffffd8) | *(uint *)(in_RAX & 0xffffffffffffffd8);
  puVar4 = (uint *)(ulonglong)uVar3;
  *(char *)puVar4 =
       (char)*puVar4 + (char)uVar3 + CARRY4(unaff_EBX,*(uint *)((longlong)puVar4 + -0x77fafff1));
  pbVar1 = (byte *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x18);
  *pbVar1 = *pbVar1 & (byte)param_2;
  cVar6 = (char)(uVar3 >> 8);
  *(char *)((longlong)param_1 + -0x4bffe7ab) = *(char *)((longlong)param_1 + -0x4bffe7ab) + cVar6;
  *puVar4 = *puVar4 & uVar3;
  *(char *)puVar4 = (char)*puVar4 + (char)uVar3;
  pbVar1 = (byte *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x18);
  *pbVar1 = *pbVar1 & (byte)param_2;
  *(char *)((longlong)param_1 + -0x4bffe7ab) = *(char *)((longlong)param_1 + -0x4bffe7ab) + cVar6;
  *param_1 = *param_1 + param_2;
  uVar3 = uVar3 + 0x2a011100;
  puVar4 = (uint *)(ulonglong)uVar3;
  bVar2 = (byte)uVar3;
  cRam0000000142ab3fc9 = cRam0000000142ab3fc9 + bVar2;
  *(byte *)puVar4 = (char)*puVar4 + bVar2;
  *puVar4 = *puVar4 & unaff_EBP;
  cVar6 = (char)(uVar3 >> 8) - (char)((uint)param_2 >> 8);
  pcVar5 = (char *)(ulonglong)CONCAT22((short)(uVar3 >> 0x10),CONCAT11(cVar6,bVar2 | (byte)*puVar4))
  ;
  *pcVar5 = *pcVar5 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


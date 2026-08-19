// Function: FUN_1404b4d6c
// Addr: 1404b4d6c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4d6c(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  char *pcVar4;
  undefined7 uVar6;
  byte bVar7;
  longlong unaff_RBX;
  longlong in_FS_OFFSET;
  uint *puVar5;
  
  bVar7 = (byte)((ulonglong)param_1 >> 8);
  pcVar4 = (char *)((ulonglong)
                    ((uRam14000cc41f0004e4 |
                     *(uint *)(in_FS_OFFSET + (ulonglong)uRam14000cc41f0004e4)) + 0x30000a34) &
                   0xffffffffffffff1a);
  pbVar1 = (byte *)(param_1 + 0x24);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar7;
  uVar6 = (undefined7)((ulonglong)pcVar4 >> 8);
  cVar3 = ((char)pcVar4 - *pcVar4) - CARRY1(bVar2,bVar7);
  puVar5 = (uint *)CONCAT71(uVar6,cVar3);
  *(char *)(unaff_RBX + param_1 * 2) = (char)param_1;
  *puVar5 = *puVar5 & (uint)puVar5;
  *(char *)puVar5 = (char)*puVar5 + cVar3;
  *(byte *)(param_2 + unaff_RBX) = *(byte *)(param_2 + unaff_RBX) ^ (byte)((ulonglong)pcVar4 >> 8);
  pbVar1 = (byte *)(param_1 + 0x24);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar7;
  puVar5 = (uint *)CONCAT71(uVar6,(cVar3 - (char)*puVar5) - CARRY1(bVar2,bVar7));
  *(char *)(unaff_RBX + param_1 * 2) = (char)param_1;
  *puVar5 = *puVar5 & (uint)puVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


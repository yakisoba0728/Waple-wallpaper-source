// Function: FUN_1404a5e70
// Addr: 1404a5e70
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5e70(byte *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar4;
  uint uVar5;
  undefined8 in_RAX;
  byte bVar7;
  longlong unaff_RDI;
  longlong in_FS_OFFSET;
  byte bVar3;
  byte *pbVar6;
  
  bVar7 = (byte)param_2;
  uVar5 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((byte)((ulonglong)in_RAX >> 8) | param_1[unaff_RDI],(char)in_RAX))
          + 0x40000e34;
  pbVar6 = (byte *)(ulonglong)uVar5;
  bVar4 = (byte)uVar5;
  *pbVar6 = *pbVar6 | bVar4;
  *param_1 = *param_1 + 8;
  *pbVar6 = *pbVar6 + bVar4;
  pbVar6[-0x42] = pbVar6[-0x42] + bVar4;
  *pbVar6 = *pbVar6 | bVar4;
  *param_1 = *param_1 + 0x10;
  *(char *)((longlong)pbVar6 * 2) = *(char *)((longlong)pbVar6 * 2) + bVar4;
  param_1[unaff_RDI] = param_1[unaff_RDI] + (char)(uVar5 >> 8);
  param_1[0x5d900008] = param_1[0x5d900008] + (char)((ulonglong)param_2 >> 8);
  pbVar6[-0x42] = pbVar6[-0x42] + bVar4;
  *pbVar6 = *pbVar6 | bVar4;
  bVar1 = *param_1;
  *param_1 = *param_1 + bVar4;
  cRam000000005d900008 = cRam000000005d900008 + bVar4 + CARRY1(bVar1,bVar4);
  bVar1 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar7;
  pbVar6 = pbVar6 + in_FS_OFFSET;
  bVar2 = *pbVar6;
  bVar3 = *pbVar6;
  *pbVar6 = bVar3 + bVar4 + CARRY1(bVar1,bVar7);
  *(char *)(param_2 + 0x7007f009) =
       *(char *)(param_2 + 0x7007f009) + bVar7 +
       (CARRY1(bVar2,bVar4) || CARRY1(bVar3 + bVar4,CARRY1(bVar1,bVar7)));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


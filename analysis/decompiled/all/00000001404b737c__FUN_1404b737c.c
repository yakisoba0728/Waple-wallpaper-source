// Function: FUN_1404b737c
// Addr: 1404b737c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b737c(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  char cVar6;
  longlong in_RAX;
  byte bVar7;
  byte bVar8;
  char cVar9;
  undefined4 unaff_EBX;
  longlong unaff_RSI;
  
  bVar8 = (byte)param_2;
  bVar7 = (byte)((ulonglong)param_1 >> 8);
  *(byte *)(in_RAX + 0xc) = *(byte *)(in_RAX + 0xc) | bVar7;
  pbVar2 = (byte *)(param_2 + 0x7c001d3c);
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 + bVar8;
  uVar5 = ((int)in_RAX + -0x4b729000) - (uint)CARRY1(bVar3,bVar8);
  *param_1 = *param_1 + (char)(uVar5 >> 8);
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)uVar5;
  pbVar2 = (byte *)(param_2 + 0x7c001d3c);
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 + bVar8;
  uVar5 = (uVar5 + 0xb48d7000) - (uint)CARRY1(bVar3,bVar8);
  cVar6 = (char)(uVar5 >> 8);
  *param_1 = *param_1 + cVar6;
  cVar4 = (char)uVar5;
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + cVar4;
  cVar9 = (char)((uint)unaff_EBX >> 8);
  cVar6 = cVar6 + cVar9;
  uVar5 = CONCAT22((short)(uVar5 >> 0x10),CONCAT11(cVar6,cVar4));
  param_2[unaff_RSI * 2 + 0x4b] = param_2[unaff_RSI * 2 + 0x4b] + cVar9;
  *param_1 = *param_1 + cVar6;
  *param_2 = *param_2 + cVar4;
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + cVar4;
  cVar4 = in(0x1c);
  pcVar1 = (char *)((ulonglong)CONCAT31((int3)(uVar5 >> 8),cVar4 + cVar6) + 0x72);
  *pcVar1 = *pcVar1 + bVar7;
  *param_4 = *param_4 + cVar4 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


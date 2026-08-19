// Function: FUN_1404b7e40
// Addr: 1404b7e40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined8 in_RAX;
  undefined7 uVar6;
  char *pcVar5;
  longlong unaff_RBX;
  ulonglong uVar7;
  char in_CF;
  
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar3 = (char)in_RAX + 't' + in_CF;
  uVar7 = (ulonglong)((int)CONCAT71(uVar6,bVar3 | *(byte *)CONCAT71(uVar6,bVar3)) + 0x30000834);
  uVar4 = (int)&stack0x00000000 + 0x521004b;
  iVar2 = CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + *(char *)(ulonglong)uVar4);
  uVar4 = iVar2 + 0x53000964;
  *(undefined8 *)(uVar7 - 8) = 0x21004b7d;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
  pbVar1 = (byte *)(unaff_RBX + -0x3f);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + (byte)param_2;
  uVar4 = (iVar2 + 0x353d6a64) - (uint)CARRY1(bVar3,(byte)param_2);
  pcVar5 = (char *)(ulonglong)uVar4;
  pcVar5[0x7d] = pcVar5[0x7d] + (char)((ulonglong)param_1 >> 8);
  *param_4 = *param_4 + (char)(uVar7 - 8);
  *pcVar5 = *pcVar5 + (char)uVar4;
  *pcVar5 = *pcVar5 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


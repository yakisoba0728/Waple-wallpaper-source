// Function: FUN_1404c0280
// Addr: 1404c0280
// Size: 1 bytes


void FUN_1404c0280(byte *param_1,byte *param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  byte *in_RAX;
  byte *pbVar6;
  byte bVar7;
  char unaff_BL;
  char unaff_R12B;
  uint *puVar5;
  
  bVar7 = (byte)((ulonglong)param_1 >> 8);
  *param_1 = (byte)in_RAX;
  *param_1 = *param_1 + unaff_R12B;
  *param_2 = *param_2 | (byte)in_RAX;
  bVar2 = *in_RAX;
  *in_RAX = *in_RAX + (byte)param_1;
  uVar4 = (int)in_RAX + *(int *)in_RAX + (uint)CARRY1(bVar2,(byte)param_1);
  puVar5 = (uint *)(ulonglong)uVar4;
  *puVar5 = *puVar5 & (uint)&stack0xfffffffffffffff8;
  cVar3 = (char)uVar4;
  *(char *)puVar5 = (char)*puVar5 - cVar3;
  out(0x20,uVar4);
  *(char *)puVar5 = (char)*puVar5 - cVar3;
  pbVar6 = (byte *)(ulonglong)(uint)(int)(short)uVar4;
  piVar1 = (int *)((longlong)pbVar6 * 2 + 0x21);
  *piVar1 = *piVar1 + (int)param_1;
  *pbVar6 = *pbVar6 + cVar3;
  *param_1 = *param_1 + (char)(uVar4 >> 8);
  *pbVar6 = *pbVar6 & bVar7;
  *pbVar6 = *pbVar6 & bVar7;
  pbVar6[0x21004c01] = pbVar6[0x21004c01] + unaff_BL;
  *param_2 = *param_2 + cVar3;
  *pbVar6 = *pbVar6 + cVar3;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


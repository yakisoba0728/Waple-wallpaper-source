// Function: FUN_1404a5d14
// Addr: 1404a5d14
// Size: 1 bytes


void FUN_1404a5d14(char *param_1,longlong param_2)

{
  undefined3 uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined8 in_RAX;
  int *piVar5;
  byte *pbVar6;
  char cVar8;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined8 unaff_retaddr;
  undefined1 auStackX_8 [32];
  byte bVar7;
  
  cVar8 = (char)((ulonglong)param_2 >> 8);
  bVar2 = (byte)in_RAX;
  bVar7 = (byte)((ulonglong)in_RAX >> 8);
  piVar5 = (int *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar7 + bVar2,bVar2));
  iVar3 = (int)piVar5 + *piVar5 + (uint)CARRY1(bVar7,bVar2);
  auStackX_8[param_2 + -8] = auStackX_8[param_2 + -8] + cVar8;
  *(char *)(unaff_RBP + param_2) = *(char *)(unaff_RBP + param_2) + (char)((uint)iVar3 >> 8);
  *(char *)(param_2 + unaff_RBX) = *(char *)(param_2 + unaff_RBX) + cVar8;
  uVar1 = (undefined3)((uint)iVar3 >> 8);
  bVar2 = (char)iVar3 * '\x02';
  pbVar6 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2);
  *pbVar6 = *pbVar6 | bVar2;
  bVar2 = in((short)param_2);
  uVar4 = CONCAT31(uVar1,bVar2);
  *(byte *)(ulonglong)uVar4 = *(byte *)(ulonglong)uVar4 | bVar2;
  *param_1 = *param_1 + (char)auStackX_8;
  uVar4 = uVar4 + 0x34050002;
  bVar2 = (byte)uVar4 | *(byte *)(ulonglong)uVar4;
  pbVar6 = (byte *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),bVar2);
  param_1[-0x46c5fff8] = param_1[-0x46c5fff8] & (byte)((ulonglong)unaff_retaddr >> 8);
  *pbVar6 = *pbVar6 | bVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


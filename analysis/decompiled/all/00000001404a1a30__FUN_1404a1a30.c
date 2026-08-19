// Function: FUN_1404a1a30
// Addr: 1404a1a30
// Size: 1 bytes


void FUN_1404a1a30(byte *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  byte *pbVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  longlong in_RAX;
  char *pcVar9;
  ulonglong uVar10;
  longlong unaff_RBP;
  char *unaff_RSI;
  
  *(char *)(in_RAX * 2) = *(char *)(in_RAX * 2) - (char)in_RAX;
  bVar1 = *param_1;
  *param_1 = *param_1 + 0x27;
  uVar2 = (uint)in_RAX - *(uint *)(in_RAX * 2);
  uVar8 = uVar2 - (0xd8 < bVar1);
  uVar10 = (ulonglong)
           ((-0x6efffbd9 - *(int *)(unaff_RBP + (longlong)param_2)) -
           (uint)((uint)in_RAX < *(uint *)(in_RAX * 2) || uVar2 < (0xd8 < bVar1)));
  *(byte *)(uVar10 + (longlong)param_2) = *(byte *)(uVar10 + (longlong)param_2) | (byte)param_2;
  pbVar5 = (byte *)(((ulonglong)param_1 & 0xffffffff) * 2);
  bVar1 = *pbVar5;
  bVar6 = (byte)((ulonglong)param_1 & 0xffffffff);
  *pbVar5 = *pbVar5 - bVar6;
  *(longlong *)(uVar10 - 8) = unaff_RBP;
  puVar3 = *(uint **)(uVar10 - 0x431);
  *param_2 = (*param_2 - uVar8) - (uint)(bVar1 < bVar6);
  *puVar3 = *puVar3 & (uint)puVar3;
  *(char *)puVar3 = (char)*puVar3 + (char)puVar3;
  pbVar5 = (byte *)((ulonglong)uVar8 * 2);
  bVar1 = *pbVar5;
  *pbVar5 = *pbVar5 - (byte)uVar8;
  *(ulonglong *)(uVar10 - 0x431) = uVar10 - 8;
  puVar4 = *(uint **)(uVar10 - 0x85a);
  *param_2 = (*param_2 - (uint)puVar3) - (uint)(bVar1 < (byte)uVar8);
  *puVar4 = *puVar4 & (uint)puVar4;
  *(char *)((uVar10 - 0x431) + (longlong)param_2) =
       *(char *)((uVar10 - 0x431) + (longlong)param_2) + (char)((ulonglong)puVar4 >> 8);
  *(char *)((uVar10 - 0x852) + (longlong)param_2) =
       *(char *)((uVar10 - 0x852) + (longlong)param_2) + (byte)param_2;
  pcVar9 = (char *)((ulonglong)puVar4 & 0xffffffff);
  pbVar5 = (byte *)(((ulonglong)puVar3 & 0xffffffff) * 2);
  bVar1 = *pbVar5;
  bVar6 = (byte)((ulonglong)puVar3 & 0xffffffff);
  *pbVar5 = *pbVar5 - bVar6;
  *(ulonglong *)(uVar10 - 0x85a) = uVar10 - 0x431;
  puVar3 = *(uint **)(uVar10 - 0xc83);
  *param_2 = (*param_2 - (uint)puVar4) - (uint)(bVar1 < bVar6);
  *puVar3 = *puVar3 & (uint)puVar3;
  cVar7 = (char)puVar3;
  *(char *)puVar3 = (char)*puVar3 + cVar7;
  *(char *)((longlong)puVar3 * 2) = *(char *)((longlong)puVar3 * 2) - cVar7;
  *pcVar9 = *pcVar9 + '\'';
  *unaff_RSI = *unaff_RSI + (char)pcVar9;
  *(char *)puVar3 = (char)*puVar3 + cVar7;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


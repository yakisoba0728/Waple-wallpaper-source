// Function: FUN_1404a1a44
// Addr: 1404a1a44
// Size: 1 bytes


void FUN_1404a1a44(ulonglong param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint *puVar3;
  byte bVar4;
  char cVar5;
  uint in_EAX;
  uint uVar6;
  char *pcVar7;
  char *unaff_RSI;
  uint *puStack_c83;
  uint *puStack_85a;
  char acStack_852 [1057];
  uint *apuStack_431 [133];
  
  (&stack0x00000000)[(longlong)param_2] = (&stack0x00000000)[(longlong)param_2] | (byte)param_2;
  puVar3 = apuStack_431[0];
  pbVar2 = (byte *)((param_1 & 0xffffffff) * 2);
  bVar1 = *pbVar2;
  bVar4 = (byte)(param_1 & 0xffffffff);
  *pbVar2 = *pbVar2 - bVar4;
  *param_2 = (*param_2 - in_EAX) - (uint)(bVar1 < bVar4);
  uVar6 = (uint)apuStack_431[0];
  *apuStack_431[0] = *apuStack_431[0] & uVar6;
  *(char *)apuStack_431[0] = (char)*apuStack_431[0] + (char)apuStack_431[0];
  pbVar2 = (byte *)((ulonglong)in_EAX * 2);
  bVar1 = *pbVar2;
  *pbVar2 = *pbVar2 - (byte)in_EAX;
  apuStack_431[0] = (uint *)&stack0xfffffffffffffff8;
  *param_2 = (*param_2 - uVar6) - (uint)(bVar1 < (byte)in_EAX);
  *puStack_85a = *puStack_85a & (uint)puStack_85a;
  *(char *)((longlong)apuStack_431 + (longlong)param_2) =
       *(char *)((longlong)apuStack_431 + (longlong)param_2) + (char)((ulonglong)puStack_85a >> 8);
  acStack_852[(longlong)param_2] = acStack_852[(longlong)param_2] + (byte)param_2;
  pcVar7 = (char *)((ulonglong)puStack_85a & 0xffffffff);
  pbVar2 = (byte *)(((ulonglong)puVar3 & 0xffffffff) * 2);
  bVar1 = *pbVar2;
  bVar4 = (byte)((ulonglong)puVar3 & 0xffffffff);
  *pbVar2 = *pbVar2 - bVar4;
  *param_2 = (*param_2 - (uint)puStack_85a) - (uint)(bVar1 < bVar4);
  *puStack_c83 = *puStack_c83 & (uint)puStack_c83;
  cVar5 = (char)puStack_c83;
  *(char *)puStack_c83 = (char)*puStack_c83 + cVar5;
  *(char *)((longlong)puStack_c83 * 2) = *(char *)((longlong)puStack_c83 * 2) - cVar5;
  *pcVar7 = *pcVar7 + '\'';
  *unaff_RSI = *unaff_RSI + (char)pcVar7;
  *(char *)puStack_c83 = (char)*puStack_c83 + cVar5;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


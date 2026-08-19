// Function: FUN_1404a1a6c
// Addr: 1404a1a6c
// Size: 1 bytes


void FUN_1404a1a6c(ulonglong param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  uint in_EAX;
  char *unaff_RSI;
  uint *puStack_431;
  
  (&stack0x00000000)[(longlong)param_2] = (&stack0x00000000)[(longlong)param_2] + (char)param_2;
  pbVar2 = (byte *)((param_1 & 0xffffffff) * 2);
  bVar1 = *pbVar2;
  bVar3 = (byte)(param_1 & 0xffffffff);
  *pbVar2 = *pbVar2 - bVar3;
  *param_2 = (*param_2 - in_EAX) - (uint)(bVar1 < bVar3);
  *puStack_431 = *puStack_431 & (uint)puStack_431;
  cVar4 = (char)puStack_431;
  *(char *)puStack_431 = (char)*puStack_431 + cVar4;
  *(char *)((longlong)puStack_431 * 2) = *(char *)((longlong)puStack_431 * 2) - cVar4;
  *(char *)(ulonglong)in_EAX = *(char *)(ulonglong)in_EAX + '\'';
  *unaff_RSI = *unaff_RSI + (char)in_EAX;
  *(char *)puStack_431 = (char)*puStack_431 + cVar4;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


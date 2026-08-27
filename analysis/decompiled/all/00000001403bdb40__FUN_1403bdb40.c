// Function: FUN_1403bdb40
// Addr: 1403bdb40
// Size: 178 bytes


void FUN_1403bdb40(undefined4 *param_1,uint param_2,uint param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  int iVar3;
  longlong lVar4;
  
  puVar1 = (ulonglong *)(param_1 + ((ulonglong)(param_3 >> 6 & 7) + 1) * 2);
  puVar2 = (ulonglong *)(param_1 + ((ulonglong)(param_2 >> 6 & 7) + 1) * 2);
  lVar4 = 1L << ((byte)param_2 & 0x3f);
  if (puVar2 == puVar1) {
    *puVar2 = *puVar2 & ~((1L << ((byte)param_3 & 0x3f)) * 2 - lVar4);
    *param_1 = 0xffffffff;
    return;
  }
  *puVar2 = *puVar2 & lVar4 - 1U;
  iVar3 = (int)puVar1 - (int)(puVar2 + 1);
  if (iVar3 != 0) {
    FUN_1404217a0(puVar2 + 1,0,iVar3);
  }
  *puVar1 = *puVar1 & ~((1L << ((byte)param_3 & 0x3f)) * 2 - 1U);
  *param_1 = 0xffffffff;
  return;
}


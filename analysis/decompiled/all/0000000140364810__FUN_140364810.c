// Function: FUN_140364810
// Addr: 140364810
// Size: 340 bytes


void FUN_140364810(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,undefined8 *param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_78 [24];
  undefined1 local_60 [32];
  
  uVar1 = *param_1;
  lVar5 = FUN_1403c03e0(*param_4,local_78,uVar1);
  uVar2 = *param_2;
  lVar6 = FUN_1403c03e0(*param_4,local_60,uVar2);
  uVar3 = *(uint *)(lVar6 + 0x10);
  if (uVar3 == *(uint *)(lVar5 + 0x10)) {
    if (uVar3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = memcmp(*(void **)(lVar5 + 8),*(void **)(lVar6 + 8),(ulonglong)uVar3);
    }
  }
  else {
    iVar4 = *(uint *)(lVar5 + 0x10) - uVar3;
  }
  if (0 < iVar4) {
    *param_2 = uVar1;
    *param_1 = uVar2;
  }
  uVar1 = *param_2;
  lVar5 = FUN_1403c03e0(*param_4,local_60,uVar1);
  uVar2 = *param_3;
  lVar6 = FUN_1403c03e0(*param_4,local_78,uVar2);
  uVar3 = *(uint *)(lVar6 + 0x10);
  if (uVar3 == *(uint *)(lVar5 + 0x10)) {
    if (uVar3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = memcmp(*(void **)(lVar5 + 8),*(void **)(lVar6 + 8),(ulonglong)uVar3);
    }
  }
  else {
    iVar4 = *(uint *)(lVar5 + 0x10) - uVar3;
  }
  if (0 < iVar4) {
    *param_3 = uVar1;
    *param_2 = uVar2;
    uVar1 = *param_1;
    lVar5 = FUN_1403c03e0(*param_4,local_60,uVar1);
    lVar6 = FUN_1403c03e0(*param_4,local_78,uVar2);
    uVar3 = *(uint *)(lVar6 + 0x10);
    if (uVar3 == *(uint *)(lVar5 + 0x10)) {
      if (uVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = memcmp(*(void **)(lVar5 + 8),*(void **)(lVar6 + 8),(ulonglong)uVar3);
      }
    }
    else {
      iVar4 = *(uint *)(lVar5 + 0x10) - uVar3;
    }
    if (0 < iVar4) {
      *param_2 = uVar1;
      *param_1 = uVar2;
    }
  }
  return;
}


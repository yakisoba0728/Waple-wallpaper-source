// Function: FUN_14018b570
// Addr: 14018b570
// Size: 436 bytes


ulonglong FUN_14018b570(longlong param_1,longlong param_2,int param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong *puVar8;
  
  puVar1 = *(ulonglong **)(param_1 + 0x118);
  puVar8 = *(ulonglong **)(param_1 + 0x110);
  if (param_2 == 0) {
    return (ulonglong)
           (uint)((int)((longlong)puVar1 - (longlong)puVar8 >> 3) - *(int *)(param_1 + 0x1d8));
  }
  iVar7 = 0;
  do {
    if (puVar8 == puVar1) {
      return *(longlong *)(param_1 + 0x118) - *(longlong *)(param_1 + 0x110) >> 3;
    }
    uVar2 = *puVar8;
    lVar5 = *(longlong *)(param_1 + 0x1d0);
    uVar6 = *(ulonglong *)(param_1 + 0x1f8) &
            ((((((((uVar2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar2 >> 8 & 0xff) *
                  0x100000001b3 ^ uVar2 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar2 >> 0x18 & 0xff) *
                0x100000001b3 ^ uVar2 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar2 >> 0x28 & 0xff) *
              0x100000001b3 ^ uVar2 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar2 >> 0x38) * 0x100000001b3
    ;
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + 8 + uVar6 * 0x10);
    if (lVar4 == lVar5) {
LAB_14018b6db:
      if (iVar7 < param_3) {
        lVar5 = (longlong)iVar7;
        iVar7 = iVar7 + 1;
        *(ulonglong *)(param_2 + lVar5 * 8) = uVar2;
      }
    }
    else {
      uVar3 = *(ulonglong *)(lVar4 + 0x10);
      while (uVar2 != uVar3) {
        if (lVar4 == *(longlong *)(*(longlong *)(param_1 + 0x1e0) + uVar6 * 0x10))
        goto LAB_14018b6db;
        lVar4 = *(longlong *)(lVar4 + 8);
        uVar3 = *(ulonglong *)(lVar4 + 0x10);
      }
      if (lVar4 == 0) {
        lVar4 = lVar5;
      }
      if (lVar4 == lVar5) goto LAB_14018b6db;
    }
    puVar8 = puVar8 + 1;
  } while( true );
}


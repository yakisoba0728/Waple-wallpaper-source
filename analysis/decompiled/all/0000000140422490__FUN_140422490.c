// Function: FUN_140422490
// Addr: 140422490
// Size: 514 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140422490(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  puVar3 = (undefined8 *)FUN_1402ba840();
  piVar1 = (int *)*puVar3;
  if ((*piVar1 == -0x1fbcb0b3) || (*piVar1 == -0x1fbcbcae)) {
    thunk_FUN_1402d9040(*(undefined8 *)(param_2 + 0x98));
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined4 *)(param_2 + 0x20) = 2;
    LOCK();
    _DAT_1404dc1f8 = _DAT_1404dc1f8 + 1;
    UNLOCK();
    *(undefined **)(param_2 + 0x30) = &DAT_1404dc200;
    *(undefined ***)(param_2 + 0x38) = &PTR_vftable_1404dc1f0;
    FUN_140292e80(*(undefined8 *)(param_2 + 0x80),param_2 + 0x30);
    *(undefined4 *)(param_2 + 0x20) = 0;
    if (*(longlong *)(param_2 + 0x38) != 0) {
      FUN_14003b430();
    }
    puVar5 = (undefined *)0x14029321c;
  }
  else if (((*piVar1 == -0x1f928c9d) && (piVar1[6] == 4)) &&
          ((piVar1[8] == 0x19930520 ||
           (((piVar1[8] == 0x19930521 || (piVar1[8] == 0x19930522)) || (piVar1[8] == 0x1994000))))))
  {
    lVar6 = (longlong)
            *(int *)((longlong)*(int *)(*(longlong *)(piVar1 + 0xc) + 0xc) + 4 +
                    *(longlong *)(piVar1 + 0xe)) + *(longlong *)(piVar1 + 0xe);
    uVar7 = (longlong)*(int *)(lVar6 + 0x14) + 0xb0;
    if (*(ulonglong *)(param_2 + 0x28) < uVar7) {
      thunk_FUN_1402d9040(*(undefined8 *)(param_2 + 0x98));
      lVar4 = _malloc_base(uVar7);
      *(longlong *)(param_2 + 0x98) = lVar4;
      if (lVar4 == 0) {
        *(undefined8 *)(param_2 + 0x30) = 0;
        *(undefined8 *)(param_2 + 0x38) = 0;
        *(undefined4 *)(param_2 + 0x20) = 4;
        LOCK();
        DAT_1404dc2b8 = DAT_1404dc2b8 + 1;
        UNLOCK();
        *(undefined **)(param_2 + 0x30) = &DAT_1404dc2c0;
        *(undefined ***)(param_2 + 0x38) = &PTR_vftable_1404dc2b0;
        FUN_140292e80(*(undefined8 *)(param_2 + 0x80),param_2 + 0x30);
        *(undefined4 *)(param_2 + 0x20) = 0;
        if (*(longlong *)(param_2 + 0x38) != 0) {
          FUN_14003b430();
        }
        return &DAT_14029322c;
      }
    }
    else {
      lVar4 = *(longlong *)(param_2 + 0x98);
    }
    FUN_1402933c0(lVar4 + 0xb0,*(undefined8 *)(piVar1 + 10),lVar6,*(undefined8 *)(param_2 + 0x30));
    lVar6 = FUN_140292c70(lVar4,piVar1);
    *(longlong *)(lVar6 + 0x38) = lVar4 + 0xb0;
    plVar2 = *(longlong **)(param_2 + 0x80);
    *plVar2 = lVar6 + 0x10;
    plVar2[1] = lVar6;
    puVar5 = &DAT_14029322e;
  }
  else {
    FUN_140293240(*(undefined8 *)(param_2 + 0x80),piVar1,*(undefined8 *)(param_2 + 0x98));
    puVar5 = &DAT_140293232;
  }
  return puVar5;
}


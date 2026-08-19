// Function: FUN_140422560
// Addr: 140422560
// Size: 250 bytes


undefined * FUN_140422560(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  longlong lVar6;
  
  puVar4 = (undefined8 *)func_0x0001402ba910();
  piVar1 = (int *)*puVar4;
  if ((*piVar1 != -0x1fbcb0b3) && (*piVar1 != -0x1fbcbcae)) {
    if (((*piVar1 == -0x1f928c9d) && (piVar1[6] == 4)) &&
       ((piVar1[8] == 0x19930520 ||
        (((piVar1[8] == 0x19930521 || (piVar1[8] == 0x19930522)) || (piVar1[8] == 0x1994000)))))) {
      lVar6 = (longlong)
              *(int *)((longlong)*(int *)(*(longlong *)(piVar1 + 0xc) + 0xc) + 4 +
                      *(longlong *)(piVar1 + 0xe)) + *(longlong *)(piVar1 + 0xe);
      if (*(ulonglong *)(param_2 + 0x28) < (longlong)*(int *)(lVar6 + 0x14) + 0xb0U) {
        puVar5 = (undefined *)func_0x0001402bf8e0(*(undefined8 *)(param_2 + 0x98));
        return puVar5;
      }
      lVar2 = *(longlong *)(param_2 + 0x98);
      FUN_140293490(lVar2 + 0xb0,*(undefined8 *)(piVar1 + 10),lVar6,*(undefined8 *)(param_2 + 0x30))
      ;
      lVar6 = FUN_140292d40(lVar2,piVar1);
      *(longlong *)(lVar6 + 0x38) = lVar2 + 0xb0;
      plVar3 = *(longlong **)(param_2 + 0x80);
      *plVar3 = lVar6 + 0x10;
      plVar3[1] = lVar6;
      puVar5 = &UNK_1402932fe;
    }
    else {
      FUN_140293310(*(undefined8 *)(param_2 + 0x80),piVar1,*(undefined8 *)(param_2 + 0x98));
      puVar5 = &DAT_140293302;
    }
    return puVar5;
  }
  puVar5 = (undefined *)func_0x0001402bf8e0(*(undefined8 *)(param_2 + 0x98));
  return puVar5;
}


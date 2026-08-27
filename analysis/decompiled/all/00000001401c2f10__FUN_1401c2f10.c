// Function: FUN_1401c2f10
// Addr: 1401c2f10
// Size: 397 bytes


undefined8
FUN_1401c2f10(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
             undefined4 *param_5)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  byte bVar8;
  undefined8 in_stack_ffffffffffffff98;
  uint uVar9;
  
  uVar9 = (uint)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  lVar2 = param_4[3];
  bVar8 = -(*(char *)((longlong)param_4 + 0x25) != '\0') & 2;
  cVar1 = *(char *)((longlong)param_4 + 0xc);
  lVar7 = param_4[2];
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_4 + 5);
  uVar4 = FUN_1400ea5b0(*(undefined4 *)(param_4 + 5));
  *(uint *)(param_2 + 0x3c) = uVar4;
  *(int *)(param_2 + 0x40) = *(int *)(param_4 + 1) << 2;
  if ((uint)(*(int *)(param_4 + 1) * 4) % uVar4 != 0) {
    *param_5 = 3;
    return 0;
  }
  bVar8 = bVar8 | cVar1 != '\0';
  uVar3 = (ulonglong)(uint)(*(int *)(param_4 + 1) * 4) / (ulonglong)uVar4;
  *(undefined1 *)(param_3 + 2) = *(undefined1 *)((longlong)param_4 + 0xc);
  *(undefined1 *)((longlong)param_3 + 0x11) = *(undefined1 *)((longlong)param_4 + 0x25);
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)(param_4 + 4);
  *(bool *)((longlong)param_3 + 0x12) = lVar2 != 0 || lVar7 != 0;
  if (lVar2 != 0 || lVar7 != 0) {
    iVar6 = *(int *)(param_4 + 4) * 4;
    if (lVar2 != 0) {
      iVar6 = *(int *)(param_4 + 4) * 2;
    }
    *(int *)(param_2 + 0x50) = iVar6;
    lVar7 = 0x18;
    if (lVar2 == 0) {
      lVar7 = 0x10;
    }
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x1518) + 0x40))
                      (*(longlong **)(param_1 + 0x1518),*(undefined4 *)(param_2 + 0x38),*param_4,
                       uVar3,*(undefined8 *)(lVar7 + (longlong)param_4),*(undefined4 *)(param_4 + 4)
                       ,lVar2 == 0,0,bVar8);
    *param_3 = uVar5;
    uVar4 = *(uint *)(param_2 + 0x18) & 0xfffffffe;
    if (lVar2 == 0) {
      uVar4 = *(uint *)(param_2 + 0x18) | 1;
    }
    *(uint *)(param_2 + 0x18) = uVar4;
    return 1;
  }
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x1518) + 0x48))
                    (*(longlong **)(param_1 + 0x1518),*(undefined4 *)(param_2 + 0x38),*param_4,uVar3
                     ,(ulonglong)uVar9 << 0x20,bVar8);
  *param_3 = uVar5;
  return 1;
}


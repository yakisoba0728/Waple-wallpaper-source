// Function: FUN_140206430
// Addr: 140206430
// Size: 424 bytes


void FUN_140206430(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  undefined8 local_res8 [4];
  
  if ((param_1[0x97] == 0) || (*(longlong *)(param_1[0x97] + 8) == 0)) {
    *(undefined1 *)(param_1[0x19] + 0x12e8) = 0;
  }
  else {
    iVar12 = (**(code **)(*param_1 + 0xd8))();
    if (iVar12 != 0) {
      cVar11 = (**(code **)(**(longlong **)(param_1[0x19] + 0x1518) + 0x138))
                         (*(longlong **)(param_1[0x19] + 0x1518),local_res8,iVar12 * 0x30);
      if (cVar11 != '\0') {
        lVar13 = *(longlong *)(param_1[0x97] + 0x2f8);
        (**(code **)(**(longlong **)(param_1[0x19] + 0x1518) + 0x140))
                  (*(longlong **)(param_1[0x19] + 0x1518),local_res8[0],lVar13,
                   *(longlong *)(param_1[0x97] + 0x300) - lVar13 >> 6);
        (**(code **)(**(longlong **)(param_1[0x19] + 0x1518) + 0x148))();
      }
    }
    *(undefined8 *)(param_1[0x19] + 0x11e0) = *(undefined8 *)(param_1[0x97] + 0x268);
    *(char *)(param_1[0x19] + 0x12e8) =
         (char)((longlong)
                (ulonglong)(uint)(*(int *)(param_1[0x97] + 0x300) - *(int *)(param_1[0x97] + 0x2f8))
               >> 6);
  }
  if ((char)param_1[0x96] != '\0') {
    lVar13 = param_1[0x19];
    if (*(char *)(lVar13 + 0x1ca) != '\0') {
      FUN_1400d4200();
    }
    lVar1 = param_1[0x19];
    uVar2 = *(undefined4 *)(lVar13 + 0x934);
    uVar3 = *(undefined4 *)(lVar13 + 0x938);
    uVar4 = *(undefined4 *)(lVar13 + 0x93c);
    uVar5 = *(undefined8 *)(lVar13 + 0x940);
    uVar6 = *(undefined8 *)(lVar13 + 0x948);
    uVar7 = *(undefined8 *)(lVar13 + 0x950);
    uVar8 = *(undefined8 *)(lVar13 + 0x958);
    uVar9 = *(undefined8 *)(lVar13 + 0x960);
    uVar10 = *(undefined8 *)(lVar13 + 0x968);
    *(undefined4 *)(lVar1 + 0xab0) = *(undefined4 *)(lVar13 + 0x930);
    *(undefined4 *)(lVar1 + 0xab4) = uVar2;
    *(undefined4 *)(lVar1 + 0xab8) = uVar3;
    *(undefined4 *)(lVar1 + 0xabc) = uVar4;
    *(undefined8 *)(lVar1 + 0xac0) = uVar5;
    *(undefined8 *)(lVar1 + 0xac8) = uVar6;
    *(undefined8 *)(lVar1 + 0xad0) = uVar7;
    *(undefined8 *)(lVar1 + 0xad8) = uVar8;
    *(undefined8 *)(lVar1 + 0xae0) = uVar9;
    *(undefined8 *)(lVar1 + 0xae8) = uVar10;
  }
  lVar13 = param_1[0x98];
  if ((lVar13 != 0) && (*(char *)(lVar13 + 0x48) != '\0')) {
    *(undefined4 *)(param_1[0x19] + 0x132c) = *(undefined4 *)(lVar13 + 0xe8);
    FUN_1401e8aa0(param_1);
    *(undefined4 *)(param_1[0x19] + 0x132c) = 0xffffffff;
    return;
  }
  FUN_1401e8aa0(param_1);
  return;
}


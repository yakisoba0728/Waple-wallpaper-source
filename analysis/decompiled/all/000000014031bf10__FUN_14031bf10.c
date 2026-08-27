// Function: FUN_14031bf10
// Addr: 14031bf10
// Size: 362 bytes


undefined8 FUN_14031bf10(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  
  *(undefined4 *)(param_1 + 8) = param_2;
  FUN_1402f4bf0(*param_1);
  puVar3 = (undefined8 *)(*(undefined8 **)(*param_1 + 0x3e0))[0x21a];
  lVar8 = FUN_1402f0420(**(undefined8 **)(*param_1 + 0x3e0),"pshinter");
  if (((lVar8 != 0) && (puVar3 != (undefined8 *)0x0)) &&
     (pcVar4 = (code *)*puVar3, pcVar4 != (code *)0x0)) {
    lVar8 = (*pcVar4)(lVar8);
    if (lVar8 != 0) {
      lVar5 = *(longlong *)(*param_1 + 0x3e0);
      iVar1 = *(int *)(lVar5 + 0x620);
      puVar3 = *(undefined8 **)param_1[7];
      (**(code **)(lVar8 + 8))
                (*puVar3,*(undefined4 *)((longlong)param_1 + 0x1c),(int)param_1[4],0,0);
      uVar9 = *(uint *)(lVar5 + 0x8a8);
      uVar10 = (ulonglong)uVar9;
      while (uVar9 != 0) {
        uVar6 = *(undefined4 *)((longlong)param_1 + 0x1c);
        uVar9 = (int)uVar10 - 1;
        uVar10 = (ulonglong)uVar9;
        iVar2 = *(int *)(*(longlong *)(lVar5 + 0x8b0 + uVar10 * 8) + 0x40);
        if (iVar1 == iVar2) {
          uVar7 = (undefined4)param_1[4];
        }
        else {
          uVar6 = FUN_1402f20b0(uVar6,iVar1,iVar2);
          uVar7 = FUN_1402f20b0((int)param_1[4],iVar1,iVar2);
        }
        (**(code **)(lVar8 + 8))(puVar3[uVar10 + 1],uVar6,uVar7,0,0);
      }
      return 0;
    }
    return 0;
  }
  return 0;
}


// Function: FUN_14031bd30
// Addr: 14031bd30
// Size: 473 bytes


int FUN_14031bd30(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined4 local_res8 [2];
  
  lVar9 = *param_1;
  if ((*(byte *)(lVar9 + 8) & 2) != 0) {
    iVar6 = (**(code **)(*(longlong *)(lVar9 + 0x2d0) + 0xe0))(lVar9,param_2,local_res8);
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 8) = local_res8[0];
      FUN_1402f4cc0(*param_1);
      puVar3 = (undefined8 *)(*(undefined8 **)(*param_1 + 0x3e0))[0x21a];
      lVar9 = func_0x0001402f04f0(**(undefined8 **)(*param_1 + 0x3e0),"pshinter");
      if ((((lVar9 != 0) && (puVar3 != (undefined8 *)0x0)) &&
          (pcVar4 = (code *)*puVar3, pcVar4 != (code *)0x0)) &&
         (lVar9 = (*pcVar4)(lVar9), lVar9 != 0)) {
        lVar5 = *(longlong *)(*param_1 + 0x3e0);
        iVar6 = *(int *)(lVar5 + 0x620);
        puVar3 = *(undefined8 **)param_1[7];
        (**(code **)(lVar9 + 8))
                  (*puVar3,*(undefined4 *)((longlong)param_1 + 0x1c),(int)param_1[4],0,0);
        uVar10 = *(uint *)(lVar5 + 0x8a8);
        uVar11 = (ulonglong)uVar10;
        while (uVar10 != 0) {
          uVar7 = *(undefined4 *)((longlong)param_1 + 0x1c);
          uVar10 = (int)uVar11 - 1;
          uVar11 = (ulonglong)uVar10;
          iVar1 = *(int *)(*(longlong *)(lVar5 + 0x8b0 + uVar11 * 8) + 0x40);
          if (iVar6 == iVar1) {
            uVar8 = (undefined4)param_1[4];
          }
          else {
            uVar7 = FUN_1402f2180(uVar7,iVar6,iVar1);
            uVar8 = FUN_1402f2180((int)param_1[4],iVar6,iVar1);
          }
          (**(code **)(lVar9 + 8))(puVar3[uVar11 + 1],uVar7,uVar8,0,0);
        }
      }
      return 0;
    }
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  iVar6 = FUN_1402f4650(*param_1,param_2);
  if (iVar6 == 0) {
    puVar3 = (undefined8 *)(*(undefined8 **)(*param_1 + 0x3e0))[0x21a];
    lVar9 = func_0x0001402f04f0(**(undefined8 **)(*param_1 + 0x3e0),"pshinter");
    if (((lVar9 != 0) && (puVar3 != (undefined8 *)0x0)) &&
       ((pcVar4 = (code *)*puVar3, pcVar4 != (code *)0x0 && (lVar9 = (*pcVar4)(lVar9), lVar9 != 0)))
       ) {
      lVar5 = *(longlong *)(*param_1 + 0x3e0);
      iVar1 = *(int *)(lVar5 + 0x620);
      puVar3 = *(undefined8 **)param_1[7];
      (**(code **)(lVar9 + 8))
                (*puVar3,*(undefined4 *)((longlong)param_1 + 0x1c),(int)param_1[4],0,0);
      uVar10 = *(uint *)(lVar5 + 0x8a8);
      uVar11 = (ulonglong)uVar10;
      while (uVar10 != 0) {
        uVar7 = *(undefined4 *)((longlong)param_1 + 0x1c);
        uVar10 = (int)uVar11 - 1;
        uVar11 = (ulonglong)uVar10;
        iVar2 = *(int *)(*(longlong *)(lVar5 + 0x8b0 + uVar11 * 8) + 0x40);
        if (iVar1 == iVar2) {
          uVar8 = (undefined4)param_1[4];
        }
        else {
          uVar7 = FUN_1402f2180(uVar7,iVar1,iVar2);
          uVar8 = FUN_1402f2180((int)param_1[4],iVar1,iVar2);
        }
        (**(code **)(lVar9 + 8))(puVar3[uVar11 + 1],uVar7,uVar8,0,0);
      }
    }
  }
  return iVar6;
}


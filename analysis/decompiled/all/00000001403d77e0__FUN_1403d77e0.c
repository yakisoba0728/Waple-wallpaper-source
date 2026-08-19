// Function: FUN_1403d77e0
// Addr: 1403d77e0
// Size: 507 bytes


void FUN_1403d77e0(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined *puVar7;
  char cVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  
  lVar3 = param_1[3];
  lVar4 = param_1[1];
  piVar12 = *(int **)(lVar3 + 0x80);
  uVar1 = *(uint *)(lVar3 + 0x60);
  lVar5 = *(longlong *)(lVar4 + 0x90);
  lVar6 = *(longlong *)(lVar5 + 0x10);
  if ((*(uint *)(lVar3 + 0x38) & 0xfffffffe) == 4) {
    uVar9 = 0;
    if (lVar6 != 0) {
      uVar9 = *(undefined8 *)(lVar6 + 0x38);
    }
    (**(code **)(lVar5 + 0x58))
              (lVar4,*(undefined8 *)(lVar4 + 0x98),uVar1,*(undefined8 *)(lVar3 + 0x70),0x14,piVar12,
               0x14,uVar9);
    iVar2 = *(int *)(lVar4 + 0x40);
    if ((iVar2 != 0) && (*(char *)(lVar4 + 0x3c) == '\0')) {
      if (*(int *)(lVar4 + 0x28) < 0) {
        iVar2 = -iVar2;
      }
      uVar11 = 0;
      if (uVar1 != 0) {
        do {
          iVar10 = 0;
          if (*piVar12 != 0) {
            iVar10 = iVar2;
          }
          uVar11 = uVar11 + 1;
          *piVar12 = iVar10 + *piVar12;
          piVar12 = piVar12 + 5;
        } while (uVar11 < uVar1);
      }
    }
    lVar3 = param_1[1];
    lVar4 = *(longlong *)(lVar3 + 0x90);
    if (((*(longlong *)(lVar4 + 0x68) != DAT_1404df560) ||
        (((puVar7 = *(undefined **)(lVar3 + 0x18), puVar7 != (undefined *)0x0 &&
          (puVar7 != &DAT_1404dee58)) && (cVar8 = FUN_1403d0e10(puVar7,9), cVar8 != '\0')))) ||
       ((*(undefined **)(lVar4 + 0x78) != PTR_LAB_1404df570 ||
        (((puVar7 != (undefined *)0x0 && (puVar7 != &DAT_1404dee58)) &&
         (cVar8 = FUN_1403d0e10(puVar7,0xb), cVar8 != '\0')))))) {
      func_0x0001403afb20(lVar3,param_1[3],0xffffffff);
    }
  }
  else {
    uVar9 = 0;
    if (lVar6 != 0) {
      uVar9 = *(undefined8 *)(lVar6 + 0x40);
    }
    (**(code **)(lVar5 + 0x60))
              (lVar4,*(undefined8 *)(lVar4 + 0x98),uVar1,*(undefined8 *)(lVar3 + 0x70),0x14,
               piVar12 + 1,0x14,uVar9);
    iVar2 = *(int *)(lVar4 + 0x44);
    if ((iVar2 != 0) && (*(char *)(lVar4 + 0x3c) == '\0')) {
      if (*(int *)(lVar4 + 0x2c) < 0) {
        iVar2 = -iVar2;
      }
      uVar11 = 0;
      piVar12 = piVar12 + 1;
      if (uVar1 != 0) {
        do {
          iVar10 = 0;
          if (*piVar12 != 0) {
            iVar10 = iVar2;
          }
          uVar11 = uVar11 + 1;
          *piVar12 = iVar10 + *piVar12;
          piVar12 = piVar12 + 5;
        } while (uVar11 < uVar1);
      }
    }
    FUN_1403aff20(param_1[1],param_1[3],0xffffffff);
  }
  if ((*(byte *)(param_1[3] + 0xd8) & 4) == 0) {
    return;
  }
  FUN_14039f620(*param_1,param_1[1]);
  return;
}


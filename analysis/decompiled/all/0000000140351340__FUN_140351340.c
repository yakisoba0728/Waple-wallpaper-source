// Function: FUN_140351340
// Addr: 140351340
// Size: 546 bytes


void FUN_140351340(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,int param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_388 [32];
  int local_368;
  int local_360;
  int local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined4 local_33c;
  ulonglong local_48;
  
  local_48 = DAT_1404dc110 ^ (ulonglong)auStack_388;
  piVar11 = &local_358;
  local_340 = *(undefined4 *)(param_1 + 0x40);
  local_33c = *(undefined4 *)(param_1 + 0x44);
  local_34c = param_5;
  local_354 = param_7;
  local_348 = param_2;
  local_344 = param_3;
  local_350 = param_4;
  local_358 = param_6;
  do {
    while( true ) {
      uVar2 = piVar11[7];
      uVar3 = piVar11[1];
      iVar13 = piVar11[5];
      iVar4 = piVar11[3];
      uVar5 = uVar3;
      if ((int)uVar3 < (int)uVar2) {
        uVar5 = uVar2;
      }
      iVar8 = iVar4;
      if (iVar4 < iVar13) {
        iVar8 = iVar13;
      }
      uVar9 = -*(int *)(param_1 + 4);
      uVar7 = uVar2;
      if ((int)uVar3 < (int)uVar2) {
        uVar7 = uVar3;
      }
      iVar10 = iVar13;
      if (iVar4 < iVar13) {
        iVar10 = iVar4;
      }
      if (((int)(uVar7 & uVar9) <= iVar10) &&
         (iVar8 <= (int)(*(int *)(param_1 + 4) + -1 + uVar5 & uVar9))) break;
      iVar12 = *piVar11 + piVar11[2];
      piVar11[0xc] = piVar11[6];
      iVar1 = piVar11[4] + piVar11[2];
      piVar11[0xd] = uVar2;
      iVar8 = piVar11[4] + piVar11[6];
      iVar10 = iVar8 + iVar1;
      iVar1 = iVar1 + iVar12;
      piVar11[10] = iVar8 >> 1;
      param_6 = iVar1 + iVar10 >> 3;
      piVar11[8] = iVar10 >> 2;
      piVar11[2] = iVar12 >> 1;
      piVar11[4] = iVar1 >> 2;
      iVar10 = iVar13 + uVar2 + iVar4 + iVar13;
      piVar11[6] = param_6;
      iVar8 = iVar4 + iVar13 + uVar3 + iVar4;
      piVar11[0xb] = (int)(iVar13 + uVar2) >> 1;
      piVar11[9] = iVar10 >> 2;
      piVar11[3] = (int)(uVar3 + iVar4) >> 1;
      piVar11[5] = iVar8 >> 2;
      piVar11[7] = iVar8 + iVar10 >> 3;
      piVar11 = piVar11 + 6;
    }
    if (uVar2 != uVar3) {
      iVar13 = ((int)uVar3 <= (int)uVar2) + 1;
      if ((*(int *)(param_1 + 0x70) != iVar13) &&
         (((*(int *)(param_1 + 0x70) != 0 && (cVar6 = FUN_140351cb0(param_1), cVar6 != '\0')) ||
          (cVar6 = FUN_1403521e0(param_1,iVar13), cVar6 != '\0')))) {
LAB_14035157a:
        func_0x0001402ed2f0(local_48 ^ (ulonglong)auStack_388);
        return;
      }
      iVar13 = *(int *)(param_1 + 0x4c);
      local_368 = *(int *)(param_1 + 0x48);
      if ((int)uVar2 < (int)uVar3) {
        local_360 = iVar13;
        cVar6 = FUN_140350fe0(param_1,3,piVar11,&LAB_1403526c0);
      }
      else {
        local_360 = -local_368;
        piVar11[1] = -piVar11[1];
        local_368 = -iVar13;
        piVar11[3] = -piVar11[3];
        piVar11[5] = -piVar11[5];
        piVar11[7] = -piVar11[7];
        cVar6 = FUN_140350fe0(param_1,3,piVar11,&LAB_1403526c0);
        piVar11[1] = -piVar11[1];
      }
      if (cVar6 != '\0') goto LAB_14035157a;
    }
    *(int *)(param_1 + 0x40) = param_6;
    *(uint *)(param_1 + 0x44) = uVar3;
    if (piVar11 == &local_358) goto LAB_14035157a;
    param_6 = piVar11[-6];
    piVar11 = piVar11 + -6;
  } while( true );
}


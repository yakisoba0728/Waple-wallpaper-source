// Function: FUN_140351270
// Addr: 140351270
// Size: 602 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
FUN_140351270(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  undefined1 auStack_400 [112];
  undefined8 uStack_390;
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
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_388;
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
      if (*(int *)(param_1 + 0x70) != iVar13) {
        if (*(int *)(param_1 + 0x70) != 0) {
          uStack_390 = 0x14035135f;
          cVar6 = FUN_140351be0(param_1);
          if (cVar6 != '\0') {
            return (undefined1 *)0x1;
          }
        }
        uStack_390 = 0x140351372;
        cVar6 = FUN_140352110(param_1,iVar13);
        if (cVar6 != '\0') {
          return (undefined1 *)0x1;
        }
      }
      iVar13 = *(int *)(param_1 + 0x4c);
      local_368 = *(int *)(param_1 + 0x48);
      if ((int)uVar2 < (int)uVar3) {
        uStack_390 = 0x1403513a3;
        local_360 = iVar13;
        cVar6 = FUN_140350f10(param_1,3,piVar11,&LAB_1403525f0);
      }
      else {
        local_360 = -local_368;
        piVar11[1] = -piVar11[1];
        local_368 = -iVar13;
        piVar11[3] = -piVar11[3];
        piVar11[5] = -piVar11[5];
        piVar11[7] = -piVar11[7];
        uStack_390 = 0x1403513de;
        cVar6 = FUN_140350f10(param_1,3,piVar11,&LAB_1403525f0);
        piVar11[1] = -piVar11[1];
      }
      if (cVar6 != '\0') {
        return (undefined1 *)0x1;
      }
    }
    *(int *)(param_1 + 0x40) = param_6;
    *(uint *)(param_1 + 0x44) = uVar3;
    if (piVar11 == &local_358) {
      return auStack_400;
    }
    param_6 = piVar11[-6];
    piVar11 = piVar11 + -6;
  } while( true );
}


// Function: FUN_1400d4800
// Addr: 1400d4800
// Size: 668 bytes


undefined8 FUN_1400d4800(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  char *pcVar10;
  char *pcVar11;
  ulonglong uVar12;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 local_430;
  longlong local_428;
  longlong lStack_420;
  undefined8 local_418;
  char local_3de;
  undefined2 local_3dd;
  char local_3db [35];
  undefined1 local_3b8 [40];
  undefined8 local_390;
  uint local_388;
  char local_377;
  longlong local_348;
  undefined1 local_340;
  longlong *local_338;
  longlong lStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined1 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined1 local_2f8;
  longlong local_2f0 [2];
  undefined1 local_2e0;
  undefined1 local_e8 [28];
  uint local_cc;
  
  uVar6 = 0;
  local_418 = 0;
  local_428 = 0;
  lStack_420 = 0;
  (**(code **)(*param_3 + 0x18))(param_3,local_e8);
  if (local_cc != 0) {
    do {
      (**(code **)(*param_3 + 0x38))(param_3,uVar6,&local_390);
      if ((local_377 == '\0') && (iVar2 = FUN_1402c11a0(local_390,"BLENDINDICES"), iVar2 != 0)) {
        pcVar11 = local_3db;
        if (local_388 < 10) {
          local_3dd._1_1_ = (char)local_388 + '0';
          pcVar11 = (char *)((longlong)&local_3dd + 1);
        }
        else {
          do {
            pcVar10 = pcVar11;
            pcVar11 = pcVar10 + -2;
            uVar6 = local_388 / 100;
            *(undefined2 *)pcVar11 =
                 *(undefined2 *)(&DAT_140474460 + (ulonglong)(local_388 % 100) * 2);
            local_388 = uVar6;
          } while (9 < uVar6);
          if (uVar6 != 0) {
            pcVar11 = pcVar10 + -3;
            *pcVar11 = (char)uVar6 + '0';
          }
        }
        FUN_140053de0(local_3b8,pcVar11,local_3db);
        local_438 = 0;
        local_448 = 0;
        uStack_440 = 0;
        local_430 = 0;
        uVar3 = func_0x000140421ed0(local_390);
        return uVar3;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_cc);
  }
  if (local_428 != lStack_420) {
    local_348 = 0;
    local_338 = (longlong *)0x0;
    lStack_330 = 0;
    local_328 = 0;
    uStack_320 = 0;
    local_308 = 0;
    uStack_300 = 0;
    local_340 = 0;
    local_318 = 0;
    local_310 = 0;
    local_2f8 = 0;
    local_2f0[0] = 0;
    local_2f0[1] = 0;
    local_2e0 = 0;
    FUN_1400de350(&local_390,"\\bVS_INPUT\\b");
    cVar1 = FUN_1400dc3d0(param_1,&local_348,&local_390);
    if (cVar1 != '\0') {
      uVar12 = param_1[2];
      lVar4 = lStack_330 - (longlong)local_338 >> 0x3f;
      plVar7 = local_2f0;
      if ((lStack_330 - (longlong)local_338) / 0x18 + lVar4 != lVar4) {
        plVar7 = local_338;
      }
      puVar9 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar9 = (undefined8 *)*param_1;
      }
      if ((((1 < uVar12) && (uVar8 = *plVar7 - local_348, uVar8 <= uVar12 - 2)) &&
          (lVar4 = FUN_14028f4c0((longlong)puVar9 + uVar8,uVar12 + (longlong)puVar9,&DAT_140486938,2
                                ), lVar4 != uVar12 + (longlong)puVar9)) &&
         (lVar4 - (longlong)puVar9 != -1)) {
        local_438 = 0;
        local_430 = 0;
        local_448 = 0;
        uStack_440 = 0;
        if ((ulonglong)param_1[2] < uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_140012a10();
        }
        uVar5 = param_1[2] - uVar8;
        uVar12 = ((lVar4 - (longlong)puVar9) + 2) - uVar8;
        if (uVar5 < uVar12) {
          uVar12 = uVar5;
        }
        if (0xf < (ulonglong)param_1[3]) {
          param_1 = (undefined8 *)*param_1;
        }
        uVar3 = func_0x000140017550(&local_448,(longlong)param_1 + uVar8,uVar12);
        return uVar3;
      }
    }
    FUN_1400de2b0(&local_390);
    func_0x0001400dd9c0(&local_338);
  }
  func_0x0001400dda50(&local_428);
  return 0;
}


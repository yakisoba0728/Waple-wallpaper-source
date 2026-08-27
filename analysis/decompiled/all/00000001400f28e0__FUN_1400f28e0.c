// Function: FUN_1400f28e0
// Addr: 1400f28e0
// Size: 1414 bytes


void FUN_1400f28e0(longlong *param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined4 *puVar8;
  byte extraout_var;
  HANDLE pvVar9;
  undefined8 ****ppppuVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  longlong *plVar16;
  int local_res8 [2];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  longlong *local_d8;
  int local_d0 [2];
  longlong *local_c8;
  longlong *local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulonglong local_98;
  undefined8 ***local_90 [3];
  ulonglong local_78;
  undefined8 ***local_70 [3];
  ulonglong local_58;
  undefined1 local_50 [8];
  int local_48;
  
  puVar15 = auStack_f8;
  iVar5 = FUN_140290d80(param_1 + 0x1b);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  iVar5 = *(int *)((longlong)param_1 + 0x124);
  if (iVar5 == 0x7fffffff) goto LAB_1400f2e4a;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  plVar16 = (longlong *)0x0;
  LOCK();
  *(undefined1 *)(param_1 + 0x19) = 0;
  UNLOCK();
  LOCK();
  *(undefined1 *)((longlong)param_1 + 0x96) = 0;
  UNLOCK();
  if (param_1[0xb] == 0) goto LAB_1400f2e21;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = (undefined8 *)0x0;
  uStack_a8 = 0;
  FUN_140016170(&local_b0,L"video",5);
  FUN_140060990(local_90,param_2);
  if (param_4 == 0) {
    FUN_140016600(local_70,local_90);
    ppppuVar10 = local_70;
    if (7 < local_58) {
      ppppuVar10 = (undefined8 ****)local_70[0];
    }
    iVar5 = FUN_140290230(ppppuVar10,local_50,9,0xffffffff);
    param_4 = -1;
    if (iVar5 == 0) {
      param_4 = local_48;
    }
    FUN_140016770(local_70);
  }
  ppppuVar10 = local_90;
  if (7 < local_78) {
    ppppuVar10 = (undefined8 ****)local_90[0];
  }
  plVar6 = (longlong *)FUN_1402ecff0(400,&PTR_140426e20);
  plVar2 = DAT_1404e8f80;
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_140488278;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    *plVar6 = (longlong)&PTR_FUN_1404883a8;
    FUN_1400fb450(plVar6 + 3);
    *(int *)(plVar6 + 0x25) = param_4;
    *(undefined4 *)(plVar6 + 0x27) = param_3;
    *(undefined4 *)((longlong)plVar6 + 0x13c) = 0;
    plVar6[0x2b] = 0;
    plVar6[0x2c] = 0;
    plVar6[0x2d] = 0;
    plVar6[0x2e] = 0;
    plVar6[0x2f] = 0;
    plVar6[0x30] = 0;
    plVar6[0x29] = 0;
    plVar6[0x2a] = 0;
    *(undefined4 *)(plVar6 + 0x31) = 0xffffffff;
    *(undefined4 *)(plVar6 + 0x28) = 0x102;
    *(undefined4 *)((longlong)plVar6 + 0x18c) = 0;
    lVar7 = FUN_14004c4c0(plVar6 + 5,ppppuVar10,0x21);
    lVar11 = (longlong)*(int *)(plVar6[3] + 4);
    if (lVar7 == 0) {
      uVar12 = 6;
      if (*(longlong *)(lVar11 + 0x60 + (longlong)plVar6) != 0) {
        uVar12 = 2;
      }
      uVar12 = uVar12 | *(uint *)(lVar11 + 0x28 + (longlong)plVar6);
    }
    else {
      uVar12 = 4;
      if (*(longlong *)(lVar11 + 0x60 + (longlong)plVar6) != 0) {
        uVar12 = 0;
      }
    }
    FUN_140013b50((longlong)*(int *)(plVar6[3] + 4) + 0x18 + (longlong)plVar6,uVar12,0);
    FUN_14004a920(plVar6 + 3,param_3,0);
    puVar8 = _aligned_malloc(4,0x20);
    plVar6[2] = (longlong)puVar8;
    *puVar8 = 0;
    LOCK();
    *(int *)plVar6[2] = *(int *)plVar6[2] + 1;
    UNLOCK();
    plVar16 = plVar6;
  }
  local_c0 = (longlong *)0x0;
  (**(code **)*plVar16)(plVar16,&DAT_140487168,&local_c0);
  *(undefined2 *)((longlong)param_1 + 0x65) = local_b0._1_2_;
  *(undefined1 *)((longlong)param_1 + 0x67) = local_b0._3_1_;
  *(undefined2 *)((longlong)param_1 + 0x75) = local_a0._1_2_;
  *(undefined1 *)((longlong)param_1 + 0x77) = local_a0._3_1_;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((longlong)param_1 + 0x74) = 0;
  param_1[0xf] = 0;
  local_c8 = (longlong *)0x0;
  iVar5 = MFCreateSourceReaderFromByteStream(plVar16,0,&local_c8);
  plVar2 = local_c8;
  if (-1 < iVar5) {
    *(undefined2 *)((longlong)param_1 + 0x65) = local_b0._1_2_;
    *(undefined1 *)((longlong)param_1 + 0x67) = local_b0._3_1_;
    *(undefined2 *)((longlong)param_1 + 0x75) = local_a0._1_2_;
    *(undefined1 *)((longlong)param_1 + 0x77) = local_a0._3_1_;
    *(undefined1 *)((longlong)param_1 + 100) = 0;
    param_1[0xd] = 0;
    *(undefined4 *)(param_1 + 0xe) = 0;
    *(undefined1 *)((longlong)param_1 + 0x74) = 0;
    param_1[0xf] = 0;
    local_d8 = (longlong *)0x0;
    iVar5 = (**(code **)(*local_c8 + 0x20))(local_c8,0xfffffffc,1);
    if ((-1 < iVar5) &&
       (iVar5 = (**(code **)(*plVar2 + 0x30))(plVar2,0xfffffffc,&local_d8), -1 < iVar5)) {
      iVar5 = (**(code **)(*local_d8 + 0x40))(local_d8,&DAT_14042c2e0,&local_b8);
      if (-1 < iVar5) {
        *(int *)((longlong)param_1 + 0x6c) = (int)local_b8;
        *(int *)(param_1 + 0xd) = (int)(local_b8 >> 0x20);
      }
      *(byte *)((longlong)param_1 + 100) = (byte)((uint)iVar5 >> 0x1f) ^ 1;
      iVar5 = (**(code **)(*local_d8 + 0x40))(local_d8,&DAT_14042c2f0,&local_b8);
      if (-1 < iVar5) {
        *(float *)(param_1 + 0xe) =
             (float)((double)(local_b8 >> 0x20) / (double)(local_b8 & 0xffffffff));
      }
      local_res8[0] = 0;
      iVar5 = (**(code **)(*local_d8 + 0x38))(local_d8,&DAT_14042c300,local_res8);
      if (-1 < iVar5) {
        if (local_res8[0] == 0xf) {
          *(undefined4 *)(param_1 + 0xf) = 2;
        }
        else {
          if (local_res8[0] != 0x10) goto LAB_1400f2cb6;
          *(undefined4 *)(param_1 + 0xf) = 1;
        }
        *(undefined1 *)((longlong)param_1 + 0x74) = 1;
      }
LAB_1400f2cb6:
      local_d0[0] = 0;
      iVar5 = (**(code **)(*local_d8 + 0x38))(local_d8,&DAT_14042c310,local_d0);
      if ((-1 < iVar5) && (local_d0[0] == 9)) {
        *(undefined4 *)((longlong)param_1 + 0x7c) = 1;
      }
    }
    if (local_d8 != (longlong *)0x0) {
      (**(code **)(*local_d8 + 0x10))();
    }
  }
  if (local_c8 != (longlong *)0x0) {
    (**(code **)(*local_c8 + 0x10))();
    local_c8 = (longlong *)0x0;
  }
  (**(code **)(*plVar16 + 0x38))(plVar16,0);
  uVar4 = local_98;
  puVar3 = local_b0;
  if (*(char *)((longlong)param_1 + 100) != '\0') {
    lVar7 = local_a0 * 2;
    lVar11 = thunk_FUN_14028af20(lVar7 + 2);
    puVar13 = &local_b0;
    if (7 < uVar4) {
      puVar13 = puVar3;
    }
    FUN_1404210f0(lVar11,puVar13,lVar7);
    *(undefined2 *)(lVar7 + lVar11) = 0;
    (**(code **)(*(longlong *)param_1[0xb] + 0x168))((longlong *)param_1[0xb],local_c0,lVar11);
    thunk_FUN_14028af80(lVar11);
    *(byte *)((longlong)param_1 + 0x22) = extraout_var >> 7 ^ 1;
    if ((HANDLE)param_1[0x10] != (HANDLE)0x0) {
      CloseHandle((HANDLE)param_1[0x10]);
    }
    pvVar9 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    param_1[0x10] = (longlong)pvVar9;
    (**(code **)(*param_1 + 0x38))(param_1);
    LOCK();
    *(undefined1 *)((longlong)param_1 + 0x95) = 1;
    UNLOCK();
  }
  plVar2 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    local_c0 = (longlong *)0x0;
    (**(code **)(*plVar2 + 0x10))();
  }
  (**(code **)(*plVar16 + 0x10))(plVar16);
  FUN_140016770(local_90);
  if (7 < uVar4) {
    uVar14 = uVar4 * 2 + 2;
    puVar13 = puVar3;
    if (0xfff < uVar14) {
      puVar13 = (undefined8 *)puVar3[-1];
      if (0x1f < (ulonglong)((longlong)puVar3 + (-8 - (longlong)puVar13))) {
        pcVar1 = (code *)swi(0x29);
        iVar5 = (*pcVar1)(5);
        puVar15 = auStack_f0;
LAB_1400f2e4a:
        *(int *)((longlong)param_1 + 0x124) = iVar5 + -1;
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar15 + -8) = &UNK_1400f2e5c;
        FUN_140290d30(6);
      }
      uVar14 = uVar4 * 2 + 0x29;
    }
    thunk_FUN_14028af80(puVar13,uVar14);
  }
LAB_1400f2e21:
  FUN_140290ea0(param_1 + 0x1b);
  return;
}


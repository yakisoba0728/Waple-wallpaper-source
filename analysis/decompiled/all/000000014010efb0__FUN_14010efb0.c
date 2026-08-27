// Function: FUN_14010efb0
// Addr: 14010efb0
// Size: 1178 bytes


void FUN_14010efb0(longlong *param_1)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  ulonglong uVar4;
  DWORD DVar5;
  DWORD DVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined1 uVar11;
  undefined8 ****ppppuVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  undefined1 uVar15;
  longlong lVar16;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  undefined4 local_a8;
  undefined4 *local_a0;
  undefined8 ***local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  ulonglong local_80;
  undefined1 local_78 [40];
  undefined1 local_50 [40];
  
  puVar14 = auStack_c8;
  if ((int)param_1[0x3b] != 0) {
    DVar5 = GetThreadId((HANDLE)param_1[0x3a]);
    PostThreadMessageW(DVar5,0x12,0,0);
    if ((int)param_1[0x3b] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(1);
    }
    DVar5 = *(DWORD *)(param_1 + 0x3b);
    DVar6 = GetCurrentThreadId();
    if (DVar5 == DVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(5);
    }
    local_98 = (undefined8 ***)param_1[0x3a];
    uStack_90 = (undefined4)param_1[0x3b];
    uStack_8c = *(undefined4 *)((longlong)param_1 + 0x1dc);
    iVar7 = FUN_140291150(&local_98,0);
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(2);
    }
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
  }
  uVar8 = (**(code **)(*param_1 + 0x98))(param_1,local_50);
  uVar8 = FUN_140086de0(uVar8,"general","");
  FUN_140085090(local_78,uVar8);
  FUN_140085440(local_50);
  uVar8 = FUN_140086de0(local_78,&DAT_140476e68,&DAT_140476e6c);
  FUN_140085cc0(uVar8,&local_98);
  uVar4 = local_80;
  lVar16 = local_88;
  pppuVar2 = local_98;
  uVar15 = 2;
  ppppuVar12 = &local_98;
  if (0xf < local_80) {
    ppppuVar12 = (undefined8 ****)local_98;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (local_88 == 2) {
    iVar7 = memcmp(ppppuVar12,&DAT_140476e70,2);
    if (iVar7 != 0) goto LAB_14010f0f6;
    *(undefined4 *)(param_1 + 0x48) = 1;
  }
  else {
LAB_14010f0f6:
    ppppuVar12 = &local_98;
    if (0xf < uVar4) {
      ppppuVar12 = (undefined8 ****)pppuVar2;
    }
    if (lVar16 == 2) {
      iVar7 = memcmp(ppppuVar12,&DAT_1404892c4,2);
      if (iVar7 == 0) {
        *(undefined4 *)(param_1 + 0x48) = 2;
        goto LAB_14010f150;
      }
    }
    ppppuVar12 = &local_98;
    if (0xf < uVar4) {
      ppppuVar12 = (undefined8 ****)pppuVar2;
    }
    if (lVar16 == 2) {
      iVar7 = memcmp(ppppuVar12,&DAT_1404892c8,2);
      if (iVar7 == 0) {
        *(undefined4 *)(param_1 + 0x48) = 3;
      }
    }
  }
LAB_14010f150:
  uVar8 = FUN_140086de0(local_78,"postprocessing","");
  FUN_140085cc0(uVar8,&local_98);
  pppuVar3 = local_98;
  ppppuVar12 = &local_98;
  if (0xf < local_80) {
    ppppuVar12 = (undefined8 ****)local_98;
  }
  if (local_88 == 8) {
    iVar7 = memcmp(ppppuVar12,"disabled",8);
    if (iVar7 != 0) goto LAB_14010f1aa;
    *(uint *)(param_1 + 0x49) = *(uint *)(param_1 + 0x49) & 0xffffffbf;
  }
  else {
LAB_14010f1aa:
    *(uint *)(param_1 + 0x49) = *(uint *)(param_1 + 0x49) | 0x40;
  }
  plVar9 = (longlong *)FUN_140086de0(local_78,"shadows","");
  if ((char)*(uint *)(plVar9 + 1) == '\x04') {
    lVar16 = *plVar9;
    if ((lVar16 != 0) && ((*(uint *)(plVar9 + 1) >> 8 & 1) != 0)) {
      lVar16 = lVar16 + 4;
    }
    iVar7 = FUN_1402c10d0(lVar16,"disabled");
    if (iVar7 == 0) {
      uVar11 = 0;
    }
    else {
      iVar7 = FUN_1402c10d0(lVar16,&DAT_1404747e4);
      if (iVar7 == 0) {
        uVar11 = 1;
      }
      else {
        iVar7 = FUN_1402c10d0(lVar16,&DAT_1404747dc);
        if (iVar7 == 0) {
          uVar11 = 3;
        }
        else {
          iVar7 = FUN_1402c10d0(lVar16,"ultra");
          uVar11 = 2;
          if (iVar7 == 0) {
            uVar11 = 4;
          }
        }
      }
    }
  }
  else {
    uVar11 = 2;
  }
  *(undefined1 *)((longlong)param_1 + 0x244) = uVar11;
  plVar9 = (longlong *)FUN_140086de0(local_78,"volumetrics","");
  if ((char)*(uint *)(plVar9 + 1) == '\x04') {
    lVar16 = *plVar9;
    if ((lVar16 != 0) && ((*(uint *)(plVar9 + 1) >> 8 & 1) != 0)) {
      lVar16 = lVar16 + 4;
    }
    iVar7 = FUN_1402c10d0(lVar16,"disabled");
    if (iVar7 == 0) {
      uVar15 = 0;
    }
    else {
      iVar7 = FUN_1402c10d0(lVar16,&DAT_1404747e4);
      if (iVar7 == 0) {
        uVar15 = 1;
      }
      else {
        iVar7 = FUN_1402c10d0(lVar16,&DAT_1404747dc);
        if (iVar7 == 0) {
          uVar15 = 3;
        }
        else {
          iVar7 = FUN_1402c10d0(lVar16,"ultra");
          uVar15 = 2;
          if (iVar7 == 0) {
            uVar15 = 4;
          }
        }
      }
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x245) = uVar15;
  FUN_1401154c0(param_1,local_78);
  puVar10 = (undefined8 *)FUN_14028af20(0x18);
  *puVar10 = param_1;
  puVar10[1] = FUN_140110630;
  *(undefined4 *)(puVar10 + 2) = 0;
  *(undefined4 *)((longlong)puVar10 + 0x14) = uStack_8c;
  local_a0 = &uStack_90;
  local_a8 = 0;
  local_98 = (undefined8 ***)FUN_1402ca17c(0,0,FUN_140116d60,puVar10);
  if (local_98 == (undefined8 ***)0x0) {
    uStack_90 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  if ((int)param_1[0x3b] != 0) goto LAB_14010f41a;
  *(undefined4 *)(param_1 + 0x3b) = uStack_90;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = uStack_8c;
  param_1[0x3a] = (longlong)local_98;
  if (0xf < local_80) {
    uVar13 = local_80 + 1;
    ppppuVar12 = (undefined8 ****)pppuVar3;
    if (uVar13 < 0x1000) {
LAB_14010f3ab:
      thunk_FUN_14028af80(ppppuVar12,uVar13);
      goto LAB_14010f3b3;
    }
    ppppuVar12 = (undefined8 ****)pppuVar3[-1];
    if ((ulonglong)((longlong)pppuVar3 + (-8 - (longlong)ppppuVar12)) < 0x20) {
      uVar13 = local_80 + 0x28;
      goto LAB_14010f3ab;
    }
LAB_14010f413:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar14 = auStack_c0;
LAB_14010f41a:
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar14 + -8) = &UNK_14010f41f;
    FUN_140015110();
  }
LAB_14010f3b3:
  if (uVar4 < 0x10) goto LAB_14010f3e6;
  uVar13 = uVar4 + 1;
  ppppuVar12 = (undefined8 ****)pppuVar2;
  if (0xfff < uVar13) {
    ppppuVar12 = (undefined8 ****)pppuVar2[-1];
    if (0x1f < (ulonglong)((longlong)pppuVar2 + (-8 - (longlong)ppppuVar12))) goto LAB_14010f413;
    uVar13 = uVar4 + 0x28;
  }
  thunk_FUN_14028af80(ppppuVar12,uVar13);
LAB_14010f3e6:
  FUN_140085440(local_78);
  return;
}


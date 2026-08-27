// Function: FUN_140150770
// Addr: 140150770
// Size: 832 bytes


undefined8 FUN_140150770(longlong param_1,char *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  size_t sVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 ******ppppppuVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong *******pppppppuVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined1 local_res20;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [24];
  ulonglong local_98;
  undefined8 ******local_88;
  ulonglong *****pppppuStack_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong ******local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  longlong local_48 [3];
  ulonglong local_30;
  
  puVar13 = auStack_b8;
  pppppppuVar7 = (undefined8 *******)0x0;
  local_68 = (ulonglong ******)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  sVar3 = strlen(param_2);
  FUN_140017480(&local_68,param_2,sVar3);
  FUN_1400187b0(&local_68);
  pppppppuVar10 = &local_68;
  if (0xf < local_50) {
    pppppppuVar10 = (ulonglong *******)local_68;
  }
  uVar4 = FUN_1401515b0(param_1,pppppppuVar10,param_3,1);
  uVar11 = local_58;
  pppppppuVar10 = &local_68;
  if (0xf < local_50) {
    pppppppuVar10 = (ulonglong *******)local_68;
  }
  local_78 = 0;
  local_70 = 0;
  local_88 = (undefined8 *******)0x0;
  pppppuStack_80 = (ulonglong *****)0x0;
  if (0x7fffffffffffffff < local_58) goto LAB_140150aa6;
  if (local_58 < 0x10) {
    local_78 = local_58;
    local_70 = 0xf;
    local_88 = *pppppppuVar10;
    pppppuStack_80 = (ulonglong *****)pppppppuVar10[1];
LAB_1401508d3:
    if (local_70 - local_78 < 10) {
      local_98 = 10;
      FUN_140053110(&local_88,10,local_res20,"_instance_");
    }
    else {
      pppppppuVar7 = &local_88;
      if (0xf < local_70) {
        pppppppuVar7 = (undefined8 *******)local_88;
      }
      lVar12 = local_78 + (longlong)pppppppuVar7;
      local_78 = local_78 + 10;
      FUN_1404210f0(lVar12,"_instance_",10);
      *(undefined1 *)(lVar12 + 10) = 0;
    }
    *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + 1;
    puVar8 = (undefined8 *)FUN_140153110(local_48);
    uVar5 = local_78;
    uVar11 = puVar8[2];
    if (0xf < (ulonglong)puVar8[3]) {
      puVar8 = (undefined8 *)*puVar8;
    }
    if (local_70 - local_78 < uVar11) {
      local_98 = uVar11;
      FUN_140053110(&local_88,uVar11,local_res20);
    }
    else {
      pppppppuVar7 = &local_88;
      if (0xf < local_70) {
        pppppppuVar7 = (undefined8 *******)local_88;
      }
      lVar12 = (longlong)pppppppuVar7 + local_78;
      local_78 = uVar11 + local_78;
      FUN_1404210f0(lVar12,puVar8,uVar11);
      *(undefined1 *)((longlong)pppppppuVar7 + uVar5 + uVar11) = 0;
    }
    if (0xf < local_30) {
      uVar11 = local_30 + 1;
      lVar12 = local_48[0];
      if (0xfff < uVar11) {
        lVar12 = *(longlong *)(local_48[0] + -8);
        if (0x1f < (local_48[0] - lVar12) - 8U) goto LAB_140150a9f;
        uVar11 = local_30 + 0x28;
      }
      thunk_FUN_14028af80(lVar12,uVar11);
    }
    puVar8 = (undefined8 *)FUN_140151f40(param_1,&local_88);
    *puVar8 = uVar4;
    if (0xf < local_70) {
      uVar11 = local_70 + 1;
      pppppppuVar7 = (undefined8 *******)local_88;
      if (0xfff < uVar11) {
        pppppppuVar7 = (undefined8 *******)local_88[-1];
        if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppppuVar7)))
        goto LAB_140150a9f;
        uVar11 = local_70 + 0x28;
      }
      thunk_FUN_14028af80(pppppppuVar7,uVar11);
    }
    local_78 = 0;
    local_70 = 0xf;
    local_88 = (undefined8 ******)((ulonglong)local_88 & 0xffffffffffffff00);
    if (local_50 < 0x10) {
      return uVar4;
    }
    uVar11 = local_50 + 1;
    pppppppuVar10 = (ulonglong *******)local_68;
    if (uVar11 < 0x1000) {
LAB_140150a7b:
      thunk_FUN_14028af80(pppppppuVar10,uVar11);
      return uVar4;
    }
    pppppppuVar10 = (ulonglong *******)local_68[-1];
    if ((ulonglong)((longlong)local_68 + (-8 - (longlong)pppppppuVar10)) < 0x20) {
      uVar11 = local_50 + 0x28;
      goto LAB_140150a7b;
    }
  }
  else {
    uVar5 = local_58 | 0xf;
    if (uVar5 < 0x8000000000000000) {
      if (uVar5 < 0x16) {
        uVar5 = 0x16;
      }
      uVar1 = uVar5 + 1;
      if (uVar1 != 0) {
        if (0xfff < uVar1) {
          uVar9 = uVar5 + 0x28;
          if (uVar9 <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_140017370();
          }
          goto LAB_140150855;
        }
        pppppppuVar7 = (undefined8 *******)FUN_14028af20(uVar1);
      }
LAB_1401508b0:
      local_78 = uVar11;
      local_88 = pppppppuVar7;
      local_70 = uVar5;
      FUN_1404210f0(pppppppuVar7,pppppppuVar10,uVar11 + 1);
      goto LAB_1401508d3;
    }
    uVar9 = 0x8000000000000027;
    uVar5 = 0x7fffffffffffffff;
LAB_140150855:
    ppppppuVar6 = (undefined8 ******)FUN_14028af20(uVar9);
    if (ppppppuVar6 != (undefined8 ******)0x0) {
      pppppppuVar7 = (undefined8 *******)((longlong)ppppppuVar6 + 0x27U & 0xffffffffffffffe0);
      pppppppuVar7[-1] = ppppppuVar6;
      goto LAB_1401508b0;
    }
  }
LAB_140150a9f:
  pcVar2 = (code *)swi(0x29);
  (*pcVar2)(5);
  puVar13 = auStack_b0;
LAB_140150aa6:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar13 + -8) = &UNK_140150aab;
  FUN_1400172e0();
}


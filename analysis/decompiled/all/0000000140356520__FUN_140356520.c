// Function: FUN_140356520
// Addr: 140356520
// Size: 271 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140356520(longlong param_1,undefined8 *param_2,uint param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  uint local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  int local_38;
  int local_34;
  undefined8 local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  if ((param_1 == 0) || (param_4 == (undefined8 *)0x0)) {
    uVar11 = 6;
  }
  else {
    local_40 = *param_2;
    local_20 = (int)param_2[2];
    local_38 = (int)param_2[1];
    iVar12 = local_20 + local_38;
    local_38 = (int)local_40 + local_38;
    iVar13 = (int)((ulonglong)param_2[1] >> 0x20);
    local_34 = (int)((ulonglong)local_40 >> 0x20) + iVar13;
    local_28 = iVar12 / 2;
    iVar12 = iVar12 + local_38;
    local_30._4_4_ = (int)((ulonglong)param_2[2] >> 0x20);
    local_1c = local_30._4_4_;
    iVar13 = iVar13 + local_30._4_4_;
    local_38 = local_38 / 2;
    local_24 = iVar13 / 2;
    iVar13 = iVar13 + local_34;
    local_30 = CONCAT44((int)(iVar13 + (iVar13 >> 0x1f & 3U)) >> 2,
                        (int)(iVar12 + (iVar12 >> 0x1f & 3U)) >> 2);
    local_34 = local_34 / 2;
    if (param_3 < 3) {
      local_48 = 0;
      puVar9 = (undefined8 *)FUN_1402f8070(param_1,0x30,&local_48);
      uVar4 = _UNK_140451bc0;
      uVar3 = _DAT_140451bb8;
      uVar1 = _DAT_140451bb0;
      if (local_48 == 0) {
        *puVar9 = _DAT_140451ba8;
        puVar9[1] = uVar1;
        uVar8 = _UNK_140451bd4;
        uVar7 = _UNK_140451bd0;
        uVar6 = _UNK_140451bcc;
        uVar5 = _DAT_140451bc8;
        puVar9[2] = uVar3;
        puVar9[3] = uVar4;
        *(undefined4 *)(puVar9 + 4) = uVar5;
        *(undefined4 *)((longlong)puVar9 + 0x24) = uVar6;
        *(undefined4 *)(puVar9 + 5) = uVar7;
        *(undefined4 *)((longlong)puVar9 + 0x2c) = uVar8;
      }
      else {
        puVar9 = (undefined8 *)CONCAT44(uStack_44,local_48);
      }
      uVar11 = (ulonglong)local_48;
      if (local_48 == 0) {
        puVar10 = (undefined8 *)FUN_1402f8070(param_1,0x30,&local_48);
        uVar4 = _UNK_140451bc0;
        uVar3 = _DAT_140451bb8;
        uVar1 = _DAT_140451bb0;
        if (local_48 == 0) {
          *puVar10 = _DAT_140451ba8;
          puVar10[1] = uVar1;
          uVar1 = CONCAT44(_UNK_140451bcc,_DAT_140451bc8);
          uVar2 = CONCAT44(_UNK_140451bd4,_UNK_140451bd0);
          puVar10[2] = uVar3;
          puVar10[3] = uVar4;
          puVar10[4] = uVar1;
          puVar10[5] = uVar2;
          *puVar9 = local_40;
          puVar9[1] = local_30;
          *(undefined4 *)(puVar9 + 4) = 1;
          *puVar10 = local_30;
          puVar10[1] = CONCAT44(local_1c,local_20);
          *(undefined4 *)(puVar10 + 4) = 1;
          puVar9[5] = puVar10;
          puVar10[5] = *param_4;
          *param_4 = puVar9;
        }
        return (ulonglong)local_48;
      }
    }
    else {
      uVar11 = FUN_140356520(param_1,&local_40,param_3 >> 1,param_4);
      if ((int)uVar11 == 0) {
        uVar11 = FUN_140356520(param_1,&local_30,param_3 >> 1,param_4);
        return uVar11;
      }
    }
  }
  return uVar11;
}


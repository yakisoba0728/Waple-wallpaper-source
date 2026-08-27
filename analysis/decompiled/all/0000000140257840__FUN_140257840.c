// Function: FUN_140257840
// Addr: 140257840
// Size: 885 bytes


void FUN_140257840(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  longlong *local_68;
  uint local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong local_40;
  uint local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    FUN_140150ac0(*(longlong *)(param_1 + 200) + 0x1630);
    *(undefined8 *)(param_1 + 0x2c0) = 0;
  }
  if ((*(uint *)(param_1 + 0x304) >> 4 & 1) != 0) {
    local_60 = CONCAT31(local_60._1_3_,7);
    local_60 = local_60 & 0xfffffeff;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    plVar2 = (longlong *)FUN_14028af20(0x10);
    *plVar2 = 0;
    plVar2[1] = 0;
    lVar3 = FUN_14028af20(0x58);
    *(longlong *)lVar3 = lVar3;
    *(longlong *)(lVar3 + 8) = lVar3;
    *(longlong *)(lVar3 + 0x10) = lVar3;
    *(undefined2 *)(lVar3 + 0x18) = 0x101;
    *plVar2 = lVar3;
    local_68 = plVar2;
    uVar4 = FUN_140086de0(&local_68,"combos","");
    iVar5 = *(int *)(param_1 + 0x32c);
    if ((iVar5 == 0) || (iVar5 == 0x1f)) {
      iVar5 = 0;
    }
    local_38 = CONCAT31(local_38._1_3_,1);
    uVar7 = local_38 & 0xfffffeff;
    plVar2 = (longlong *)FUN_140086de0(uVar4,"BLENDMODE","");
    local_38 = (uint)plVar2[1];
    *(uint *)(plVar2 + 1) = uVar7;
    local_40 = *plVar2;
    *plVar2 = (longlong)iVar5;
    lVar3 = plVar2[2];
    plVar2[2] = 0;
    local_28 = plVar2[3];
    local_20 = plVar2[4];
    plVar2[3] = 0;
    plVar2[4] = 0;
    local_30 = lVar3;
    FUN_140086d30(&local_40);
    if (lVar3 != 0) {
      FUN_140017240(lVar3 + 0x40);
      FUN_140017240(lVar3 + 0x20);
      FUN_140017240(lVar3);
      thunk_FUN_14028af80(lVar3,0x60);
    }
    local_38 = CONCAT31(local_38._1_3_,1);
    plVar2 = (longlong *)FUN_140086de0(uVar4,"FOG_COMPUTED","");
    uVar7 = *(uint *)(plVar2 + 1);
    *(uint *)(plVar2 + 1) = local_38 & 0xfffffeff;
    lVar3 = *plVar2;
    *plVar2 = 1;
    lVar1 = plVar2[2];
    plVar2[2] = 0;
    plVar2[3] = 0;
    plVar2[4] = 0;
    switch(uVar7 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if ((uVar7 >> 8 & 1) != 0) {
        thunk_FUN_1402d9040(lVar3);
      }
      break;
    case 6:
    case 7:
      if (lVar3 != 0) {
        FUN_140088e40(lVar3);
        thunk_FUN_14028af80(lVar3,0x10);
      }
      break;
    default:
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    }
    if (lVar1 != 0) {
      FUN_140017240(lVar1 + 0x40);
      FUN_140017240(lVar1 + 0x20);
      FUN_140017240(lVar1);
      thunk_FUN_14028af80(lVar1,0x60);
    }
    if ((((*(uint *)(*(longlong *)(param_1 + 200) + 0x118) >> 10 & 1) == 0) &&
        (*(char *)(param_1 + 0x5a0) == '\0')) &&
       (uVar7 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 200) + 0x1510) + 0x40))(),
       1 < uVar7)) {
      FUN_140084f50(&local_40,"enabled");
      uVar4 = FUN_140086de0(&local_68,"depthtest","");
      FUN_140085610(uVar4,&local_40);
      FUN_140085440(&local_40);
    }
    lVar3 = *(longlong *)(param_1 + 200);
    uVar7 = (**(code **)(**(longlong **)(lVar3 + 0x1510) + 0x40))();
    pcVar6 = "materials/util/effectpassthrough.json";
    if (2 < uVar7) {
      pcVar6 = "materials/util/effectpassthrough_4.json";
    }
    uVar4 = FUN_140150770(lVar3 + 0x1630,pcVar6,&local_68);
    *(undefined8 *)(param_1 + 0x2c0) = uVar4;
    if ((byte)local_60 < 8) {
                    /* WARNING: Could not recover jumptable at 0x000140257b51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                *(uint *)(&DAT_140257c0c + (ulonglong)(byte)local_60 * 4)))
                (IMAGE_DOS_HEADER_140000000.e_magic +
                 *(uint *)(&DAT_140257c0c + (ulonglong)(byte)local_60 * 4));
      return;
    }
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    lVar3 = local_58;
    if (local_58 != 0) {
      FUN_140017240(local_58 + 0x40);
      FUN_140017240(lVar3 + 0x20);
      FUN_140017240(lVar3);
      thunk_FUN_14028af80(lVar3,0x60);
    }
  }
  return;
}


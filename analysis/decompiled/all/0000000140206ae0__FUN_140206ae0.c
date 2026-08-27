// Function: FUN_140206ae0
// Addr: 140206ae0
// Size: 3034 bytes


void FUN_140206ae0(longlong *param_1)

{
  byte *pbVar1;
  bool bVar2;
  undefined7 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong **pplVar9;
  undefined8 uVar10;
  size_t sVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong **pplVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  char *pcVar20;
  char *pcVar21;
  longlong *local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong *local_a0;
  uint local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  uint local_60;
  
  if (param_1[0x58] != 0) {
    FUN_140150ac0(param_1[0x19] + 0x1630);
    param_1[0x58] = 0;
  }
  if ((*(uint *)((longlong)param_1 + 0x304) >> 4 & 1) == 0) {
    return;
  }
  local_98 = CONCAT31(local_98._1_3_,7);
  local_98 = local_98 & 0xfffffeff;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  plVar7 = (longlong *)FUN_14028af20(0x10);
  *plVar7 = 0;
  plVar7[1] = 0;
  lVar8 = FUN_14028af20(0x58);
  *(longlong *)lVar8 = lVar8;
  *(longlong *)(lVar8 + 8) = lVar8;
  *(longlong *)(lVar8 + 0x10) = lVar8;
  *(undefined2 *)(lVar8 + 0x18) = 0x101;
  *plVar7 = lVar8;
  local_a0 = plVar7;
  pplVar9 = (longlong **)FUN_140086de0(&local_a0,"combos","");
  uVar10 = FUN_140086de0(&local_a0,"combos","");
  iVar6 = *(int *)((longlong)param_1 + 0x32c);
  if ((iVar6 == 0) || (iVar6 == 0x1f)) {
    iVar6 = 0;
  }
  uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
  uVar18 = (uint)uStack_c0 & 0xfffffeff;
  plVar7 = (longlong *)FUN_140086de0(uVar10,"BLENDMODE","");
  lVar8 = plVar7[1];
  *(uint *)(plVar7 + 1) = uVar18;
  uStack_c0 = CONCAT44(uStack_c0._4_4_,(int)lVar8);
  local_c8 = (longlong *)*plVar7;
  *plVar7 = (longlong)iVar6;
  lVar8 = plVar7[2];
  plVar7[2] = 0;
  lStack_b0 = plVar7[3];
  local_a8 = plVar7[4];
  plVar7[3] = 0;
  plVar7[4] = 0;
  local_b8 = lVar8;
  FUN_140086d30(&local_c8);
  if (lVar8 != 0) {
    FUN_140017240(lVar8 + 0x40);
    FUN_140017240(lVar8 + 0x20);
    FUN_140017240(lVar8);
    thunk_FUN_14028af80(lVar8,0x60);
  }
  local_60 = CONCAT31(local_60._1_3_,1);
  plVar7 = (longlong *)FUN_140086de0(uVar10,"FOG_COMPUTED","");
  uVar18 = *(uint *)(plVar7 + 1);
  *(uint *)(plVar7 + 1) = local_60 & 0xfffffeff;
  lVar8 = *plVar7;
  *plVar7 = 1;
  lVar15 = plVar7[2];
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  switch(uVar18 & 0xff) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 5:
    break;
  case 4:
    if ((uVar18 >> 8 & 1) != 0) {
      thunk_FUN_1402d9040(lVar8);
    }
    break;
  case 6:
  case 7:
    if (lVar8 != 0) {
      FUN_140088e40(lVar8);
      thunk_FUN_14028af80(lVar8,0x10);
    }
    break;
  default:
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
  }
  if (lVar15 != 0) {
    FUN_140017240(lVar15 + 0x40);
    FUN_140017240(lVar15 + 0x20);
    FUN_140017240(lVar15);
    thunk_FUN_14028af80(lVar15,0x60);
  }
  uVar18 = *(uint *)(param_1[0x93] + 0x1fc);
  cVar5 = (**(code **)(*param_1 + 0xd0))(param_1);
  if ((cVar5 == '\0') ||
     (bVar2 = true,
     *(longlong *)(*(longlong *)(param_1[0x97] + 0x18) + 0xb0) ==
     *(longlong *)(*(longlong *)(param_1[0x97] + 0x18) + 0xb8))) {
    bVar2 = false;
  }
  pcVar21 = "enabled";
  uStack_c0 = CONCAT71(uStack_c0._1_7_,4);
  pcVar20 = "enabled";
  if (*(char *)(param_1[0x93] + 0x1f2) != '\0') {
    pcVar20 = "disabled";
  }
  sVar11 = strlen(pcVar20);
  uVar17 = sVar11 & 0xffffffff;
  puVar12 = (undefined4 *)_malloc_base(uVar17 + 5);
  if (puVar12 == (undefined4 *)0x0) {
    FUN_140017170(&local_c8,
                  "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                 );
                    /* WARNING: Subroutine does not return */
    FUN_140084bc0(&local_c8);
  }
  *puVar12 = (int)sVar11;
  uVar19 = (uint)uStack_c0 | 0x100;
  FUN_1404210f0(puVar12 + 1,pcVar20,uVar17);
  *(undefined1 *)((longlong)puVar12 + uVar17 + 4) = 0;
  plVar7 = (longlong *)FUN_140086de0(&local_a0,"depthtest","");
  uVar17 = 0;
  lVar8 = plVar7[1];
  *(uint *)(plVar7 + 1) = uVar19;
  uStack_c0 = CONCAT44(uStack_c0._4_4_,(int)lVar8);
  local_c8 = (longlong *)*plVar7;
  *plVar7 = (longlong)puVar12;
  local_b8 = plVar7[2];
  plVar7[2] = 0;
  lStack_b0 = plVar7[3];
  local_a8 = plVar7[4];
  plVar7[3] = 0;
  plVar7[4] = 0;
  FUN_140085440(&local_c8);
  if (*(char *)(param_1[0x93] + 499) != '\0') {
    pcVar21 = "disabled";
  }
  FUN_140084f50(&local_c8,pcVar21);
  uVar10 = FUN_140086de0(&local_a0,"depthwrite","");
  FUN_140085610(uVar10,&local_c8);
  FUN_140085440(&local_c8);
  if ((uVar18 & 0x18) == 0) goto LAB_1402071a4;
  uVar3 = uStack_c0._1_7_;
  uVar4 = uStack_c0._4_4_;
  if (((int)param_1[100] < 1) && ((*(uint *)((longlong)param_1 + 0x304) >> 4 & 1) == 0)) {
    uStack_c0 = CONCAT71(uVar3,1);
    uStack_c0 = CONCAT44(uVar4,(uint)uStack_c0) & 0xfffffffffffffeff;
    local_a8 = 0;
    local_c8 = (longlong *)(ulonglong)((byte)(uVar18 >> 4) & 1);
    local_b8 = 0;
    lStack_b0 = 0;
    uVar10 = FUN_140086de0(pplVar9,"LIGHTING","");
    FUN_140085610(uVar10,&local_c8);
    FUN_140085440(&local_c8);
    uVar13 = uStack_c0;
    uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
    uStack_c0._4_4_ = SUB84(uVar13,4);
    uStack_c0 = CONCAT44(uStack_c0._4_4_,(uint)uStack_c0) & 0xfffffffffffffeff;
    local_a8 = 0;
    local_c8 = (longlong *)(ulonglong)((uVar18 & 8) != 0);
    local_b8 = 0;
    lStack_b0 = 0;
    uVar10 = FUN_140086de0(pplVar9,"REFLECTION","");
    FUN_140085610(uVar10,&local_c8);
    FUN_140085440(&local_c8);
    if ((((uVar18 >> 4 & 1) != 0) && (*(longlong **)(param_1[0x93] + 0x1e0) != (longlong *)0x0)) &&
       (uVar13 = (**(code **)(**(longlong **)(param_1[0x93] + 0x1e0) + 0x20))(),
       (uVar13 & 0x10) != 0)) {
      FUN_140084f50(&local_c8,"genericimage2");
      pcVar21 = "";
      pcVar20 = "shader";
      pplVar16 = &local_a0;
      goto LAB_14020703d;
    }
  }
  else {
    uStack_c0 = CONCAT71(uVar3,1);
    uStack_c0 = CONCAT44(uVar4,(uint)uStack_c0) & 0xfffffffffffffeff;
    local_a8 = 0;
    local_c8 = (longlong *)0x0;
    local_b8 = 0;
    lStack_b0 = 0;
    uVar10 = FUN_140086de0(pplVar9,"LIGHTING","");
    FUN_140085610(uVar10,&local_c8);
    FUN_140085440(&local_c8);
    uVar13 = uStack_c0;
    uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
    uStack_c0._4_4_ = SUB84(uVar13,4);
    uStack_c0 = CONCAT44(uStack_c0._4_4_,(uint)uStack_c0) & 0xfffffffffffffeff;
    pcVar21 = "";
    local_b8 = 0;
    lStack_b0 = 0;
    local_a8 = 0;
    pcVar20 = "REFLECTION";
    local_c8 = (longlong *)0x0;
    pplVar16 = pplVar9;
LAB_14020703d:
    uVar10 = FUN_140086de0(pplVar16,pcVar20,pcVar21);
    FUN_140085610(uVar10,&local_c8);
    FUN_140085440(&local_c8);
  }
  lVar8 = param_1[0x93];
  uVar10 = FUN_140086de0(&local_a0,"constantshadervalues","");
  FUN_140085520(uVar10,lVar8 + 0x248);
  uVar13 = uStack_c0;
  lVar8 = *(longlong *)(param_1[0x93] + 0xd8);
  lVar15 = *(longlong *)(param_1[0x93] + 0xe0);
  if ((lVar8 != 0) || (lVar15 != 0)) {
    uStack_c0 = CONCAT71(uStack_c0._1_7_,6);
    uStack_c0._4_4_ = SUB84(uVar13,4);
    uStack_c0 = CONCAT44(uStack_c0._4_4_,(uint)uStack_c0) & 0xfffffffffffffeff;
    local_b8 = 0;
    lStack_b0 = 0;
    local_a8 = 0;
    plVar7 = (longlong *)FUN_14028af20(0x10);
    *plVar7 = 0;
    plVar7[1] = 0;
    lVar14 = FUN_14028af20(0x58);
    *(longlong *)lVar14 = lVar14;
    *(longlong *)(lVar14 + 8) = lVar14;
    *(longlong *)(lVar14 + 0x10) = lVar14;
    *(undefined2 *)(lVar14 + 0x18) = 0x101;
    *plVar7 = lVar14;
    local_c8 = plVar7;
    if (lVar8 != 0) {
      plVar7 = (longlong *)(lVar8 + 0x78);
      if (0xf < *(ulonglong *)(lVar8 + 0x90)) {
        plVar7 = (longlong *)*plVar7;
      }
      FUN_140084f50(local_68,plVar7);
      uVar10 = FUN_140086540(&local_c8,1);
      FUN_140085610(uVar10,local_68);
      FUN_140085440(local_68);
    }
    if (lVar15 != 0) {
      plVar7 = (longlong *)(lVar15 + 0x78);
      if (0xf < *(ulonglong *)(lVar15 + 0x90)) {
        plVar7 = (longlong *)*plVar7;
      }
      FUN_140084f50(local_68,plVar7);
      uVar10 = FUN_140086540(&local_c8,2);
      FUN_140085610(uVar10,local_68);
      FUN_140085440(local_68);
    }
    uVar10 = FUN_140086de0(&local_a0,"textures","");
    FUN_140085520(uVar10,&local_c8);
    FUN_140085440(&local_c8);
  }
LAB_1402071a4:
  if (cVar5 != '\0') {
    pcVar20 = "normal";
    if (*(char *)(param_1[0x93] + 500) != '\0') {
      pcVar20 = "nocull";
    }
    FUN_140084f50(local_68,pcVar20);
    uVar10 = FUN_140086de0(&local_a0,"cullmode","");
    FUN_140085610(uVar10,local_68);
    FUN_140085440(local_68);
    uVar13 = uStack_c0;
    uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
    uStack_c0._4_4_ = SUB84(uVar13,4);
    uStack_c0 = CONCAT44(uStack_c0._4_4_,(uint)uStack_c0) & 0xfffffffffffffeff;
    local_b8 = 0;
    lStack_b0 = 0;
    local_a8 = 0;
    iVar6 = (**(code **)(*param_1 + 0xd8))(param_1);
    local_c8 = (longlong *)(longlong)iVar6;
    uVar10 = FUN_140086de0(pplVar9,"BONECOUNT","");
    FUN_140085610(uVar10,&local_c8);
    FUN_140085440(&local_c8);
    uVar13 = uStack_c0;
    uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
    uStack_c0._4_4_ = SUB84(uVar13,4);
    uStack_c0 = CONCAT44(uStack_c0._4_4_,(uint)uStack_c0) & 0xfffffffffffffeff;
    local_a8 = 0;
    local_c8 = (longlong *)0x1;
    local_b8 = 0;
    lStack_b0 = 0;
    uVar10 = FUN_140086de0(pplVar9,"SKINNING","");
    FUN_140085610(uVar10,&local_c8);
    FUN_140085440(&local_c8);
    uVar13 = uStack_c0;
    if ((*(uint *)(*(longlong *)(param_1[0x97] + 0x18) + 0x18) >> 2 & 1) != 0) {
      uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
      uStack_c0._4_4_ = SUB84(uVar13,4);
      uStack_c0 = CONCAT44(uStack_c0._4_4_,(uint)uStack_c0) & 0xfffffffffffffeff;
      local_a8 = 0;
      local_c8 = (longlong *)0x1;
      local_b8 = 0;
      lStack_b0 = 0;
      uVar10 = FUN_140086de0(pplVar9,"SKINNING_ALPHA","");
      FUN_140085610(uVar10,&local_c8);
      FUN_140085440(&local_c8);
    }
    uVar13 = uStack_c0;
    if ((*(uint *)(*(longlong *)(param_1[0x97] + 0x18) + 0x38) & 0x10000) != 0) {
      uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
      uStack_c0._4_4_ = SUB84(uVar13,4);
      uStack_c0 = CONCAT44(uStack_c0._4_4_,(uint)uStack_c0) & 0xfffffffffffffeff;
      local_a8 = 0;
      local_c8 = (longlong *)0x1;
      local_b8 = 0;
      lStack_b0 = 0;
      uVar10 = FUN_140086de0(pplVar9,"MORPHING","");
      FUN_140085610(uVar10,&local_c8);
      FUN_140085440(&local_c8);
      plVar7 = (longlong *)(*(longlong *)(param_1[0x97] + 0x418) + 0x78);
      if (0xf < *(ulonglong *)(*(longlong *)(param_1[0x97] + 0x418) + 0x90)) {
        plVar7 = (longlong *)*plVar7;
      }
      FUN_140084f50(local_68,plVar7);
      uVar10 = FUN_140086de0(&local_a0,"textures","");
      uVar10 = FUN_140086540(uVar10,5);
      FUN_140085610(uVar10,local_68);
      FUN_140085440(local_68);
    }
    uVar13 = uStack_c0;
    if (((*(uint *)(*(longlong *)(param_1[0x97] + 0x18) + 0x38) & 0x10000) != 0) &&
       ((*(uint *)(*(longlong *)(param_1[0x97] + 0x18) + 0x18) & 0x2000) != 0)) {
      uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
      uStack_c0._4_4_ = SUB84(uVar13,4);
      uStack_c0 = CONCAT44(uStack_c0._4_4_,(uint)uStack_c0) & 0xfffffffffffffeff;
      local_a8 = 0;
      local_c8 = (longlong *)0x1;
      local_b8 = 0;
      lStack_b0 = 0;
      uVar10 = FUN_140086de0(pplVar9,"MORPHING_MODIFIERS","");
      FUN_140085610(uVar10,&local_c8);
      FUN_140085440(&local_c8);
    }
  }
  uStack_c0 = 0;
  lStack_b0 = 0xf;
  lVar8 = *(longlong *)(param_1[0x93] + 0x1e0);
  uVar13 = 0xcbf29ce484222325;
  local_b8 = 3;
  local_c8 = (longlong *)(ulonglong)(uint3)DAT_14048ee24;
  do {
    pbVar1 = (byte *)((longlong)&local_c8 + uVar17);
    uVar17 = uVar17 + 1;
    uVar13 = (uVar13 ^ *pbVar1) * 0x100000001b3;
  } while (uVar17 < 3);
  lVar15 = FUN_1400110a0(lVar8 + 0x70,&local_78,&local_c8,uVar13);
  lVar15 = *(longlong *)(lVar15 + 8);
  if (lVar15 == 0) {
    lVar15 = *(longlong *)(lVar8 + 0x78);
  }
  if ((lVar15 == *(longlong *)(lVar8 + 0x78)) || (*(int *)(lVar15 + 0x30) == 0)) {
    local_70 = 3;
    local_78 = "FOG";
    FUN_1400878f0(pplVar9,&local_78);
    local_70 = 0xc;
    local_78 = "FOG_COMPUTED";
    FUN_1400878f0(pplVar9,&local_78);
  }
  lVar8 = param_1[0x19];
  uVar10 = FUN_1401ecae0(param_1);
  lVar8 = FUN_140150770(lVar8 + 0x1630,uVar10,&local_a0);
  param_1[0x58] = lVar8;
  lVar8 = param_1[0x97];
  if ((lVar8 != 0) && (*(longlong *)(lVar8 + 8) != 0)) {
    if (*(longlong *)(lVar8 + 0x428) != 0) {
      FUN_140150ac0(param_1[0x19] + 0x1630);
      *(undefined8 *)(param_1[0x97] + 0x428) = 0;
    }
    uVar17 = uStack_c0;
    if ((bVar2) && (*(longlong *)(param_1[0x97] + 0x428) == 0)) {
      uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
      uStack_c0._4_4_ = SUB84(uVar17,4);
      uStack_c0 = CONCAT44(uStack_c0._4_4_,(uint)uStack_c0) & 0xfffffffffffffeff;
      local_a8 = 0;
      local_c8 = (longlong *)0x1;
      local_b8 = 0;
      lStack_b0 = 0;
      uVar10 = FUN_140086de0(pplVar9,"CLIPPINGUVS","");
      FUN_140085610(uVar10,&local_c8);
      FUN_140085440(&local_c8);
      local_b8 = 0;
      FUN_140086ca0(&local_c8,1,0);
      local_c8 = (longlong *)0x1;
      uVar10 = FUN_140086de0(pplVar9,"CLIPPINGTARGET","");
      FUN_140085610(uVar10,&local_c8);
      FUN_140085440(&local_c8);
      plVar7 = (longlong *)(param_1[0x93] + 0x200);
      if (0xf < *(ulonglong *)(param_1[0x93] + 0x218)) {
        plVar7 = (longlong *)*plVar7;
      }
      uVar10 = FUN_140150770(param_1[0x19] + 0x1630,plVar7,&local_a0);
      *(undefined8 *)(param_1[0x97] + 0x428) = uVar10;
    }
  }
  FUN_140085440(&local_a0);
  return;
}


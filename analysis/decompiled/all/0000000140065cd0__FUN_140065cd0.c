// Function: FUN_140065cd0
// Addr: 140065cd0
// Size: 1573 bytes


longlong FUN_140065cd0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                      undefined8 param_5)

{
  size_t _Size;
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong *plVar13;
  undefined8 *_Buf2;
  bool bVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_res8;
  char *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong *local_b8;
  uint local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *local_90;
  uint local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68 [48];
  
  local_b0 = CONCAT31(local_b0._1_3_,7);
  local_b0 = local_b0 & 0xfffffeff;
  lVar10 = 0;
  local_98 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_res8 = param_1;
  plVar3 = (longlong *)FUN_14028af20(0x10);
  *plVar3 = 0;
  plVar3[1] = 0;
  lVar4 = FUN_14028af20(0x58);
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(lVar4 + 8) = lVar4;
  *(longlong *)(lVar4 + 0x10) = lVar4;
  *(undefined2 *)(lVar4 + 0x18) = 0x101;
  *plVar3 = lVar4;
  puVar11 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar11 = (undefined8 *)*param_3;
  }
  local_b8 = plVar3;
  FUN_140063f00(puVar11,param_5,&local_b8);
  plVar3 = DAT_1404e5310;
  plVar13 = DAT_1404e5318;
  if (DAT_1404e5310 != DAT_1404e5318) {
    do {
      if (param_2[2] == 0) {
LAB_140065dc9:
        lVar4 = *plVar3;
        if (lVar4 != 0) {
          FUN_140058130(lVar4);
          thunk_FUN_14028af80(lVar4,0xf0);
          plVar13 = DAT_1404e5318;
        }
        FUN_1404210f0(plVar3,plVar3 + 1,(longlong)plVar13 - (longlong)(plVar3 + 1));
        plVar13 = DAT_1404e5318 + -1;
        DAT_1404e5318 = plVar13;
      }
      else {
        lVar4 = *plVar3;
        puVar11 = (undefined8 *)(lVar4 + 0x10);
        _Buf2 = param_2;
        if (0xf < (ulonglong)param_2[3]) {
          _Buf2 = (undefined8 *)*param_2;
        }
        _Size = *(size_t *)(lVar4 + 0x20);
        if (0xf < *(ulonglong *)(lVar4 + 0x28)) {
          puVar11 = (undefined8 *)*puVar11;
        }
        if ((_Size == param_2[2]) &&
           ((_Size == 0 || (iVar2 = memcmp(puVar11,_Buf2,_Size), iVar2 == 0)))) goto LAB_140065dc9;
        plVar3 = plVar3 + 1;
      }
    } while (plVar3 != plVar13);
  }
  FUN_14005a890(param_2);
  bVar14 = DAT_1404e64b0 != -1;
  if (bVar14) {
    FUN_140068fc0(&DAT_1404e52e0,param_2,&DAT_1404e64b0);
  }
  uVar5 = FUN_140085090(local_68,&local_b8);
  lVar4 = FUN_140072a70(extraout_XMM0_Da,param_2,param_3,param_4,uVar5);
  if (lVar4 == 0) goto LAB_14006625e;
  if (bVar14) {
    FUN_14006a030(extraout_XMM0_Da_00,0);
  }
  FUN_14006e0c0();
  FUN_14006e6d0();
  lVar10 = FUN_140086de0(&DAT_1404e6378,"selectedwallpapers","");
  if (*(char *)(lVar10 + 8) == '\a') {
    uVar5 = FUN_140086de0(&DAT_1404e6378,"selectedwallpapers","");
    FUN_140085090(&local_90,uVar5);
  }
  else {
    local_88 = CONCAT31(local_88._1_3_,7);
    local_88 = local_88 & 0xfffffeff;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    plVar3 = (longlong *)FUN_14028af20(0x10);
    *plVar3 = 0;
    plVar3[1] = 0;
    lVar10 = FUN_14028af20(0x58);
    *(longlong *)lVar10 = lVar10;
    *(longlong *)(lVar10 + 8) = lVar10;
    *(longlong *)(lVar10 + 0x10) = lVar10;
    *(undefined2 *)(lVar10 + 0x18) = 0x101;
    *plVar3 = lVar10;
    local_90 = plVar3;
  }
  puVar11 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar11 = (undefined8 *)*param_2;
  }
  uVar5 = FUN_140086de0(&local_90,puVar11,param_2[2] + (longlong)puVar11);
  uVar12 = *(uint *)(lVar4 + 0xf0);
  uVar6 = (ulonglong)uVar12;
  local_e0 = CONCAT71(local_e0._1_7_,4);
  if (*(ulonglong *)(lVar4 + 0xf8) < 0x10) {
    lVar10 = lVar4 + 0xe0;
  }
  else {
    lVar10 = *(longlong *)(lVar4 + 0xe0);
  }
  puVar7 = (uint *)_malloc_base(uVar6 + 5);
  if (puVar7 == (uint *)0x0) {
    FUN_140017170(&local_e8,
                  "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                 );
                    /* WARNING: Subroutine does not return */
    FUN_140084bc0(&local_e8);
  }
  *puVar7 = uVar12;
  uVar12 = (uint)local_e0 | 0x100;
  FUN_1404210f0(puVar7 + 1,lVar10,uVar6);
  *(undefined1 *)((longlong)puVar7 + uVar6 + 4) = 0;
  plVar3 = (longlong *)FUN_140086de0(uVar5,&DAT_140473b68,&DAT_140473b6c);
  lVar10 = plVar3[1];
  *(uint *)(plVar3 + 1) = uVar12;
  local_e0 = CONCAT44(local_e0._4_4_,(int)lVar10);
  local_e8 = (char *)*plVar3;
  *plVar3 = (longlong)puVar7;
  lVar10 = plVar3[2];
  plVar3[2] = 0;
  local_c8 = plVar3[4];
  local_d0 = plVar3[3];
  plVar3[3] = 0;
  plVar3[4] = 0;
  local_d8 = lVar10;
  FUN_140086d30(&local_e8);
  if (lVar10 != 0) {
    FUN_140017240(lVar10 + 0x40);
    FUN_140017240(lVar10 + 0x20);
    FUN_140017240(lVar10);
    thunk_FUN_14028af80(lVar10,0x60);
  }
  lVar10 = FUN_140086de0(uVar5,"playlist","");
  if ((*(char *)(lVar10 + 8) == '\a') &&
     (lVar8 = FUN_140086de0(lVar10,&DAT_14047491c,&DAT_140474921), *(char *)(lVar8 + 8) == '\x06'))
  {
    uVar9 = FUN_140086de0(lVar10,&DAT_14047491c,&DAT_140474921);
    uVar12 = FUN_1400863a0(uVar9);
    if (uVar12 < 2) goto LAB_140066094;
  }
  else {
LAB_140066094:
    local_e8 = "playlist";
    local_e0 = 8;
    FUN_1400878f0(uVar5,&local_e8);
  }
  lVar10 = FUN_140087490(lVar4 + 0x10,"local","");
  if (lVar10 == 0) {
    lVar10 = FUN_140084ac0();
  }
  if (*(char *)(lVar10 + 8) == '\x05') {
    lVar10 = FUN_140087490(lVar4 + 0x10,"local","");
    if (lVar10 == 0) {
      lVar10 = FUN_140084ac0();
    }
    cVar1 = FUN_140086300(lVar10);
    if (cVar1 != '\0') {
      local_e0 = CONCAT71(local_e0._1_7_,5);
      local_e8 = (char *)CONCAT71(local_e8._1_7_,1);
      plVar3 = (longlong *)FUN_140086de0(uVar5,"local","");
      uVar12 = *(uint *)(plVar3 + 1);
      *(uint *)(plVar3 + 1) = (uint)local_e0 & 0xfffffeff;
      lVar10 = *plVar3;
      *plVar3 = (longlong)local_e8;
      lVar8 = plVar3[2];
      plVar3[2] = 0;
      plVar3[3] = 0;
      plVar3[4] = 0;
      switch(uVar12 & 0xff) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 5:
        break;
      case 4:
        if ((uVar12 >> 8 & 1) != 0) {
          thunk_FUN_1402d9040(lVar10);
        }
        break;
      case 6:
      case 7:
        if (lVar10 != 0) {
          FUN_140088e40(lVar10);
          thunk_FUN_14028af80(lVar10,0x10);
        }
        break;
      default:
        FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434)
        ;
      }
      if (lVar8 != 0) {
        FUN_140017240(lVar8 + 0x40);
        FUN_140017240(lVar8 + 0x20);
        FUN_140017240(lVar8);
        thunk_FUN_14028af80(lVar8,0x60);
      }
    }
  }
  uVar5 = FUN_140086de0(&DAT_1404e6378,"selectedwallpapers","");
  FUN_140085520(uVar5,&local_90);
  FUN_140030de0(&DAT_1404e5328,&local_res8,param_2);
  if (local_res8 != DAT_1404e5330) {
    FUN_1400648c0(local_res8 + 0x38,lVar4 + 0xe0);
  }
  if ((DAT_1404e52e4 >> 0x14 & 1) != 0) {
    FUN_140074da0();
  }
  FUN_140085440(&local_90);
  lVar10 = lVar4;
LAB_14006625e:
  if (7 < (byte)local_b0) {
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    lVar4 = local_a8;
    if (local_a8 != 0) {
      FUN_140017240(local_a8 + 0x40);
      FUN_140017240(lVar4 + 0x20);
      FUN_140017240(lVar4);
      thunk_FUN_14028af80(lVar4,0x60);
    }
    return lVar10;
  }
                    /* WARNING: Could not recover jumptable at 0x000140066271. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar10 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                     *(uint *)(&DAT_14006634c + (ulonglong)(byte)local_b0 * 4)))
                     (IMAGE_DOS_HEADER_140000000.e_magic +
                      *(uint *)(&DAT_14006634c + (ulonglong)(byte)local_b0 * 4));
  return lVar10;
}


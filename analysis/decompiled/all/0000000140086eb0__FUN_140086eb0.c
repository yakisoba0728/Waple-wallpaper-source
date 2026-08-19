// Function: FUN_140086eb0
// Addr: 140086eb0
// Size: 1273 bytes


undefined8 * FUN_140086eb0(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined8 *local_res10;
  undefined8 *puStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong local_78;
  uint local_70;
  undefined1 local_68 [48];
  
  uVar2 = local_a0;
  if (*(char *)(param_1 + 1) == '\0') {
    local_a0 = CONCAT71(local_a0._1_7_,7);
    local_a0._4_4_ = SUB84(uVar2,4);
    local_a0 = CONCAT44(local_a0._4_4_,(undefined4)local_a0) & 0xfffffffffffffeff;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    puVar5 = (undefined8 *)func_0x00014028aff0(0x10);
    return puVar5;
  }
  uVar11 = param_3 - (int)param_2;
  puVar5 = *(undefined8 **)*param_1;
  local_res10 = (undefined8 *)CONCAT44(local_res10._4_4_,uVar11 * 4);
  uVar14 = uVar11 * 4 | 2;
  uVar15 = uVar11 & 0x3fffffff;
  cVar3 = *(char *)((longlong)puVar5[1] + 0x19);
  puVar8 = (undefined8 *)puVar5[1];
  while (cVar3 == '\0') {
    if (puVar8[4] == 0) {
      bVar16 = *(uint *)(puVar8 + 5) < uVar14;
LAB_140087055:
      if (bVar16) goto LAB_140087064;
LAB_14008705c:
      puVar9 = (undefined8 *)*puVar8;
      puVar5 = puVar8;
    }
    else {
      uVar12 = *(uint *)(puVar8 + 5) >> 2;
      uVar13 = uVar12;
      if (uVar15 < uVar12) {
        uVar13 = uVar15;
      }
      if (param_2 == 0) {
        puVar5 = (undefined8 *)
                 func_0x0001402cba34(L"this->cstr_ && other.cstr_",
                                     L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
        return puVar5;
      }
      iVar4 = func_0x0001404210c0(puVar8[4],param_2,uVar13);
      if (-1 < iVar4) {
        if (iVar4 < 1) {
          bVar16 = uVar12 < uVar15;
          goto LAB_140087055;
        }
        goto LAB_14008705c;
      }
LAB_140087064:
      puVar9 = (undefined8 *)puVar8[2];
    }
    puVar8 = puVar9;
    cVar3 = *(char *)((longlong)puVar9 + 0x19);
  }
  if (puVar5 != *(undefined8 **)*param_1) {
    if (puVar5[4] == 0) {
      bVar16 = *(uint *)(puVar5 + 5) == uVar14;
    }
    else {
      uVar13 = *(uint *)(puVar5 + 5) >> 2;
      if (uVar13 != uVar15) goto LAB_1400870d1;
      if (param_2 == 0) {
        puVar5 = (undefined8 *)
                 func_0x0001402cba34(L"this->cstr_ && other.cstr_",
                                     L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x158);
        return puVar5;
      }
      iVar4 = func_0x0001404210c0(puVar5[4],param_2,uVar13);
      bVar16 = iVar4 == 0;
    }
    if (bVar16) {
      return puVar5 + 6;
    }
  }
LAB_1400870d1:
  uVar6 = FUN_140084b90();
  if (param_2 != 0) {
    lVar7 = thunk_FUN_1402da070((uVar11 & 0x3fffffff) + 1);
    if (lVar7 == 0) {
      func_0x000140017240(&puStack_a8,
                          "in Json::Value::duplicateStringValue(): Failed to allocate string value buffer"
                         );
                    /* WARNING: Subroutine does not return */
      FUN_140084c90(&puStack_a8);
    }
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(lVar7,param_2,uVar11 & 0x3fffffff);
  }
  local_78 = param_2;
  local_70 = uVar14;
  uVar17 = func_0x000140085160(local_68,uVar6);
  uVar11 = local_70;
  lVar7 = local_78;
  param_1 = (undefined8 *)*param_1;
  puVar8 = (undefined8 *)*param_1;
  if (*(char *)((longlong)puVar5 + 0x19) == '\0') {
    uVar14 = *(uint *)(puVar5 + 5);
    if (puVar5 == (undefined8 *)*puVar8) {
      if (local_78 == 0) {
        bVar16 = local_70 < uVar14;
LAB_14008723a:
        if (!bVar16) goto LAB_140087352;
      }
      else {
        uVar14 = uVar14 >> 2;
        uVar13 = local_70 >> 2;
        uVar15 = uVar13;
        if (uVar14 < uVar13) {
          uVar15 = uVar14;
        }
        if (puVar5[4] == 0) {
          puVar5 = (undefined8 *)
                   func_0x0001402cba34(L"this->cstr_ && other.cstr_",
                                       L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146
                                      );
          return puVar5;
        }
        iVar4 = func_0x0001404210c0(local_78,puVar5[4],uVar15);
        if (-1 < iVar4) {
          if (0 < iVar4) goto LAB_140087352;
          bVar16 = uVar13 < uVar14;
          goto LAB_14008723a;
        }
      }
LAB_140087245:
      local_a0 = CONCAT44(local_a0._4_4_,1);
      puVar8 = puVar5;
    }
    else {
      if (local_78 == 0) {
        bVar16 = local_70 < uVar14;
LAB_1400872a2:
        if (bVar16) {
LAB_140087314:
          local_res10 = puVar5;
          puVar8 = (undefined8 *)FUN_140089390(&local_res10);
          puVar8 = (undefined8 *)*puVar8;
          cVar3 = func_0x000140089870(extraout_XMM0_Da_01,puVar8 + 4,&local_78);
          if (cVar3 == '\0') goto LAB_140087352;
          if (*(char *)(puVar8[2] + 0x19) == '\0') goto LAB_140087245;
          local_a0 = (ulonglong)local_a0._4_4_ << 0x20;
          goto LAB_140087464;
        }
      }
      else {
        uVar14 = uVar14 >> 2;
        uVar13 = local_70 >> 2;
        uVar15 = uVar13;
        if (uVar14 < uVar13) {
          uVar15 = uVar14;
        }
        if (puVar5[4] == 0) {
          puVar5 = (undefined8 *)
                   func_0x0001402cba34(L"this->cstr_ && other.cstr_",
                                       L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146
                                      );
          return puVar5;
        }
        iVar4 = func_0x0001404210c0(local_78,puVar5[4],uVar15);
        if (iVar4 < 0) goto LAB_140087314;
        uVar17 = extraout_XMM0_Da;
        if (iVar4 < 1) {
          bVar16 = uVar13 < uVar14;
          goto LAB_1400872a2;
        }
      }
      cVar3 = func_0x000140089870(uVar17,puVar5 + 4,&local_78);
      if (cVar3 == '\0') {
        local_a0 = local_a0 & 0xffffffff00000000;
        bVar16 = true;
        goto LAB_140087466;
      }
      local_res10 = puVar5;
      puVar8 = (undefined8 *)FUN_140017670(&local_res10);
      puVar8 = (undefined8 *)*puVar8;
      if (*(char *)((longlong)puVar8 + 0x19) == '\0') {
        cVar3 = func_0x000140089870(extraout_XMM0_Da_00,&local_78,puVar8 + 4);
        if (cVar3 == '\0') goto LAB_140087352;
      }
      if (*(char *)(puVar5[2] + 0x19) == '\0') {
        local_a0 = CONCAT44(local_a0._4_4_,1);
      }
      else {
        local_a0 = (ulonglong)local_a0._4_4_ << 0x20;
        puVar8 = puVar5;
      }
    }
  }
  else {
    if (*(char *)(puVar8[1] + 0x19) == '\0') {
      lVar1 = puVar8[2];
      if (*(longlong *)(lVar1 + 0x20) == 0) {
        bVar16 = *(uint *)(lVar1 + 0x28) < local_70;
LAB_1400871ba:
        if (!bVar16) {
LAB_140087352:
          puVar5 = (undefined8 *)*param_1;
          puVar8 = (undefined8 *)puVar5[1];
          if (*(char *)((longlong)puVar8 + 0x19) == '\0') {
            uVar14 = uVar11 >> 2;
            puVar9 = puVar8;
            do {
              local_res10 = puVar9;
              if (puVar9[4] == 0) {
                bVar16 = *(uint *)(puVar9 + 5) < uVar11;
LAB_1400873c5:
                if (bVar16) goto LAB_1400873d9;
LAB_1400873cc:
                uVar17 = 1;
                puVar10 = (undefined8 *)*puVar9;
                puVar5 = puVar9;
              }
              else {
                uVar13 = *(uint *)(puVar9 + 5) >> 2;
                uVar15 = uVar13;
                if (uVar14 < uVar13) {
                  uVar15 = uVar14;
                }
                if (lVar7 == 0) {
                  puVar5 = (undefined8 *)
                           func_0x0001402cba34(L"this->cstr_ && other.cstr_",
                                               L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp"
                                               ,0x146);
                  return puVar5;
                }
                iVar4 = func_0x0001404210c0(puVar9[4],lVar7,uVar15);
                if (-1 < iVar4) {
                  if (iVar4 < 1) {
                    bVar16 = uVar13 < uVar14;
                    goto LAB_1400873c5;
                  }
                  goto LAB_1400873cc;
                }
LAB_1400873d9:
                puVar10 = (undefined8 *)puVar9[2];
                uVar17 = 0;
              }
              puVar9 = puVar10;
              puVar8 = local_res10;
            } while (*(char *)((longlong)puVar10 + 0x19) == '\0');
          }
          else {
            uVar17 = 0;
          }
          if (*(char *)((longlong)puVar5 + 0x19) == '\0') {
            uVar14 = *(uint *)(puVar5 + 5);
            if (lVar7 == 0) {
LAB_140087444:
              if (uVar14 <= uVar11) {
LAB_14008744d:
                local_a0 = CONCAT44(local_a0._4_4_,2);
                bVar16 = true;
                goto LAB_140087466;
              }
            }
            else {
              uVar11 = uVar11 >> 2;
              uVar14 = uVar14 >> 2;
              uVar15 = uVar11;
              if (uVar14 < uVar11) {
                uVar15 = uVar14;
              }
              if (puVar5[4] == 0) {
                puVar5 = (undefined8 *)
                         func_0x0001402cba34(L"this->cstr_ && other.cstr_",
                                             L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp"
                                             ,0x146);
                return puVar5;
              }
              iVar4 = func_0x0001404210c0(lVar7,puVar5[4],uVar15);
              if (-1 < iVar4) {
                if (iVar4 < 1) goto LAB_140087444;
                goto LAB_14008744d;
              }
            }
          }
          local_a0 = CONCAT44(local_a0._4_4_,uVar17);
          goto LAB_140087464;
        }
      }
      else {
        uVar15 = *(uint *)(lVar1 + 0x28) >> 2;
        uVar13 = local_70 >> 2;
        uVar14 = uVar15;
        if (uVar13 < uVar15) {
          uVar14 = uVar13;
        }
        if (local_78 == 0) {
          puVar5 = (undefined8 *)
                   func_0x0001402cba34(L"this->cstr_ && other.cstr_",
                                       L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146
                                      );
          return puVar5;
        }
        iVar4 = func_0x0001404210c0(*(undefined8 *)(lVar1 + 0x20),local_78,uVar14);
        if (-1 < iVar4) {
          if (iVar4 < 1) {
            bVar16 = uVar15 < uVar13;
            goto LAB_1400871ba;
          }
          goto LAB_140087352;
        }
      }
    }
    local_a0 = (ulonglong)local_a0._4_4_ << 0x20;
    puVar8 = (undefined8 *)puVar8[2];
  }
LAB_140087464:
  bVar16 = false;
  puVar5 = puVar8;
LAB_140087466:
  uVar2 = local_a0;
  if (!bVar16) {
    if (param_1[1] == 0x2e8ba2e8ba2e8ba) {
                    /* WARNING: Subroutine does not return */
      FUN_14003a820();
    }
    uVar6 = *param_1;
    puVar8 = (undefined8 *)func_0x00014028aff0(0x58);
    func_0x000140084cc0(puVar8 + 4,&local_78);
    func_0x000140085160(puVar8 + 6,local_68);
    *puVar8 = uVar6;
    puVar8[1] = uVar6;
    puVar8[2] = uVar6;
    *(undefined2 *)(puVar8 + 3) = 0;
    puStack_a8 = puVar5;
    local_a0 = uVar2;
    puVar5 = (undefined8 *)func_0x0001400372b0(param_1,&puStack_a8,puVar8);
  }
  func_0x000140085510(local_68);
  if ((local_78 != 0) && (((byte)local_70 & 3) == 1)) {
    func_0x0001402bf8e0();
  }
  return puVar5 + 6;
}


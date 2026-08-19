// Function: FUN_140086610
// Addr: 140086610
// Size: 74 bytes


undefined8 * FUN_140086610(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined8 *apuStackX_18 [2];
  undefined8 *puStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong lStack_78;
  uint uStack_70;
  undefined1 auStack_68 [48];
  
  uVar2 = local_a0;
  if (*(char *)(param_1 + 1) == '\0') {
    local_a0 = CONCAT71(local_a0._1_7_,6);
    local_a0._4_4_ = SUB84(uVar2,4);
    local_a0 = CONCAT44(local_a0._4_4_,(undefined4)local_a0) & 0xfffffffffffffeff;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    puVar6 = (undefined8 *)func_0x00014028aff0(0x10);
    return puVar6;
  }
  uVar12 = param_2 >> 2;
  puVar6 = *(undefined8 **)*param_1;
  cVar4 = *(char *)((longlong)puVar6[1] + 0x19);
  puVar8 = (undefined8 *)puVar6[1];
  while (cVar4 == '\0') {
    if (puVar8[4] == 0) {
      bVar15 = *(uint *)(puVar8 + 5) < param_2;
code_r0x00014008678a:
      if (bVar15) goto code_r0x000140086799;
code_r0x000140086791:
      puVar10 = (undefined8 *)*puVar8;
      puVar6 = puVar8;
    }
    else {
      uVar9 = *(uint *)(puVar8 + 5) >> 2;
      func_0x0001402cba34(L"this->cstr_ && other.cstr_",
                          L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
      uVar14 = uVar9;
      if (uVar12 < uVar9) {
        uVar14 = uVar12;
      }
      iVar5 = func_0x0001404210c0(puVar8[4],0,uVar14);
      if (-1 < iVar5) {
        if (iVar5 < 1) {
          bVar15 = uVar9 < uVar12;
          goto code_r0x00014008678a;
        }
        goto code_r0x000140086791;
      }
code_r0x000140086799:
      puVar10 = (undefined8 *)puVar8[2];
    }
    puVar8 = puVar10;
    cVar4 = *(char *)((longlong)puVar10 + 0x19);
  }
  if (puVar6 != *(undefined8 **)*param_1) {
    if (puVar6[4] == 0) {
      bVar15 = *(uint *)(puVar6 + 5) == param_2;
    }
    else {
      uVar14 = *(uint *)(puVar6 + 5) >> 2;
      if (uVar14 != uVar12) goto code_r0x0001400867fe;
      func_0x0001402cba34(L"this->cstr_ && other.cstr_",
                          L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x158);
      iVar5 = func_0x0001404210c0(puVar6[4],0,uVar14);
      bVar15 = iVar5 == 0;
    }
    if (bVar15) {
      return puVar6 + 6;
    }
  }
code_r0x0001400867fe:
  lStack_78 = 0;
  uStack_70 = param_2;
  uVar7 = FUN_140084b90();
  uVar16 = func_0x000140085160(auStack_68,uVar7);
  uVar12 = uStack_70;
  lVar3 = lStack_78;
  param_1 = (undefined8 *)*param_1;
  puVar8 = (undefined8 *)*param_1;
  if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
    uVar14 = *(uint *)(puVar6 + 5);
    if (puVar6 == (undefined8 *)*puVar8) {
      if (lStack_78 == 0) {
        bVar15 = uStack_70 < uVar14;
code_r0x000140086927:
        if (!bVar15) goto code_r0x000140086a3f;
      }
      else {
        uVar14 = uVar14 >> 2;
        uVar13 = uStack_70 >> 2;
        uVar9 = uVar13;
        if (uVar14 < uVar13) {
          uVar9 = uVar14;
        }
        if (puVar6[4] == 0) {
          func_0x0001402cba34(L"this->cstr_ && other.cstr_",
                              L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
        }
        iVar5 = func_0x0001404210c0(lVar3,puVar6[4],uVar9);
        if (-1 < iVar5) {
          if (0 < iVar5) goto code_r0x000140086a3f;
          bVar15 = uVar13 < uVar14;
          goto code_r0x000140086927;
        }
      }
code_r0x000140086932:
      local_a0 = CONCAT44(local_a0._4_4_,1);
      puVar8 = puVar6;
    }
    else {
      if (lStack_78 == 0) {
        bVar15 = uStack_70 < uVar14;
code_r0x00014008698f:
        if (bVar15) {
code_r0x000140086a01:
          apuStackX_18[0] = puVar6;
          puVar8 = (undefined8 *)FUN_140089390(apuStackX_18);
          puVar8 = (undefined8 *)*puVar8;
          cVar4 = func_0x000140089870(extraout_XMM0_Da_01,puVar8 + 4,&lStack_78);
          if (cVar4 == '\0') goto code_r0x000140086a3f;
          if (*(char *)(puVar8[2] + 0x19) == '\0') goto code_r0x000140086932;
          local_a0 = (ulonglong)local_a0._4_4_ << 0x20;
          goto code_r0x000140086b54;
        }
      }
      else {
        uVar14 = uVar14 >> 2;
        uVar13 = uStack_70 >> 2;
        uVar9 = uVar13;
        if (uVar14 < uVar13) {
          uVar9 = uVar14;
        }
        if (puVar6[4] == 0) {
          func_0x0001402cba34(L"this->cstr_ && other.cstr_",
                              L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
        }
        iVar5 = func_0x0001404210c0(lVar3,puVar6[4],uVar9);
        if (iVar5 < 0) goto code_r0x000140086a01;
        uVar16 = extraout_XMM0_Da;
        if (iVar5 < 1) {
          bVar15 = uVar13 < uVar14;
          goto code_r0x00014008698f;
        }
      }
      cVar4 = func_0x000140089870(uVar16,puVar6 + 4,&lStack_78);
      if (cVar4 == '\0') {
        local_a0 = local_a0 & 0xffffffff00000000;
        bVar15 = true;
        goto code_r0x000140086b56;
      }
      apuStackX_18[0] = puVar6;
      puVar8 = (undefined8 *)FUN_140017670(apuStackX_18);
      puVar8 = (undefined8 *)*puVar8;
      if (*(char *)((longlong)puVar8 + 0x19) == '\0') {
        cVar4 = func_0x000140089870(extraout_XMM0_Da_00,&lStack_78,puVar8 + 4);
        if (cVar4 == '\0') goto code_r0x000140086a3f;
      }
      if (*(char *)(puVar6[2] + 0x19) == '\0') {
        local_a0 = CONCAT44(local_a0._4_4_,1);
      }
      else {
        local_a0 = (ulonglong)local_a0._4_4_ << 0x20;
        puVar8 = puVar6;
      }
    }
  }
  else {
    if (*(char *)(puVar8[1] + 0x19) == '\0') {
      lVar1 = puVar8[2];
      if (*(longlong *)(lVar1 + 0x20) == 0) {
        bVar15 = *(uint *)(lVar1 + 0x28) < uStack_70;
code_r0x0001400868a7:
        if (!bVar15) {
code_r0x000140086a3f:
          puVar6 = (undefined8 *)*param_1;
          puVar8 = (undefined8 *)puVar6[1];
          if (*(char *)((longlong)puVar8 + 0x19) == '\0') {
            uVar14 = uVar12 >> 2;
            puVar10 = puVar8;
            do {
              apuStackX_18[0] = puVar10;
              if (puVar10[4] == 0) {
                bVar15 = *(uint *)(puVar10 + 5) < uVar12;
code_r0x000140086ab5:
                if (bVar15) goto code_r0x000140086ac9;
code_r0x000140086abc:
                uVar16 = 1;
                puVar11 = (undefined8 *)*puVar10;
                puVar6 = puVar10;
              }
              else {
                uVar13 = *(uint *)(puVar10 + 5) >> 2;
                uVar9 = uVar13;
                if (uVar14 < uVar13) {
                  uVar9 = uVar14;
                }
                if (lVar3 == 0) {
                  func_0x0001402cba34(L"this->cstr_ && other.cstr_",
                                      L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146)
                  ;
                }
                iVar5 = func_0x0001404210c0(puVar10[4],lVar3,uVar9);
                if (-1 < iVar5) {
                  if (iVar5 < 1) {
                    bVar15 = uVar13 < uVar14;
                    goto code_r0x000140086ab5;
                  }
                  goto code_r0x000140086abc;
                }
code_r0x000140086ac9:
                puVar11 = (undefined8 *)puVar10[2];
                uVar16 = 0;
              }
              puVar10 = puVar11;
              puVar8 = apuStackX_18[0];
            } while (*(char *)((longlong)puVar11 + 0x19) == '\0');
          }
          else {
            uVar16 = 0;
          }
          if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
            uVar14 = *(uint *)(puVar6 + 5);
            if (lVar3 == 0) {
code_r0x000140086b34:
              if (uVar14 <= uVar12) {
code_r0x000140086b3d:
                local_a0 = CONCAT44(local_a0._4_4_,2);
                bVar15 = true;
                goto code_r0x000140086b56;
              }
            }
            else {
              uVar12 = uVar12 >> 2;
              uVar14 = uVar14 >> 2;
              uVar9 = uVar12;
              if (uVar14 < uVar12) {
                uVar9 = uVar14;
              }
              if (puVar6[4] == 0) {
                func_0x0001402cba34(L"this->cstr_ && other.cstr_",
                                    L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
              }
              iVar5 = func_0x0001404210c0(lVar3,puVar6[4],uVar9);
              if (-1 < iVar5) {
                if (iVar5 < 1) goto code_r0x000140086b34;
                goto code_r0x000140086b3d;
              }
            }
          }
          local_a0 = CONCAT44(local_a0._4_4_,uVar16);
          goto code_r0x000140086b54;
        }
      }
      else {
        uVar9 = *(uint *)(lVar1 + 0x28) >> 2;
        uVar13 = uStack_70 >> 2;
        uVar14 = uVar9;
        if (uVar13 < uVar9) {
          uVar14 = uVar13;
        }
        if (lStack_78 == 0) {
          func_0x0001402cba34(L"this->cstr_ && other.cstr_",
                              L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
        }
        iVar5 = func_0x0001404210c0(*(undefined8 *)(lVar1 + 0x20),lVar3,uVar14);
        if (-1 < iVar5) {
          if (iVar5 < 1) {
            bVar15 = uVar9 < uVar13;
            goto code_r0x0001400868a7;
          }
          goto code_r0x000140086a3f;
        }
      }
    }
    local_a0 = (ulonglong)local_a0._4_4_ << 0x20;
    puVar8 = (undefined8 *)puVar8[2];
  }
code_r0x000140086b54:
  bVar15 = false;
  puVar6 = puVar8;
code_r0x000140086b56:
  uVar2 = local_a0;
  if (!bVar15) {
    if (param_1[1] == 0x2e8ba2e8ba2e8ba) {
                    /* WARNING: Subroutine does not return */
      FUN_14003a820();
    }
    uVar7 = *param_1;
    puVar8 = (undefined8 *)func_0x00014028aff0(0x58);
    func_0x000140084cc0(puVar8 + 4,&lStack_78);
    func_0x000140085160(puVar8 + 6,auStack_68);
    *puVar8 = uVar7;
    puVar8[1] = uVar7;
    puVar8[2] = uVar7;
    *(undefined2 *)(puVar8 + 3) = 0;
    puStack_a8 = puVar6;
    local_a0 = uVar2;
    puVar6 = (undefined8 *)func_0x0001400372b0(param_1,&puStack_a8,puVar8);
  }
  func_0x000140085510(auStack_68);
  if ((lStack_78 != 0) && (((byte)uStack_70 & 3) == 1)) {
    func_0x0001402bf8e0();
  }
  return puVar6 + 6;
}


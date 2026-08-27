// Function: FUN_140086de0
// Addr: 140086de0
// Size: 1677 bytes


longlong * FUN_140086de0(undefined8 *param_1,void *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  longlong *plVar16;
  uint uVar17;
  bool bVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_res10;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  void *local_78;
  uint local_70;
  undefined1 local_68 [48];
  
  uVar8 = local_a0;
  if (*(char *)(param_1 + 1) == '\0') {
    local_a0 = CONCAT71(local_a0._1_7_,7);
    local_a0._4_4_ = SUB84(uVar8,4);
    local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0) & 0xfffffffffffffeff;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    plVar3 = (longlong *)FUN_14028af20(0x10);
    *plVar3 = 0;
    plVar3[1] = 0;
    lVar4 = FUN_14028af20(0x58);
    *(longlong *)lVar4 = lVar4;
    *(longlong *)(lVar4 + 8) = lVar4;
    *(longlong *)(lVar4 + 0x10) = lVar4;
    *(undefined2 *)(lVar4 + 0x18) = 0x101;
    *plVar3 = lVar4;
    local_a8 = plVar3;
    FUN_140085610(param_1,&local_a8);
    plVar3 = local_a8;
    switch(local_a0 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if (((uint)local_a0 >> 8 & 1) != 0) {
        thunk_FUN_1402d9040(local_a8);
      }
      break;
    case 6:
    case 7:
      if (local_a8 != (longlong *)0x0) {
        FUN_140088e40(local_a8);
        thunk_FUN_14028af80(plVar3,0x10);
      }
      break;
    default:
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    }
    lVar4 = local_98;
    if (local_98 != 0) {
      FUN_140017240(local_98 + 0x40);
      FUN_140017240(lVar4 + 0x20);
      FUN_140017240(lVar4);
      thunk_FUN_14028af80(lVar4,0x60);
    }
  }
  uVar11 = param_3 - (int)param_2;
  plVar3 = *(longlong **)*param_1;
  local_res10 = (longlong *)CONCAT44(local_res10._4_4_,uVar11 * 4);
  uVar15 = uVar11 * 4 | 2;
  uVar17 = uVar11 & 0x3fffffff;
  cVar1 = *(char *)(plVar3[1] + 0x19);
  plVar16 = (longlong *)plVar3[1];
  while (cVar1 == '\0') {
    if (plVar16[4] == 0) {
      bVar18 = *(uint *)(plVar16 + 5) < uVar15;
LAB_140086f85:
      if (bVar18) goto LAB_140086f94;
LAB_140086f8c:
      plVar9 = (longlong *)*plVar16;
      plVar3 = plVar16;
    }
    else {
      uVar12 = *(uint *)(plVar16 + 5) >> 2;
      uVar13 = uVar12;
      if (uVar17 < uVar12) {
        uVar13 = uVar17;
      }
      if (param_2 == (void *)0x0) {
        FID_conflict__assert
                  (L"this->cstr_ && other.cstr_",
                   L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
      }
      iVar2 = memcmp((void *)plVar16[4],param_2,(ulonglong)uVar13);
      if (-1 < iVar2) {
        if (iVar2 < 1) {
          bVar18 = uVar12 < uVar17;
          goto LAB_140086f85;
        }
        goto LAB_140086f8c;
      }
LAB_140086f94:
      plVar9 = (longlong *)plVar16[2];
    }
    plVar16 = plVar9;
    cVar1 = *(char *)((longlong)plVar9 + 0x19);
  }
  if (plVar3 != *(longlong **)*param_1) {
    if (plVar3[4] == 0) {
      bVar18 = *(uint *)(plVar3 + 5) == uVar15;
    }
    else {
      uVar13 = *(uint *)(plVar3 + 5) >> 2;
      if (uVar13 != uVar17) goto LAB_140087001;
      if (param_2 == (void *)0x0) {
        FID_conflict__assert
                  (L"this->cstr_ && other.cstr_",
                   L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x158);
      }
      iVar2 = memcmp((void *)plVar3[4],param_2,(ulonglong)uVar13);
      bVar18 = iVar2 == 0;
    }
    if (bVar18) {
      return plVar3 + 6;
    }
  }
LAB_140087001:
  uVar5 = FUN_140084ac0();
  if (param_2 == (void *)0x0) {
    local_78 = (void *)0x0;
    local_70 = uVar15;
  }
  else {
    uVar8 = (ulonglong)(uVar11 & 0x3fffffff);
    pvVar6 = (void *)_malloc_base(uVar8 + 1);
    if (pvVar6 == (void *)0x0) {
      FUN_140017170(&local_a8,
                    "in Json::Value::duplicateStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(&local_a8);
    }
    FUN_1404210f0(pvVar6,param_2,uVar8);
    *(undefined1 *)((longlong)pvVar6 + uVar8) = 0;
    local_78 = pvVar6;
    local_70 = (uint)local_res10 | 1;
  }
  FUN_140085090(local_68,uVar5);
  uVar11 = local_70;
  pvVar6 = local_78;
  param_1 = (undefined8 *)*param_1;
  puVar7 = (undefined8 *)*param_1;
  if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
    uVar15 = *(uint *)(plVar3 + 5);
    if (plVar3 == (longlong *)*puVar7) {
      if (local_78 == (void *)0x0) {
        bVar18 = local_70 < uVar15;
LAB_14008716a:
        if (!bVar18) goto LAB_140087282;
      }
      else {
        uVar15 = uVar15 >> 2;
        uVar13 = local_70 >> 2;
        uVar17 = uVar13;
        if (uVar15 < uVar13) {
          uVar17 = uVar15;
        }
        if (plVar3[4] == 0) {
          FID_conflict__assert
                    (L"this->cstr_ && other.cstr_",
                     L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
        }
        iVar2 = memcmp(pvVar6,(void *)plVar3[4],(ulonglong)uVar17);
        if (-1 < iVar2) {
          if (0 < iVar2) goto LAB_140087282;
          bVar18 = uVar13 < uVar15;
          goto LAB_14008716a;
        }
      }
LAB_140087175:
      local_a0 = CONCAT44(local_a0._4_4_,1);
      plVar16 = plVar3;
    }
    else {
      if (local_78 == (void *)0x0) {
        bVar18 = local_70 < uVar15;
LAB_1400871d2:
        if (bVar18) {
LAB_140087244:
          local_res10 = plVar3;
          puVar7 = (undefined8 *)FUN_1400892c0(&local_res10);
          plVar16 = (longlong *)*puVar7;
          cVar1 = FUN_1400897a0(extraout_XMM0_Da_00,plVar16 + 4,&local_78);
          if (cVar1 == '\0') goto LAB_140087282;
          if (*(char *)(plVar16[2] + 0x19) == '\0') goto LAB_140087175;
          local_a0 = local_a0 & 0xffffffff00000000;
          goto LAB_140087394;
        }
      }
      else {
        uVar15 = uVar15 >> 2;
        uVar13 = local_70 >> 2;
        uVar17 = uVar13;
        if (uVar15 < uVar13) {
          uVar17 = uVar15;
        }
        if (plVar3[4] == 0) {
          FID_conflict__assert
                    (L"this->cstr_ && other.cstr_",
                     L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
        }
        iVar2 = memcmp(pvVar6,(void *)plVar3[4],(ulonglong)uVar17);
        if (iVar2 < 0) goto LAB_140087244;
        if (iVar2 < 1) {
          bVar18 = uVar13 < uVar15;
          goto LAB_1400871d2;
        }
      }
      cVar1 = FUN_1400897a0();
      if (cVar1 == '\0') {
        local_a0 = local_a0 & 0xffffffff00000000;
        bVar18 = true;
        goto LAB_140087396;
      }
      local_res10 = plVar3;
      puVar7 = (undefined8 *)FUN_1400175a0(&local_res10);
      plVar16 = (longlong *)*puVar7;
      if ((*(char *)((longlong)plVar16 + 0x19) == '\0') &&
         (cVar1 = FUN_1400897a0(extraout_XMM0_Da,&local_78,plVar16 + 4), cVar1 == '\0'))
      goto LAB_140087282;
      if (*(char *)(plVar3[2] + 0x19) == '\0') {
        local_a0 = CONCAT44(local_a0._4_4_,1);
      }
      else {
        local_a0 = (ulonglong)local_a0._4_4_ << 0x20;
        plVar16 = plVar3;
      }
    }
  }
  else {
    if (*(char *)(puVar7[1] + 0x19) == '\0') {
      lVar4 = puVar7[2];
      if (*(longlong *)(lVar4 + 0x20) == 0) {
        bVar18 = *(uint *)(lVar4 + 0x28) < local_70;
LAB_1400870ea:
        if (!bVar18) {
LAB_140087282:
          plVar3 = (longlong *)*param_1;
          plVar16 = (longlong *)plVar3[1];
          if (*(char *)((longlong)plVar16 + 0x19) == '\0') {
            uVar15 = uVar11 >> 2;
            plVar9 = plVar16;
            do {
              local_res10 = plVar9;
              if (plVar9[4] == 0) {
                bVar18 = *(uint *)(plVar9 + 5) < uVar11;
LAB_1400872f5:
                if (bVar18) goto LAB_140087309;
LAB_1400872fc:
                uVar14 = 1;
                plVar10 = (longlong *)*plVar9;
                plVar3 = plVar9;
              }
              else {
                uVar13 = *(uint *)(plVar9 + 5) >> 2;
                uVar17 = uVar13;
                if (uVar15 < uVar13) {
                  uVar17 = uVar15;
                }
                if (pvVar6 == (void *)0x0) {
                  FID_conflict__assert
                            (L"this->cstr_ && other.cstr_",
                             L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
                }
                iVar2 = memcmp((void *)plVar9[4],pvVar6,(ulonglong)uVar17);
                if (-1 < iVar2) {
                  if (iVar2 < 1) {
                    bVar18 = uVar13 < uVar15;
                    goto LAB_1400872f5;
                  }
                  goto LAB_1400872fc;
                }
LAB_140087309:
                plVar10 = (longlong *)plVar9[2];
                uVar14 = 0;
              }
              plVar9 = plVar10;
              plVar16 = local_res10;
            } while (*(char *)((longlong)plVar10 + 0x19) == '\0');
          }
          else {
            uVar14 = 0;
          }
          if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
            uVar15 = *(uint *)(plVar3 + 5);
            if (pvVar6 == (void *)0x0) {
LAB_140087374:
              if (uVar15 <= uVar11) {
LAB_14008737d:
                local_a0 = CONCAT44(local_a0._4_4_,2);
                bVar18 = true;
                goto LAB_140087396;
              }
            }
            else {
              uVar11 = uVar11 >> 2;
              uVar15 = uVar15 >> 2;
              uVar17 = uVar11;
              if (uVar15 < uVar11) {
                uVar17 = uVar15;
              }
              if (plVar3[4] == 0) {
                FID_conflict__assert
                          (L"this->cstr_ && other.cstr_",
                           L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
              }
              iVar2 = memcmp(pvVar6,(void *)plVar3[4],(ulonglong)uVar17);
              if (-1 < iVar2) {
                if (iVar2 < 1) goto LAB_140087374;
                goto LAB_14008737d;
              }
            }
          }
          local_a0 = CONCAT44((int)(local_a0 >> 0x20),uVar14);
          goto LAB_140087394;
        }
      }
      else {
        uVar17 = *(uint *)(lVar4 + 0x28) >> 2;
        uVar13 = local_70 >> 2;
        uVar15 = uVar17;
        if (uVar13 < uVar17) {
          uVar15 = uVar13;
        }
        if (local_78 == (void *)0x0) {
          FID_conflict__assert
                    (L"this->cstr_ && other.cstr_",
                     L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
        }
        iVar2 = memcmp(*(void **)(lVar4 + 0x20),pvVar6,(ulonglong)uVar15);
        if (-1 < iVar2) {
          if (iVar2 < 1) {
            bVar18 = uVar17 < uVar13;
            goto LAB_1400870ea;
          }
          goto LAB_140087282;
        }
      }
    }
    local_a0 = local_a0 & 0xffffffff00000000;
    plVar16 = (longlong *)puVar7[2];
  }
LAB_140087394:
  bVar18 = false;
  plVar3 = plVar16;
LAB_140087396:
  uVar8 = local_a0;
  if (!bVar18) {
    if (param_1[1] == 0x2e8ba2e8ba2e8ba) {
                    /* WARNING: Subroutine does not return */
      FUN_14003a750();
    }
    uVar5 = *param_1;
    puVar7 = (undefined8 *)FUN_14028af20(0x58);
    FUN_140084bf0(puVar7 + 4,&local_78);
    FUN_140085090(puVar7 + 6,local_68);
    *puVar7 = uVar5;
    puVar7[1] = uVar5;
    puVar7[2] = uVar5;
    *(undefined2 *)(puVar7 + 3) = 0;
    local_a8 = plVar3;
    local_a0 = uVar8;
    plVar3 = (longlong *)FUN_1400371e0(param_1,&local_a8,puVar7);
  }
  FUN_140085440(local_68);
  if ((local_78 != (void *)0x0) && (((byte)local_70 & 3) == 1)) {
    thunk_FUN_1402d9040();
  }
  return plVar3 + 6;
}


// Function: thunk_FUN_140086540
// Addr: 140086b70
// Size: 5 bytes


longlong * thunk_FUN_140086540(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  void *_Buf1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  longlong *plVar15;
  bool bVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *aplStackX_18 [2];
  longlong *plStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  void *pvStack_78;
  uint uStack_70;
  undefined1 auStack_68 [48];
  
  uVar1 = uStack_a0;
  if (*(char *)(param_1 + 1) == '\0') {
    uStack_a0 = CONCAT71(uStack_a0._1_7_,6);
    uStack_a0._4_4_ = SUB84(uVar1,4);
    uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0) & 0xfffffffffffffeff;
    lStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    plVar4 = (longlong *)FUN_14028af20(0x10);
    *plVar4 = 0;
    plVar4[1] = 0;
    lVar5 = FUN_14028af20(0x58);
    *(longlong *)lVar5 = lVar5;
    *(longlong *)(lVar5 + 8) = lVar5;
    *(longlong *)(lVar5 + 0x10) = lVar5;
    *(undefined2 *)(lVar5 + 0x18) = 0x101;
    *plVar4 = lVar5;
    plStack_a8 = plVar4;
    FUN_140085610(param_1,&plStack_a8);
    plVar4 = plStack_a8;
    switch(uStack_a0 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if (((uint)uStack_a0 >> 8 & 1) != 0) {
        thunk_FUN_1402d9040(plStack_a8);
      }
      break;
    case 6:
    case 7:
      if (plStack_a8 != (longlong *)0x0) {
        FUN_140088e40(plStack_a8);
        thunk_FUN_14028af80(plVar4,0x10);
      }
      break;
    default:
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    }
    lVar5 = lStack_98;
    if (lStack_98 != 0) {
      FUN_140017240(lStack_98 + 0x40);
      FUN_140017240(lVar5 + 0x20);
      FUN_140017240(lVar5);
      thunk_FUN_14028af80(lVar5,0x60);
    }
  }
  uVar11 = param_2 >> 2;
  plVar4 = *(longlong **)*param_1;
  cVar2 = *(char *)(plVar4[1] + 0x19);
  plVar15 = (longlong *)plVar4[1];
  while (cVar2 == '\0') {
    if (plVar15[4] == 0) {
      bVar16 = *(uint *)(plVar15 + 5) < param_2;
LAB_1400866ba:
      if (bVar16) goto LAB_1400866c9;
LAB_1400866c1:
      plVar9 = (longlong *)*plVar15;
      plVar4 = plVar15;
    }
    else {
      uVar8 = *(uint *)(plVar15 + 5) >> 2;
      FID_conflict__assert
                (L"this->cstr_ && other.cstr_",
                 L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
      uVar14 = uVar8;
      if (uVar11 < uVar8) {
        uVar14 = uVar11;
      }
      iVar3 = memcmp((void *)plVar15[4],(void *)0x0,(ulonglong)uVar14);
      if (-1 < iVar3) {
        if (iVar3 < 1) {
          bVar16 = uVar8 < uVar11;
          goto LAB_1400866ba;
        }
        goto LAB_1400866c1;
      }
LAB_1400866c9:
      plVar9 = (longlong *)plVar15[2];
    }
    plVar15 = plVar9;
    cVar2 = *(char *)((longlong)plVar9 + 0x19);
  }
  if (plVar4 != *(longlong **)*param_1) {
    if (plVar4[4] == 0) {
      bVar16 = *(uint *)(plVar4 + 5) == param_2;
    }
    else {
      uVar14 = *(uint *)(plVar4 + 5) >> 2;
      if (uVar14 != uVar11) goto LAB_14008672e;
      FID_conflict__assert
                (L"this->cstr_ && other.cstr_",
                 L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x158);
      iVar3 = memcmp((void *)plVar4[4],(void *)0x0,(ulonglong)uVar14);
      bVar16 = iVar3 == 0;
    }
    if (bVar16) {
      return plVar4 + 6;
    }
  }
LAB_14008672e:
  pvStack_78 = (void *)0x0;
  uStack_70 = param_2;
  uVar6 = FUN_140084ac0();
  FUN_140085090(auStack_68,uVar6);
  uVar11 = uStack_70;
  _Buf1 = pvStack_78;
  param_1 = (undefined8 *)*param_1;
  puVar7 = (undefined8 *)*param_1;
  if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    uVar14 = *(uint *)(plVar4 + 5);
    if (plVar4 == (longlong *)*puVar7) {
      if (pvStack_78 == (void *)0x0) {
        bVar16 = uStack_70 < uVar14;
LAB_140086857:
        if (!bVar16) goto LAB_14008696f;
      }
      else {
        uVar14 = uVar14 >> 2;
        uVar12 = uStack_70 >> 2;
        uVar8 = uVar12;
        if (uVar14 < uVar12) {
          uVar8 = uVar14;
        }
        if (plVar4[4] == 0) {
          FID_conflict__assert
                    (L"this->cstr_ && other.cstr_",
                     L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
        }
        iVar3 = memcmp(_Buf1,(void *)plVar4[4],(ulonglong)uVar8);
        if (-1 < iVar3) {
          if (0 < iVar3) goto LAB_14008696f;
          bVar16 = uVar12 < uVar14;
          goto LAB_140086857;
        }
      }
LAB_140086862:
      uStack_a0 = CONCAT44(uStack_a0._4_4_,1);
      plVar15 = plVar4;
    }
    else {
      if (pvStack_78 == (void *)0x0) {
        bVar16 = uStack_70 < uVar14;
LAB_1400868bf:
        if (bVar16) {
LAB_140086931:
          aplStackX_18[0] = plVar4;
          puVar7 = (undefined8 *)FUN_1400892c0(aplStackX_18);
          plVar15 = (longlong *)*puVar7;
          cVar2 = FUN_1400897a0(extraout_XMM0_Da_00,plVar15 + 4,&pvStack_78);
          if (cVar2 == '\0') goto LAB_14008696f;
          if (*(char *)(plVar15[2] + 0x19) == '\0') goto LAB_140086862;
          uStack_a0 = uStack_a0 & 0xffffffff00000000;
          goto LAB_140086a84;
        }
      }
      else {
        uVar14 = uVar14 >> 2;
        uVar12 = uStack_70 >> 2;
        uVar8 = uVar12;
        if (uVar14 < uVar12) {
          uVar8 = uVar14;
        }
        if (plVar4[4] == 0) {
          FID_conflict__assert
                    (L"this->cstr_ && other.cstr_",
                     L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
        }
        iVar3 = memcmp(_Buf1,(void *)plVar4[4],(ulonglong)uVar8);
        if (iVar3 < 0) goto LAB_140086931;
        if (iVar3 < 1) {
          bVar16 = uVar12 < uVar14;
          goto LAB_1400868bf;
        }
      }
      cVar2 = FUN_1400897a0();
      if (cVar2 == '\0') {
        uStack_a0 = uStack_a0 & 0xffffffff00000000;
        bVar16 = true;
        goto LAB_140086a86;
      }
      aplStackX_18[0] = plVar4;
      puVar7 = (undefined8 *)FUN_1400175a0(aplStackX_18);
      plVar15 = (longlong *)*puVar7;
      if ((*(char *)((longlong)plVar15 + 0x19) == '\0') &&
         (cVar2 = FUN_1400897a0(extraout_XMM0_Da,&pvStack_78,plVar15 + 4), cVar2 == '\0'))
      goto LAB_14008696f;
      if (*(char *)(plVar4[2] + 0x19) == '\0') {
        uStack_a0 = CONCAT44(uStack_a0._4_4_,1);
      }
      else {
        uStack_a0 = (ulonglong)uStack_a0._4_4_ << 0x20;
        plVar15 = plVar4;
      }
    }
  }
  else {
    if (*(char *)(puVar7[1] + 0x19) == '\0') {
      lVar5 = puVar7[2];
      if (*(longlong *)(lVar5 + 0x20) == 0) {
        bVar16 = *(uint *)(lVar5 + 0x28) < uStack_70;
LAB_1400867d7:
        if (!bVar16) {
LAB_14008696f:
          plVar4 = (longlong *)*param_1;
          plVar15 = (longlong *)plVar4[1];
          if (*(char *)((longlong)plVar15 + 0x19) == '\0') {
            uVar14 = uVar11 >> 2;
            plVar9 = plVar15;
            do {
              aplStackX_18[0] = plVar9;
              if (plVar9[4] == 0) {
                bVar16 = *(uint *)(plVar9 + 5) < uVar11;
LAB_1400869e5:
                if (bVar16) goto LAB_1400869f9;
LAB_1400869ec:
                uVar13 = 1;
                plVar10 = (longlong *)*plVar9;
                plVar4 = plVar9;
              }
              else {
                uVar12 = *(uint *)(plVar9 + 5) >> 2;
                uVar8 = uVar12;
                if (uVar14 < uVar12) {
                  uVar8 = uVar14;
                }
                if (_Buf1 == (void *)0x0) {
                  FID_conflict__assert
                            (L"this->cstr_ && other.cstr_",
                             L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
                }
                iVar3 = memcmp((void *)plVar9[4],_Buf1,(ulonglong)uVar8);
                if (-1 < iVar3) {
                  if (iVar3 < 1) {
                    bVar16 = uVar12 < uVar14;
                    goto LAB_1400869e5;
                  }
                  goto LAB_1400869ec;
                }
LAB_1400869f9:
                plVar10 = (longlong *)plVar9[2];
                uVar13 = 0;
              }
              plVar9 = plVar10;
              plVar15 = aplStackX_18[0];
            } while (*(char *)((longlong)plVar10 + 0x19) == '\0');
          }
          else {
            uVar13 = 0;
          }
          if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
            uVar14 = *(uint *)(plVar4 + 5);
            if (_Buf1 == (void *)0x0) {
LAB_140086a64:
              if (uVar14 <= uVar11) {
LAB_140086a6d:
                uStack_a0 = CONCAT44(uStack_a0._4_4_,2);
                bVar16 = true;
                goto LAB_140086a86;
              }
            }
            else {
              uVar11 = uVar11 >> 2;
              uVar14 = uVar14 >> 2;
              uVar8 = uVar11;
              if (uVar14 < uVar11) {
                uVar8 = uVar14;
              }
              if (plVar4[4] == 0) {
                FID_conflict__assert
                          (L"this->cstr_ && other.cstr_",
                           L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
              }
              iVar3 = memcmp(_Buf1,(void *)plVar4[4],(ulonglong)uVar8);
              if (-1 < iVar3) {
                if (iVar3 < 1) goto LAB_140086a64;
                goto LAB_140086a6d;
              }
            }
          }
          uStack_a0 = CONCAT44((int)(uStack_a0 >> 0x20),uVar13);
          goto LAB_140086a84;
        }
      }
      else {
        uVar8 = *(uint *)(lVar5 + 0x28) >> 2;
        uVar12 = uStack_70 >> 2;
        uVar14 = uVar8;
        if (uVar12 < uVar8) {
          uVar14 = uVar12;
        }
        if (pvStack_78 == (void *)0x0) {
          FID_conflict__assert
                    (L"this->cstr_ && other.cstr_",
                     L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
        }
        iVar3 = memcmp(*(void **)(lVar5 + 0x20),_Buf1,(ulonglong)uVar14);
        if (-1 < iVar3) {
          if (iVar3 < 1) {
            bVar16 = uVar8 < uVar12;
            goto LAB_1400867d7;
          }
          goto LAB_14008696f;
        }
      }
    }
    uStack_a0 = uStack_a0 & 0xffffffff00000000;
    plVar15 = (longlong *)puVar7[2];
  }
LAB_140086a84:
  bVar16 = false;
  plVar4 = plVar15;
LAB_140086a86:
  uVar1 = uStack_a0;
  if (!bVar16) {
    if (param_1[1] == 0x2e8ba2e8ba2e8ba) {
                    /* WARNING: Subroutine does not return */
      FUN_14003a750();
    }
    uVar6 = *param_1;
    puVar7 = (undefined8 *)FUN_14028af20(0x58);
    FUN_140084bf0(puVar7 + 4,&pvStack_78);
    FUN_140085090(puVar7 + 6,auStack_68);
    *puVar7 = uVar6;
    puVar7[1] = uVar6;
    puVar7[2] = uVar6;
    *(undefined2 *)(puVar7 + 3) = 0;
    plStack_a8 = plVar4;
    uStack_a0 = uVar1;
    plVar4 = (longlong *)FUN_1400371e0(param_1,&plStack_a8,puVar7);
  }
  FUN_140085440(auStack_68);
  if ((pvStack_78 != (void *)0x0) && (((byte)uStack_70 & 3) == 1)) {
    thunk_FUN_1402d9040();
  }
  return plVar4 + 6;
}


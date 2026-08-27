// Function: FUN_140087f40
// Addr: 140087f40
// Size: 1011 bytes


undefined8 FUN_140087f40(longlong *param_1,uint param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  void *_Buf2;
  bool bVar16;
  void *local_68;
  uint local_60;
  undefined8 *local_58;
  undefined4 local_50;
  
  if ((char)param_1[1] != '\x06') {
    return 0;
  }
  plVar1 = (longlong *)*param_1;
  puVar6 = (undefined8 *)*plVar1;
  if (*(char *)((longlong)puVar6[1] + 0x19) == '\0') {
    uVar10 = param_2 >> 2;
    puVar8 = (undefined8 *)puVar6[1];
    do {
      if (puVar8[4] == 0) {
        bVar16 = *(uint *)(puVar8 + 5) < param_2;
LAB_140087fe7:
        if (!bVar16) goto LAB_140087fee;
LAB_140087ff6:
        puVar9 = (undefined8 *)puVar8[2];
      }
      else {
        uVar15 = *(uint *)(puVar8 + 5) >> 2;
        FID_conflict__assert
                  (L"this->cstr_ && other.cstr_",
                   L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
        uVar14 = uVar15;
        if (uVar10 < uVar15) {
          uVar14 = uVar10;
        }
        iVar3 = memcmp((void *)puVar8[4],(void *)0x0,(ulonglong)uVar14);
        if (iVar3 < 0) goto LAB_140087ff6;
        if (iVar3 < 1) {
          bVar16 = uVar15 < uVar10;
          goto LAB_140087fe7;
        }
LAB_140087fee:
        puVar9 = (undefined8 *)*puVar8;
        puVar6 = puVar8;
      }
      puVar8 = puVar9;
    } while (*(char *)((longlong)puVar9 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)puVar6 + 0x19) != '\0') || (param_2 < *(uint *)(puVar6 + 5))) {
    puVar6 = (undefined8 *)*plVar1;
  }
  if (puVar6 == *(undefined8 **)*param_1) {
    uVar4 = 0;
  }
  else {
    if (param_3 != 0) {
      FUN_140085610(param_3,puVar6 + 6);
    }
    iVar3 = FUN_1400863a0(param_1);
    uVar15 = iVar3 - 1;
    uVar14 = param_2;
    uVar10 = local_60;
    while (local_60 = uVar14, local_60 < uVar15) {
      uVar14 = local_60 + 1;
      local_68 = (void *)0x0;
      uVar4 = FUN_140086540(param_1,uVar14);
      plVar1 = (longlong *)*param_1;
      puVar6 = (undefined8 *)*plVar1;
      puVar8 = (undefined8 *)puVar6[1];
      puVar9 = puVar8;
      _Buf2 = local_68;
      uVar10 = local_60;
      if (*(char *)((longlong)puVar8 + 0x19) == '\0') {
        do {
          puVar8 = puVar9;
          if (puVar8[4] == 0) {
            bVar16 = *(uint *)(puVar8 + 5) < uVar10;
LAB_140088110:
            if (!bVar16) goto LAB_140088117;
LAB_140088124:
            puVar9 = (undefined8 *)puVar8[2];
            uVar11 = 0;
          }
          else {
            uVar12 = *(uint *)(puVar8 + 5) >> 2;
            uVar7 = uVar10 >> 2;
            uVar13 = uVar12;
            if (uVar7 < uVar12) {
              uVar13 = uVar7;
            }
            if (_Buf2 == (void *)0x0) {
              FID_conflict__assert
                        (L"this->cstr_ && other.cstr_",
                         L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
              _Buf2 = local_68;
              uVar10 = local_60;
            }
            iVar3 = memcmp((void *)puVar8[4],_Buf2,(ulonglong)uVar13);
            if (iVar3 < 0) goto LAB_140088124;
            if (iVar3 < 1) {
              bVar16 = uVar12 < uVar7;
              goto LAB_140088110;
            }
LAB_140088117:
            uVar11 = 1;
            puVar9 = (undefined8 *)*puVar8;
            puVar6 = puVar8;
          }
        } while (*(char *)((longlong)puVar9 + 0x19) == '\0');
      }
      else {
        uVar11 = 0;
      }
      if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
        if (_Buf2 == (void *)0x0) {
          bVar16 = uVar10 < *(uint *)(puVar6 + 5);
LAB_14008819f:
          if (bVar16) goto LAB_1400881a6;
        }
        else {
          uVar7 = *(uint *)(puVar6 + 5) >> 2;
          uVar10 = uVar10 >> 2;
          uVar13 = uVar10;
          if (uVar7 < uVar10) {
            uVar13 = uVar7;
          }
          if (puVar6[4] == 0) {
            FID_conflict__assert
                      (L"this->cstr_ && other.cstr_",
                       L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
            _Buf2 = local_68;
          }
          iVar3 = memcmp(_Buf2,(void *)puVar6[4],(ulonglong)uVar13);
          if (iVar3 < 0) goto LAB_1400881a6;
          if (iVar3 < 1) {
            bVar16 = uVar10 < uVar7;
            goto LAB_14008819f;
          }
        }
      }
      else {
LAB_1400881a6:
        if (plVar1[1] == 0x2e8ba2e8ba2e8ba) {
                    /* WARNING: Subroutine does not return */
          FUN_14003a750();
        }
        lVar2 = *plVar1;
        plVar5 = (longlong *)FUN_14028af20(0x58);
        FUN_140084bf0(plVar5 + 4,&local_68);
        plVar5[8] = 0;
        FUN_140086ca0(plVar5 + 6,0,0);
        *plVar5 = lVar2;
        plVar5[1] = lVar2;
        plVar5[2] = lVar2;
        *(undefined2 *)(plVar5 + 3) = 0;
        local_58 = puVar8;
        local_50 = uVar11;
        puVar6 = (undefined8 *)FUN_1400371e0(plVar1,&local_58);
      }
      FUN_140085520(puVar6 + 6,uVar4);
      uVar10 = local_60;
      if ((local_68 != (void *)0x0) && (((byte)local_60 & 3) == 1)) {
        thunk_FUN_1402d9040();
        uVar10 = local_60;
      }
    }
    plVar1 = (longlong *)*param_1;
    puVar6 = (undefined8 *)*plVar1;
    local_60 = uVar10;
    if (*(char *)((longlong)puVar6[1] + 0x19) == '\0') {
      uVar10 = uVar15 >> 2;
      puVar8 = (undefined8 *)puVar6[1];
      do {
        if (puVar8[4] == 0) {
          bVar16 = *(uint *)(puVar8 + 5) < uVar15;
LAB_1400882c8:
          if (!bVar16) goto LAB_1400882cf;
LAB_1400882d7:
          puVar9 = (undefined8 *)puVar8[2];
        }
        else {
          uVar13 = *(uint *)(puVar8 + 5) >> 2;
          FID_conflict__assert
                    (L"this->cstr_ && other.cstr_",
                     L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
          uVar14 = uVar13;
          if (uVar10 < uVar13) {
            uVar14 = uVar10;
          }
          iVar3 = memcmp((void *)puVar8[4],(void *)0x0,(ulonglong)uVar14);
          if (iVar3 < 0) goto LAB_1400882d7;
          if (iVar3 < 1) {
            bVar16 = uVar13 < uVar10;
            goto LAB_1400882c8;
          }
LAB_1400882cf:
          puVar9 = (undefined8 *)*puVar8;
          puVar6 = puVar8;
        }
        puVar8 = puVar9;
      } while (*(char *)((longlong)puVar9 + 0x19) == '\0');
    }
    if ((*(char *)((longlong)puVar6 + 0x19) != '\0') || (uVar15 < *(uint *)(puVar6 + 5))) {
      puVar6 = (undefined8 *)*plVar1;
    }
    FUN_140089350(*param_1,puVar6);
    uVar4 = 1;
  }
  return uVar4;
}


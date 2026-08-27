// Function: FUN_1400f1fa0
// Addr: 1400f1fa0
// Size: 1384 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400f1fa0(IUnknownVtbl *param_1,undefined8 param_2,_func_5158 *param_3)

{
  _func_5158 **pp_Var1;
  IUnknownVtbl *pIVar2;
  float fVar3;
  _func_17509 *p_Var4;
  _func_5158 *p_Var5;
  code *pcVar6;
  _func_5157 *p_Var7;
  _func_17503 *p_Var8;
  _func_17484 *p_Var9;
  undefined1 *puVar10;
  int iVar11;
  HRESULT HVar12;
  HMODULE hLibModule;
  LPCWSTR lpCaption;
  LPCWSTR lpText;
  IUnknown *pIVar13;
  IUnknownVtbl *pIVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  byte bVar20;
  undefined4 local_res8 [2];
  undefined1 local_res20 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  ulonglong *local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  _func_5158 **local_c0;
  undefined1 *local_b8;
  IUnknownVtbl *local_b0;
  IUnknownVtbl *local_a8;
  IMFAttributes *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  ulonglong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulonglong local_68;
  longlong local_60 [3];
  ulonglong local_48;
  
  puVar18 = auStack_f8;
  pIVar14 = param_1 + 9;
  local_a8 = pIVar14;
  iVar11 = FUN_140290d80(pIVar14);
  uVar19 = _UNK_140492ca8;
  uVar17 = _DAT_140492ca0;
  if (iVar11 != 0) {
LAB_1400f24ff:
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)((longlong)&param_1[0xc].QueryInterface + 4) == 0x7fffffff) {
    *(undefined4 *)((longlong)&param_1[0xc].QueryInterface + 4) = 0x7ffffffe;
LAB_1400f24f4:
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  puVar10 = auStack_f8;
  if (param_1[3].Release == (_func_5158 *)0x0) {
    local_b8 = local_res20;
    param_1[5].Release = param_3;
    pp_Var1 = &param_1->Release;
    pIVar2 = param_1 + 1;
    local_d8 = &local_80;
    local_c8 = 7;
    local_d0 = 4;
    *pp_Var1 = (_func_5158 *)0x0;
    pIVar2->QueryInterface = (_func_5156 *)0x0;
    local_80 = uVar17;
    uStack_78 = uVar19;
    local_c0 = pp_Var1;
    local_b0 = pIVar2;
    iVar11 = D3D11CreateDevice(0,1,0,0x800);
    if (iVar11 < 0) {
      if (pIVar2->QueryInterface != (_func_5156 *)0x0) {
        (**(code **)(*(longlong *)pIVar2->QueryInterface + 0x10))();
        pIVar2->QueryInterface = (_func_5156 *)0x0;
      }
      if (*pp_Var1 != (_func_5158 *)0x0) {
        (**(code **)(*(longlong *)*pp_Var1 + 0x10))();
        *pp_Var1 = (_func_5158 *)0x0;
      }
    }
    puVar10 = auStack_f8;
    if (*pp_Var1 != (_func_5158 *)0x0) {
      uVar19 = 0;
      local_98 = (longlong *)0x0;
      local_a0 = (IMFAttributes *)0x0;
      local_88 = (longlong *)0x0;
      local_90 = (longlong *)0x0;
      local_res8[0] = 0;
      bVar20 = (byte)(*(uint *)(param_1[3].AddRef + 0x118) >> 0x11) & 1;
      *(byte *)((longlong)&param_1[1].AddRef + 1) = bVar20;
      if (*(char *)&param_1[1].AddRef == '\0') {
        iVar11 = FUN_140290d80(&DAT_1404dfc00);
        if (iVar11 != 0) goto LAB_1400f24ff;
        if (DAT_1404dfc4c == 0x7fffffff) {
          DAT_1404dfc4c = 0x7ffffffe;
          goto LAB_1400f24f4;
        }
        puVar18 = auStack_f8;
        if (DAT_1404e8f79 == '\0') {
          DAT_1404e8f79 = '\x01';
          hLibModule = LoadLibraryW(L"mfplat.dll");
          puVar18 = auStack_f8;
          if (hLibModule == (HMODULE)0x0) {
            DAT_1404e8f78 = '\x01';
            lpCaption = (LPCWSTR)FUN_140097640(&DAT_1404e6d80,local_60,"core_msgboxtitle_error");
            if (7 < *(ulonglong *)(lpCaption + 0xc)) {
              lpCaption = *(LPCWSTR *)lpCaption;
            }
            lpText = (LPCWSTR)FUN_140097640(&DAT_1404e6d80,&local_80,
                                            "core_msgbox_media_feature_pack_missing");
            if (7 < *(ulonglong *)(lpText + 0xc)) {
              lpText = *(LPCWSTR *)lpText;
            }
            MessageBoxW((HWND)0x0,lpText,lpCaption,0x10);
            if (local_68 < 8) {
LAB_1400f21bf:
              local_70 = 0;
              local_80 = local_80 & 0xffffffffffff0000;
              local_68 = 7;
              puVar18 = auStack_f8;
              if (7 < local_48) {
                uVar17 = local_48 * 2 + 2;
                lVar16 = local_60[0];
                if (0xfff < uVar17) {
                  lVar16 = *(longlong *)(local_60[0] + -8);
                  if (0x1f < (local_60[0] - lVar16) - 8U) goto LAB_1400f2217;
                  uVar17 = local_48 * 2 + 0x29;
                }
                thunk_FUN_14028af80(lVar16,uVar17);
                puVar18 = auStack_f8;
              }
              goto LAB_1400f2227;
            }
            uVar17 = local_68 * 2 + 2;
            uVar15 = local_80;
            if (uVar17 < 0x1000) {
LAB_1400f21ba:
              thunk_FUN_14028af80(uVar15,uVar17);
              goto LAB_1400f21bf;
            }
            uVar15 = *(ulonglong *)(local_80 - 8);
            if ((local_80 - uVar15) - 8 < 0x20) {
              uVar17 = local_68 * 2 + 0x29;
              goto LAB_1400f21ba;
            }
LAB_1400f2217:
            pcVar6 = (code *)swi(0x29);
            hLibModule = (HMODULE)(*pcVar6)(5);
            puVar18 = auStack_f0;
          }
          *(undefined8 *)(puVar18 + -8) = 0x1400f2227;
          FreeLibrary(hLibModule);
        }
LAB_1400f2227:
        *(undefined8 *)(puVar18 + -8) = 0x1400f2233;
        FUN_140290ea0(&DAT_1404dfc00);
        puVar10 = puVar18;
        if (DAT_1404e8f78 != '\0') goto LAB_1400f24c2;
        *(undefined8 *)(puVar18 + -8) = 0x1400f2250;
        HVar12 = MFStartup(0x20070,1);
        *(bool *)&param_1[1].AddRef = HVar12 == 0;
        if (-1 < HVar12) goto LAB_1400f2260;
      }
      else {
LAB_1400f2260:
        *(longlong ***)(puVar18 + 0x20) = &local_90;
        *(undefined8 *)(puVar18 + -8) = 0x1400f2285;
        HVar12 = CoCreateInstance((IID *)&DAT_140486148,(LPUNKNOWN)0x0,0x17,(IID *)&DAT_1404871a8,
                                  *(LPVOID **)(puVar18 + 0x20));
        if (-1 < HVar12) {
          *(undefined8 *)(puVar18 + -8) = 0x1400f229c;
          HVar12 = MFCreateAttributes(&local_a0,1);
          if (-1 < HVar12) {
            *(undefined8 *)(puVar18 + -8) = 0x1400f22ae;
            pIVar13 = (IUnknown *)FUN_14028af20(0x18);
            pIVar13->lpVtbl = (IUnknownVtbl *)&PTR_LAB_140487260;
            pIVar13[2].lpVtbl = param_1;
            *(undefined8 *)(puVar18 + -8) = 0x1400f22ce;
            pIVar14 = _aligned_malloc(4,0x20);
            pIVar13[1].lpVtbl = pIVar14;
            *(undefined4 *)&pIVar14->QueryInterface = 0;
            LOCK();
            *(int *)&(pIVar13[1].lpVtbl)->QueryInterface =
                 *(int *)&(pIVar13[1].lpVtbl)->QueryInterface + 1;
            UNLOCK();
            p_Var4 = local_a0->lpVtbl->SetUnknown;
            *(undefined8 *)(puVar18 + -8) = 0x1400f22f4;
            HVar12 = (*p_Var4)(local_a0,(GUID *)&DAT_140486178,pIVar13);
            *(undefined8 *)(puVar18 + -8) = 0x1400f22fe;
            FUN_1400f1bf0(pIVar13);
            pIVar14 = local_a8;
            if (-1 < HVar12) {
              p_Var5 = *pp_Var1;
              pcVar6 = (code *)**(undefined8 **)p_Var5;
              *(undefined8 *)(puVar18 + -8) = 0x1400f2319;
              iVar11 = (*pcVar6)(p_Var5,&DAT_140487198,&local_88);
              pIVar14 = local_a8;
              if (-1 < iVar11) {
                pcVar6 = *(code **)(*local_88 + 0x28);
                *(undefined8 *)(puVar18 + -8) = 0x1400f2330;
                (*pcVar6)(local_88,1);
                pcVar6 = *(code **)(*local_88 + 0x10);
                *(undefined8 *)(puVar18 + -8) = 0x1400f233a;
                (*pcVar6)();
                *(undefined8 *)(puVar18 + -8) = 0x1400f234b;
                iVar11 = MFCreateDXGIDeviceManager(local_res8,&param_1[6].AddRef);
                pIVar14 = local_a8;
                if (-1 < iVar11) {
                  p_Var7 = param_1[6].AddRef;
                  p_Var5 = *pp_Var1;
                  pcVar6 = *(code **)(*(longlong *)p_Var7 + 0x38);
                  *(undefined8 *)(puVar18 + -8) = 0x1400f2367;
                  iVar11 = (*pcVar6)(p_Var7,p_Var5,local_res8[0]);
                  pIVar14 = local_a8;
                  if (-1 < iVar11) {
                    pIVar13 = (IUnknown *)param_1[6].AddRef;
                    p_Var4 = local_a0->lpVtbl->SetUnknown;
                    *(undefined8 *)(puVar18 + -8) = 0x1400f238a;
                    HVar12 = (*p_Var4)(local_a0,(GUID *)&DAT_140486188,pIVar13);
                    pIVar14 = local_a8;
                    if (-1 < HVar12) {
                      p_Var8 = local_a0->lpVtbl->SetUINT32;
                      *(undefined8 *)(puVar18 + -8) = 0x1400f23ac;
                      (*p_Var8)(local_a0,(GUID *)&DAT_140486158,0x57);
                      if (*(char *)((longlong)&param_1[1].AddRef + 1) == '\0') {
                        *(undefined8 *)(puVar18 + -8) = 0x1400f23bc;
                        pIVar13 = (IUnknown *)FUN_14028af20(0x10);
                        pIVar13->lpVtbl = (IUnknownVtbl *)&PTR_FUN_140487280;
                        *(undefined4 *)&pIVar13[1].lpVtbl = 1;
                        p_Var4 = local_a0->lpVtbl->SetUnknown;
                        *(undefined8 *)(puVar18 + -8) = 0x1400f23e8;
                        HVar12 = (*p_Var4)(local_a0,(GUID *)&DAT_140486168,pIVar13);
                        p_Var5 = pIVar13->lpVtbl->Release;
                        *(undefined8 *)(puVar18 + -8) = 0x1400f23f3;
                        (*p_Var5)(pIVar13);
                        pIVar14 = local_a8;
                        if (HVar12 < 0) goto LAB_1400f2481;
                      }
                      pcVar6 = *(code **)(*local_90 + 0x18);
                      *(undefined8 *)(puVar18 + -8) = 0x1400f241b;
                      iVar11 = (*pcVar6)(local_90,(uint)(bVar20 ^ 1) << 2 | 0x12,local_a0,&local_98)
                      ;
                      pIVar14 = local_a8;
                      if (-1 < iVar11) {
                        pcVar6 = *(code **)*local_98;
                        *(undefined8 *)(puVar18 + -8) = 0x1400f2433;
                        iVar11 = (*pcVar6)(local_98,&DAT_140487178,&param_1[3].Release);
                        pIVar14 = local_a8;
                        if (-1 < iVar11) {
                          p_Var5 = param_1[3].Release;
                          uVar19 = 1;
                          pcVar6 = *(code **)(*(longlong *)p_Var5 + 0xe8);
                          *(undefined8 *)(puVar18 + -8) = 0x1400f2449;
                          (*pcVar6)(p_Var5,0);
                          p_Var5 = param_1[3].Release;
                          pcVar6 = *(code **)(*(longlong *)p_Var5 + 0xf8);
                          *(undefined8 *)(puVar18 + -8) = 0x1400f245b;
                          (*pcVar6)(p_Var5,1);
                          pIVar14 = local_a8;
                          if (*(char *)((longlong)&param_1[1].AddRef + 1) != '\0') {
                            p_Var5 = param_1[3].Release;
                            fVar3 = *(float *)(param_1[3].AddRef + 0x2d8);
                            pcVar6 = *(code **)(*(longlong *)p_Var5 + 0x128);
                            *(undefined8 *)(puVar18 + -8) = 0x1400f247d;
                            (*pcVar6)(p_Var5,(double)fVar3);
                            pIVar14 = local_a8;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_1400f2481:
      if (local_98 != (longlong *)0x0) {
        pcVar6 = *(code **)(*local_98 + 0x10);
        *(undefined8 *)(puVar18 + -8) = 0x1400f2490;
        (*pcVar6)();
        local_98 = (longlong *)0x0;
      }
      if (local_a0 != (IMFAttributes *)0x0) {
        p_Var9 = local_a0->lpVtbl->Release;
        *(undefined8 *)(puVar18 + -8) = 0x1400f24a9;
        (*p_Var9)(local_a0);
        local_a0 = (IMFAttributes *)0x0;
      }
      if (local_90 != (longlong *)0x0) {
        pcVar6 = *(code **)(*local_90 + 0x10);
        *(undefined8 *)(puVar18 + -8) = 0x1400f24bc;
        (*pcVar6)();
        local_90 = (longlong *)0x0;
      }
      goto LAB_1400f24c5;
    }
  }
LAB_1400f24c2:
  puVar18 = puVar10;
  uVar19 = 0;
LAB_1400f24c5:
  *(undefined8 *)(puVar18 + -8) = 0x1400f24cd;
  FUN_140290ea0(pIVar14);
  return uVar19;
}


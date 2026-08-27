// Function: FUN_1400878f0
// Addr: 1400878f0
// Size: 1611 bytes


void FUN_1400878f0(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  void *_Buf2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  void *_Buf1;
  longlong *plVar16;
  longlong *plVar17;
  bool bVar18;
  longlong *local_res8;
  
  if ((char)param_1[1] != '\0') {
    _Buf2 = (void *)*param_2;
    uVar1 = *(uint *)(param_2 + 1) * 4;
    uVar14 = *(uint *)(param_2 + 1) & 0x3fffffff;
    param_1 = (longlong *)*param_1;
    plVar12 = (longlong *)*param_1;
    cVar2 = *(char *)(plVar12[1] + 0x19);
    local_res8 = plVar12;
    plVar8 = (longlong *)plVar12[1];
    while (cVar2 == '\0') {
      if (plVar8[4] == 0) {
        bVar18 = *(uint *)(plVar8 + 5) < uVar1;
        _Buf1 = (void *)0x0;
LAB_1400879b9:
        if (bVar18) goto LAB_140087a2d;
LAB_1400879c0:
        if (*(char *)((longlong)local_res8 + 0x19) != '\0') {
          if (_Buf2 == (void *)0x0) {
            bVar18 = uVar1 < *(uint *)(plVar8 + 5);
LAB_140087a19:
            if (!bVar18) goto LAB_140087a25;
          }
          else {
            uVar15 = *(uint *)(plVar8 + 5) >> 2;
            uVar6 = uVar14;
            if (uVar15 < uVar14) {
              uVar6 = uVar15;
            }
            if (_Buf1 == (void *)0x0) {
              FID_conflict__assert
                        (L"this->cstr_ && other.cstr_",
                         L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
            }
            iVar7 = memcmp(_Buf2,(void *)plVar8[4],(ulonglong)uVar6);
            if (-1 < iVar7) {
              if (0 < iVar7) goto LAB_140087a25;
              bVar18 = uVar14 < uVar15;
              goto LAB_140087a19;
            }
          }
          local_res8 = plVar8;
        }
LAB_140087a25:
        plVar16 = (longlong *)*plVar8;
        plVar12 = plVar8;
      }
      else {
        uVar15 = *(uint *)(plVar8 + 5) >> 2;
        uVar6 = uVar15;
        if (uVar14 < uVar15) {
          uVar6 = uVar14;
        }
        if (_Buf2 == (void *)0x0) {
          FID_conflict__assert
                    (L"this->cstr_ && other.cstr_",
                     L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
        }
        _Buf1 = (void *)plVar8[4];
        iVar7 = memcmp(_Buf1,_Buf2,(ulonglong)uVar6);
        if (-1 < iVar7) {
          if (iVar7 < 1) {
            bVar18 = uVar15 < uVar14;
            goto LAB_1400879b9;
          }
          goto LAB_1400879c0;
        }
LAB_140087a2d:
        plVar16 = (longlong *)plVar8[2];
      }
      plVar8 = plVar16;
      cVar2 = *(char *)((longlong)plVar16 + 0x19);
    }
    plVar8 = (longlong *)(*param_1 + 8);
    if (*(char *)((longlong)local_res8 + 0x19) == '\0') {
      plVar8 = local_res8;
    }
    cVar2 = *(char *)(*plVar8 + 0x19);
    plVar8 = (longlong *)*plVar8;
    plVar16 = local_res8;
    while (local_res8 = plVar8, cVar2 == '\0') {
      if (_Buf2 == (void *)0x0) {
        bVar18 = uVar1 < *(uint *)(local_res8 + 5);
LAB_140087ab0:
        if (bVar18) goto LAB_140087ac2;
LAB_140087ab7:
        plVar8 = (longlong *)local_res8[2];
        local_res8 = plVar16;
      }
      else {
        uVar15 = *(uint *)(local_res8 + 5) >> 2;
        uVar6 = uVar14;
        if (uVar15 < uVar14) {
          uVar6 = uVar15;
        }
        if (local_res8[4] == 0) {
          FID_conflict__assert
                    (L"this->cstr_ && other.cstr_",
                     L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
        }
        iVar7 = memcmp(_Buf2,(void *)local_res8[4],(ulonglong)uVar6);
        if (-1 < iVar7) {
          if (iVar7 < 1) {
            bVar18 = uVar14 < uVar15;
            goto LAB_140087ab0;
          }
          goto LAB_140087ab7;
        }
LAB_140087ac2:
        plVar8 = (longlong *)*local_res8;
      }
      cVar2 = *(char *)((longlong)plVar8 + 0x19);
      plVar16 = local_res8;
    }
    puVar3 = (undefined8 *)*param_1;
    if ((plVar12 == (longlong *)*puVar3) && (*(char *)((longlong)plVar16 + 0x19) != '\0')) {
      FUN_1400891b0(param_1,param_1,puVar3[1]);
      puVar3[1] = puVar3;
      *puVar3 = puVar3;
      puVar3[2] = puVar3;
      param_1[1] = 0;
    }
    else {
      while (plVar12 != plVar16) {
        plVar11 = (longlong *)plVar12[2];
        plVar8 = plVar12 + 2;
        if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
          cVar2 = *(char *)(*plVar11 + 0x19);
          plVar13 = plVar11;
          while (cVar2 == '\0') {
            plVar13 = (longlong *)*plVar13;
            cVar2 = *(char *)(*plVar13 + 0x19);
          }
          cVar2 = *(char *)(*plVar11 + 0x19);
          plVar9 = plVar11;
          while (cVar2 == '\0') {
            plVar9 = (longlong *)*plVar9;
            cVar2 = *(char *)(*plVar9 + 0x19);
          }
        }
        else {
          cVar2 = *(char *)(plVar12[1] + 0x19);
          plVar4 = (longlong *)plVar12[1];
          plVar9 = plVar12;
          while ((plVar13 = plVar4, cVar2 == '\0' && (plVar9 == (longlong *)plVar13[2]))) {
            cVar2 = *(char *)(plVar13[1] + 0x19);
            plVar4 = (longlong *)plVar13[1];
            plVar9 = plVar13;
          }
          cVar2 = *(char *)(plVar12[1] + 0x19);
          plVar17 = (longlong *)plVar12[1];
          plVar4 = plVar12;
          while ((plVar9 = plVar17, cVar2 == '\0' && (plVar4 == (longlong *)plVar9[2]))) {
            cVar2 = *(char *)(plVar9[1] + 0x19);
            plVar17 = (longlong *)plVar9[1];
            plVar4 = plVar9;
          }
        }
        plVar10 = plVar12 + 1;
        plVar4 = (longlong *)*plVar12;
        plVar17 = plVar11;
        if (((*(char *)((longlong)plVar4 + 0x19) == '\0') &&
            (plVar17 = plVar4, *(char *)((longlong)plVar11 + 0x19) == '\0')) &&
           (plVar17 = (longlong *)plVar9[2], plVar9 != plVar12)) {
          plVar4[1] = (longlong)plVar9;
          *plVar9 = *plVar12;
          plVar11 = plVar9;
          if (plVar9 != (longlong *)*plVar8) {
            plVar11 = (longlong *)plVar9[1];
            if (*(char *)((longlong)plVar17 + 0x19) == '\0') {
              plVar17[1] = (longlong)plVar11;
            }
            *plVar11 = (longlong)plVar17;
            plVar9[2] = *plVar8;
            *(longlong **)(*plVar8 + 8) = plVar9;
          }
          if (*(longlong **)(*param_1 + 8) == plVar12) {
            *(longlong **)(*param_1 + 8) = plVar9;
          }
          else {
            puVar3 = (undefined8 *)*plVar10;
            if ((longlong *)*puVar3 == plVar12) {
              *puVar3 = plVar9;
            }
            else {
              puVar3[2] = plVar9;
            }
          }
          lVar5 = plVar9[3];
          plVar9[1] = *plVar10;
          *(char *)(plVar9 + 3) = (char)plVar12[3];
          *(char *)(plVar12 + 3) = (char)lVar5;
        }
        else {
          plVar11 = (longlong *)*plVar10;
          if (*(char *)((longlong)plVar17 + 0x19) == '\0') {
            plVar17[1] = (longlong)plVar11;
          }
          if (*(longlong **)(*param_1 + 8) == plVar12) {
            *(longlong **)(*param_1 + 8) = plVar17;
          }
          else if ((longlong *)*plVar11 == plVar12) {
            *plVar11 = (longlong)plVar17;
          }
          else {
            plVar11[2] = (longlong)plVar17;
          }
          if (*(longlong **)*param_1 == plVar12) {
            plVar8 = plVar11;
            if (*(char *)((longlong)plVar17 + 0x19) == '\0') {
              cVar2 = *(char *)(*plVar17 + 0x19);
              plVar8 = plVar17;
              while (cVar2 == '\0') {
                plVar8 = (longlong *)*plVar8;
                cVar2 = *(char *)(*plVar8 + 0x19);
              }
            }
            *(longlong **)*param_1 = plVar8;
          }
          lVar5 = *param_1;
          if (*(longlong **)(lVar5 + 0x10) == plVar12) {
            if (*(char *)((longlong)plVar17 + 0x19) == '\0') {
              cVar2 = *(char *)(plVar17[2] + 0x19);
              plVar8 = plVar17;
              while (cVar2 == '\0') {
                plVar8 = (longlong *)plVar8[2];
                cVar2 = *(char *)(plVar8[2] + 0x19);
              }
              *(longlong **)(lVar5 + 0x10) = plVar8;
            }
            else {
              *(longlong **)(lVar5 + 0x10) = plVar11;
            }
          }
        }
        if ((char)plVar12[3] == '\x01') {
          if (plVar17 != *(longlong **)(*param_1 + 8)) {
            do {
              plVar8 = plVar11;
              if ((char)plVar17[3] != '\x01') break;
              plVar11 = (longlong *)*plVar8;
              if (plVar17 == plVar11) {
                plVar11 = (longlong *)plVar8[2];
                if ((char)plVar11[3] == '\0') {
                  *(undefined1 *)(plVar11 + 3) = 1;
                  plVar9 = (longlong *)plVar8[2];
                  *(undefined1 *)(plVar8 + 3) = 0;
                  plVar8[2] = *plVar9;
                  if (*(char *)(*plVar9 + 0x19) == '\0') {
                    *(longlong **)(*plVar9 + 8) = plVar8;
                  }
                  plVar9[1] = plVar8[1];
                  if (plVar8 == *(longlong **)(*param_1 + 8)) {
                    *(longlong **)(*param_1 + 8) = plVar9;
                  }
                  else {
                    puVar3 = (undefined8 *)plVar8[1];
                    if (plVar8 == (longlong *)*puVar3) {
                      *puVar3 = plVar9;
                    }
                    else {
                      puVar3[2] = plVar9;
                    }
                  }
                  *plVar9 = (longlong)plVar8;
                  plVar11 = (longlong *)plVar8[2];
                  plVar8[1] = (longlong)plVar9;
                }
                if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
                  if ((*(char *)(*plVar11 + 0x18) != '\x01') ||
                     (*(char *)(plVar11[2] + 0x18) != '\x01')) {
                    if (*(char *)(plVar11[2] + 0x18) == '\x01') {
                      *(undefined1 *)(*plVar11 + 0x18) = 1;
                      *(undefined1 *)(plVar11 + 3) = 0;
                      FUN_140089910(param_1);
                      plVar11 = (longlong *)plVar8[2];
                    }
                    *(char *)(plVar11 + 3) = (char)plVar8[3];
                    *(undefined1 *)(plVar8 + 3) = 1;
                    *(undefined1 *)(plVar11[2] + 0x18) = 1;
                    FUN_140089970(param_1,plVar8);
                    break;
                  }
LAB_140087e53:
                  *(undefined1 *)(plVar11 + 3) = 0;
                }
              }
              else {
                if ((char)plVar11[3] == '\0') {
                  *(undefined1 *)(plVar11 + 3) = 1;
                  lVar5 = *plVar8;
                  *(undefined1 *)(plVar8 + 3) = 0;
                  *plVar8 = *(longlong *)(lVar5 + 0x10);
                  if (*(char *)(*(longlong *)(lVar5 + 0x10) + 0x19) == '\0') {
                    *(longlong **)(*(longlong *)(lVar5 + 0x10) + 8) = plVar8;
                  }
                  *(longlong *)(lVar5 + 8) = plVar8[1];
                  if (plVar8 == *(longlong **)(*param_1 + 8)) {
                    *(longlong *)(*param_1 + 8) = lVar5;
                  }
                  else {
                    plVar11 = (longlong *)plVar8[1];
                    if (plVar8 == (longlong *)plVar11[2]) {
                      plVar11[2] = lVar5;
                    }
                    else {
                      *plVar11 = lVar5;
                    }
                  }
                  *(longlong **)(lVar5 + 0x10) = plVar8;
                  plVar11 = (longlong *)*plVar8;
                  plVar8[1] = lVar5;
                }
                if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
                  if ((*(char *)(plVar11[2] + 0x18) == '\x01') &&
                     (*(char *)(*plVar11 + 0x18) == '\x01')) goto LAB_140087e53;
                  if (*(char *)(*plVar11 + 0x18) == '\x01') {
                    *(undefined1 *)(plVar11[2] + 0x18) = 1;
                    *(undefined1 *)(plVar11 + 3) = 0;
                    FUN_140089970(param_1);
                    plVar11 = (longlong *)*plVar8;
                  }
                  *(char *)(plVar11 + 3) = (char)plVar8[3];
                  *(undefined1 *)(plVar8 + 3) = 1;
                  *(undefined1 *)(*plVar11 + 0x18) = 1;
                  FUN_140089910(param_1,plVar8);
                  break;
                }
              }
              plVar11 = (longlong *)plVar8[1];
              plVar17 = plVar8;
            } while (plVar8 != *(longlong **)(*param_1 + 8));
          }
          *(undefined1 *)(plVar17 + 3) = 1;
        }
        if (param_1[1] != 0) {
          param_1[1] = param_1[1] + -1;
        }
        FUN_140086d30(plVar12 + 6);
        plVar12[6] = 0;
        if (plVar12[8] != 0) {
          FUN_140089280();
        }
        if ((plVar12[4] != 0) && (((byte)(int)plVar12[5] & 3) == 1)) {
          thunk_FUN_1402d9040();
        }
        thunk_FUN_14028af80(plVar12,0x58);
        plVar12 = plVar13;
      }
    }
  }
  return;
}


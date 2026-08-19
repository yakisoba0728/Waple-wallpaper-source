// Function: FUN_1400879c0
// Addr: 1400879c0
// Size: 1442 bytes


void FUN_1400879c0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
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
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  bool bVar19;
  longlong *local_res8;
  
  if ((char)param_1[1] != '\0') {
    lVar3 = *param_2;
    uVar1 = *(uint *)(param_2 + 1) * 4;
    uVar14 = *(uint *)(param_2 + 1) & 0x3fffffff;
    param_1 = (longlong *)*param_1;
    plVar12 = (longlong *)*param_1;
    cVar2 = *(char *)(plVar12[1] + 0x19);
    local_res8 = plVar12;
    plVar8 = (longlong *)plVar12[1];
    while (cVar2 == '\0') {
      if (plVar8[4] == 0) {
        bVar19 = *(uint *)(plVar8 + 5) < uVar1;
        lVar16 = 0;
LAB_140087a89:
        if (bVar19) goto LAB_140087afd;
LAB_140087a90:
        if (*(char *)((longlong)local_res8 + 0x19) != '\0') {
          if (lVar3 == 0) {
            bVar19 = uVar1 < *(uint *)(plVar8 + 5);
LAB_140087ae9:
            if (!bVar19) goto LAB_140087af5;
          }
          else {
            uVar15 = *(uint *)(plVar8 + 5) >> 2;
            uVar6 = uVar14;
            if (uVar15 < uVar14) {
              uVar6 = uVar15;
            }
            if (lVar16 == 0) {
              func_0x0001402cba34(L"this->cstr_ && other.cstr_",
                                  L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
              return;
            }
            iVar7 = func_0x0001404210c0(lVar3,plVar8[4],uVar6);
            if (-1 < iVar7) {
              if (0 < iVar7) goto LAB_140087af5;
              bVar19 = uVar14 < uVar15;
              goto LAB_140087ae9;
            }
          }
          local_res8 = plVar8;
        }
LAB_140087af5:
        plVar17 = (longlong *)*plVar8;
        plVar12 = plVar8;
      }
      else {
        uVar15 = *(uint *)(plVar8 + 5) >> 2;
        uVar6 = uVar15;
        if (uVar14 < uVar15) {
          uVar6 = uVar14;
        }
        if (lVar3 == 0) {
          func_0x0001402cba34(L"this->cstr_ && other.cstr_",
                              L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
          return;
        }
        lVar16 = plVar8[4];
        iVar7 = func_0x0001404210c0(lVar16,lVar3,uVar6);
        if (-1 < iVar7) {
          if (iVar7 < 1) {
            bVar19 = uVar15 < uVar14;
            goto LAB_140087a89;
          }
          goto LAB_140087a90;
        }
LAB_140087afd:
        plVar17 = (longlong *)plVar8[2];
      }
      plVar8 = plVar17;
      cVar2 = *(char *)((longlong)plVar17 + 0x19);
    }
    plVar8 = (longlong *)(*param_1 + 8);
    if (*(char *)((longlong)local_res8 + 0x19) == '\0') {
      plVar8 = local_res8;
    }
    cVar2 = *(char *)(*plVar8 + 0x19);
    plVar8 = (longlong *)*plVar8;
    plVar17 = local_res8;
    while (local_res8 = plVar8, cVar2 == '\0') {
      if (lVar3 == 0) {
        bVar19 = uVar1 < *(uint *)(local_res8 + 5);
LAB_140087b80:
        if (bVar19) goto LAB_140087b92;
LAB_140087b87:
        plVar8 = (longlong *)local_res8[2];
        local_res8 = plVar17;
      }
      else {
        uVar15 = *(uint *)(local_res8 + 5) >> 2;
        uVar6 = uVar14;
        if (uVar15 < uVar14) {
          uVar6 = uVar15;
        }
        if (local_res8[4] == 0) {
          func_0x0001402cba34(L"this->cstr_ && other.cstr_",
                              L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
          return;
        }
        iVar7 = func_0x0001404210c0(lVar3,local_res8[4],uVar6);
        if (-1 < iVar7) {
          if (iVar7 < 1) {
            bVar19 = uVar14 < uVar15;
            goto LAB_140087b80;
          }
          goto LAB_140087b87;
        }
LAB_140087b92:
        plVar8 = (longlong *)*local_res8;
      }
      cVar2 = *(char *)((longlong)plVar8 + 0x19);
      plVar17 = local_res8;
    }
    puVar4 = (undefined8 *)*param_1;
    if ((plVar12 == (longlong *)*puVar4) && (*(char *)((longlong)plVar17 + 0x19) != '\0')) {
      func_0x000140089280(param_1,param_1,puVar4[1]);
      puVar4[1] = puVar4;
      *puVar4 = puVar4;
      puVar4[2] = puVar4;
      param_1[1] = 0;
    }
    else {
      while (plVar12 != plVar17) {
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
          plVar5 = (longlong *)plVar12[1];
          plVar9 = plVar12;
          while ((plVar13 = plVar5, cVar2 == '\0' && (plVar9 == (longlong *)plVar13[2]))) {
            cVar2 = *(char *)(plVar13[1] + 0x19);
            plVar5 = (longlong *)plVar13[1];
            plVar9 = plVar13;
          }
          cVar2 = *(char *)(plVar12[1] + 0x19);
          plVar18 = (longlong *)plVar12[1];
          plVar5 = plVar12;
          while ((plVar9 = plVar18, cVar2 == '\0' && (plVar5 == (longlong *)plVar9[2]))) {
            cVar2 = *(char *)(plVar9[1] + 0x19);
            plVar18 = (longlong *)plVar9[1];
            plVar5 = plVar9;
          }
        }
        plVar10 = plVar12 + 1;
        plVar5 = (longlong *)*plVar12;
        plVar18 = plVar11;
        if (((*(char *)((longlong)plVar5 + 0x19) == '\0') &&
            (plVar18 = plVar5, *(char *)((longlong)plVar11 + 0x19) == '\0')) &&
           (plVar18 = (longlong *)plVar9[2], plVar9 != plVar12)) {
          plVar5[1] = (longlong)plVar9;
          *plVar9 = *plVar12;
          plVar11 = plVar9;
          if (plVar9 != (longlong *)*plVar8) {
            plVar11 = (longlong *)plVar9[1];
            if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
              plVar18[1] = (longlong)plVar11;
            }
            *plVar11 = (longlong)plVar18;
            plVar9[2] = *plVar8;
            *(longlong **)(*plVar8 + 8) = plVar9;
          }
          if (*(longlong **)(*param_1 + 8) == plVar12) {
            *(longlong **)(*param_1 + 8) = plVar9;
          }
          else {
            puVar4 = (undefined8 *)*plVar10;
            if ((longlong *)*puVar4 == plVar12) {
              *puVar4 = plVar9;
            }
            else {
              puVar4[2] = plVar9;
            }
          }
          lVar3 = plVar9[3];
          plVar9[1] = *plVar10;
          *(char *)(plVar9 + 3) = (char)plVar12[3];
          *(char *)(plVar12 + 3) = (char)lVar3;
        }
        else {
          plVar11 = (longlong *)*plVar10;
          if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
            plVar18[1] = (longlong)plVar11;
          }
          if (*(longlong **)(*param_1 + 8) == plVar12) {
            *(longlong **)(*param_1 + 8) = plVar18;
          }
          else if ((longlong *)*plVar11 == plVar12) {
            *plVar11 = (longlong)plVar18;
          }
          else {
            plVar11[2] = (longlong)plVar18;
          }
          if (*(longlong **)*param_1 == plVar12) {
            plVar8 = plVar11;
            if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
              cVar2 = *(char *)(*plVar18 + 0x19);
              plVar8 = plVar18;
              while (cVar2 == '\0') {
                plVar8 = (longlong *)*plVar8;
                cVar2 = *(char *)(*plVar8 + 0x19);
              }
            }
            *(longlong **)*param_1 = plVar8;
          }
          lVar3 = *param_1;
          if (*(longlong **)(lVar3 + 0x10) == plVar12) {
            if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
              cVar2 = *(char *)(plVar18[2] + 0x19);
              plVar8 = plVar18;
              while (cVar2 == '\0') {
                plVar8 = (longlong *)plVar8[2];
                cVar2 = *(char *)(plVar8[2] + 0x19);
              }
              *(longlong **)(lVar3 + 0x10) = plVar8;
            }
            else {
              *(longlong **)(lVar3 + 0x10) = plVar11;
            }
          }
        }
        if ((char)plVar12[3] == '\x01') {
          if (plVar18 != *(longlong **)(*param_1 + 8)) {
            do {
              plVar8 = plVar11;
              if ((char)plVar18[3] != '\x01') break;
              plVar11 = (longlong *)*plVar8;
              if (plVar18 == plVar11) {
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
                    puVar4 = (undefined8 *)plVar8[1];
                    if (plVar8 == (longlong *)*puVar4) {
                      *puVar4 = plVar9;
                    }
                    else {
                      puVar4[2] = plVar9;
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
                      FUN_1400899e0(param_1);
                      plVar11 = (longlong *)plVar8[2];
                    }
                    *(char *)(plVar11 + 3) = (char)plVar8[3];
                    *(undefined1 *)(plVar8 + 3) = 1;
                    *(undefined1 *)(plVar11[2] + 0x18) = 1;
                    func_0x000140089a40(param_1,plVar8);
                    break;
                  }
LAB_140087f23:
                  *(undefined1 *)(plVar11 + 3) = 0;
                }
              }
              else {
                if ((char)plVar11[3] == '\0') {
                  *(undefined1 *)(plVar11 + 3) = 1;
                  lVar3 = *plVar8;
                  *(undefined1 *)(plVar8 + 3) = 0;
                  *plVar8 = *(longlong *)(lVar3 + 0x10);
                  if (*(char *)(*(longlong *)(lVar3 + 0x10) + 0x19) == '\0') {
                    *(longlong **)(*(longlong *)(lVar3 + 0x10) + 8) = plVar8;
                  }
                  *(longlong *)(lVar3 + 8) = plVar8[1];
                  if (plVar8 == *(longlong **)(*param_1 + 8)) {
                    *(longlong *)(*param_1 + 8) = lVar3;
                  }
                  else {
                    plVar11 = (longlong *)plVar8[1];
                    if (plVar8 == (longlong *)plVar11[2]) {
                      plVar11[2] = lVar3;
                    }
                    else {
                      *plVar11 = lVar3;
                    }
                  }
                  *(longlong **)(lVar3 + 0x10) = plVar8;
                  plVar11 = (longlong *)*plVar8;
                  plVar8[1] = lVar3;
                }
                if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
                  if ((*(char *)(plVar11[2] + 0x18) == '\x01') &&
                     (*(char *)(*plVar11 + 0x18) == '\x01')) goto LAB_140087f23;
                  if (*(char *)(*plVar11 + 0x18) == '\x01') {
                    *(undefined1 *)(plVar11[2] + 0x18) = 1;
                    *(undefined1 *)(plVar11 + 3) = 0;
                    func_0x000140089a40(param_1);
                    plVar11 = (longlong *)*plVar8;
                  }
                  *(char *)(plVar11 + 3) = (char)plVar8[3];
                  *(undefined1 *)(plVar8 + 3) = 1;
                  *(undefined1 *)(*plVar11 + 0x18) = 1;
                  FUN_1400899e0(param_1,plVar8);
                  break;
                }
              }
              plVar11 = (longlong *)plVar8[1];
              plVar18 = plVar8;
            } while (plVar8 != *(longlong **)(*param_1 + 8));
          }
          *(undefined1 *)(plVar18 + 3) = 1;
        }
        if (param_1[1] != 0) {
          param_1[1] = param_1[1] + -1;
        }
        func_0x000140086e00(plVar12 + 6);
        plVar12[6] = 0;
        if (plVar12[8] != 0) {
          FUN_140089350();
        }
        if ((plVar12[4] != 0) && (((byte)(int)plVar12[5] & 3) == 1)) {
          func_0x0001402bf8e0();
        }
        func_0x00014028b040(plVar12,0x58);
        plVar12 = plVar13;
      }
    }
  }
  return;
}


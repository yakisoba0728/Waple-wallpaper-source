// Function: FUN_140122b90
// Addr: 140122b90
// Size: 1447 bytes


undefined8 FUN_140122b90(longlong param_1,longlong *param_2)

{
  char cVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  bool bVar16;
  uint local_res18 [2];
  int local_res20;
  undefined4 uStackX_24;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  short local_90 [4];
  undefined8 *local_88;
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined1 local_60 [32];
  
  plVar9 = (longlong *)0x0;
  local_98 = (longlong *)0x0;
  iVar4 = (**(code **)(*param_2 + 0x120))(param_2,local_90);
  if (-1 < iVar4) {
    if (local_90[0] == 0xd) {
      iVar4 = (**(code **)*local_88)(local_88,&DAT_140489f40,&local_98);
      PropVariantClear((PROPVARIANT *)local_90);
      plVar7 = local_98;
      if (-1 < iVar4) {
        cVar1 = *(char *)(param_1 + 0x35);
        local_68 = (longlong *)0x0;
        if ((*(char *)(param_1 + 0x34) == '\0') || ((*(byte *)(param_1 + 0xd0) & 1) != 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        local_78 = *(undefined8 *)(param_1 + 0xa8);
        local_70 = *(undefined8 *)(param_1 + 0x98);
        local_a0 = local_98;
        local_c0 = (longlong *)0x0;
        local_res18[0] = 0;
        iVar4 = MFCreateTopology(&local_c0);
        plVar13 = plVar9;
        if (-1 < iVar4) {
          if ((cVar1 != '\0') &&
             (iVar4 = (**(code **)*local_c0)(local_c0,&DAT_140489f50,&local_res20), -1 < iVar4)) {
            (**(code **)(*(longlong *)CONCAT44(uStackX_24,local_res20) + 0xa8))
                      ((longlong *)CONCAT44(uStackX_24,local_res20),&DAT_1404742e8,1);
            (**(code **)(*(longlong *)CONCAT44(uStackX_24,local_res20) + 0x10))();
          }
          iVar4 = (**(code **)(*plVar7 + 0x108))(plVar7,local_res18);
          plVar13 = (longlong *)0x0;
          if (-1 < iVar4) {
            if (local_res18[0] != 0) {
              do {
                local_a8 = (longlong *)0x0;
                local_d8 = (longlong *)0x0;
                local_res20 = 0;
                bVar16 = false;
                iVar5 = (**(code **)(*plVar7 + 0x110))(plVar7,plVar9,&local_res20,&local_a8);
                if ((((-1 < iVar5) && (local_res20 != 0)) &&
                    (iVar5 = (**(code **)(*local_a8 + 0x110))(local_a8,&local_d8), -1 < iVar5)) &&
                   (iVar5 = (**(code **)(*local_d8 + 0x40))(local_d8,local_90), -1 < iVar5)) {
                  iVar5 = memcmp(&DAT_14042c320,local_90,0x10);
                  bVar16 = iVar5 == 0;
                }
                if (local_d8 != (longlong *)0x0) {
                  (**(code **)(*local_d8 + 0x10))();
                  local_d8 = (longlong *)0x0;
                }
                if (local_a8 != (longlong *)0x0) {
                  (**(code **)(*local_a8 + 0x10))();
                }
                plVar13 = local_c0;
                if ((bVar2) || (!bVar16)) {
                  plVar8 = (longlong *)0x0;
                  local_d8 = (longlong *)0x0;
                  plVar11 = (longlong *)0x0;
                  plVar6 = (longlong *)0x0;
                  plVar14 = (longlong *)0x0;
                  local_res20 = 0;
                  iVar4 = (**(code **)(*local_a0 + 0x110))(local_a0,plVar9,&local_res20,&local_d8);
                  plVar7 = plVar8;
                  plVar12 = plVar8;
                  plVar15 = plVar8;
                  if ((-1 < iVar4) &&
                     (plVar7 = plVar6, plVar12 = plVar11, plVar15 = plVar14, local_res20 != 0)) {
                    local_b0 = (longlong *)0x0;
                    local_b8 = (longlong *)0x0;
                    iVar4 = (**(code **)(*local_d8 + 0x110))(local_d8,&local_b0);
                    plVar12 = plVar8;
                    if (-1 < iVar4) {
                      iVar4 = (**(code **)(*local_b0 + 0x40))(local_b0,local_60);
                      plVar12 = plVar11;
                      if (-1 < iVar4) {
                        iVar4 = memcmp(&DAT_14042c320,local_60,0x10);
                        if (iVar4 == 0) {
                          iVar4 = MFCreateAudioRendererActivate(&local_b8);
                        }
                        else {
                          iVar4 = memcmp(&DAT_14042c330,local_60,0x10);
                          if (iVar4 != 0) {
                            iVar4 = -0x7fffbffb;
                            goto LAB_140122e7e;
                          }
                          iVar4 = MFCreateVideoRendererActivate(local_78,&local_b8);
                        }
                        plVar3 = local_b8;
                        if (-1 < iVar4) {
                          (**(code **)(*local_b8 + 8))(local_b8);
                          plVar12 = plVar3;
                        }
                      }
                    }
LAB_140122e7e:
                    if (local_b0 != (longlong *)0x0) {
                      (**(code **)(*local_b0 + 0x10))();
                      local_b0 = (longlong *)0x0;
                    }
                    if (local_b8 != (longlong *)0x0) {
                      (**(code **)(*local_b8 + 0x10))();
                      local_b8 = (longlong *)0x0;
                    }
                    plVar11 = local_d8;
                    if (-1 < iVar4) {
                      local_d0 = (longlong *)0x0;
                      iVar4 = MFCreateTopologyNode(1,&local_d0);
                      plVar7 = plVar8;
                      if (-1 < iVar4) {
                        iVar4 = (**(code **)(*local_d0 + 0xd8))(local_d0,&DAT_1404742d8,local_70);
                        plVar7 = plVar6;
                        if (-1 < iVar4) {
                          iVar4 = (**(code **)(*local_d0 + 0xd8))(local_d0,&DAT_1404742c8,local_a0);
                          if (-1 < iVar4) {
                            iVar4 = (**(code **)(*local_d0 + 0xd8))(local_d0,&DAT_1404742b8,plVar11)
                            ;
                            if (-1 < iVar4) {
                              iVar4 = (**(code **)(*plVar13 + 0x110))(plVar13,local_d0);
                              plVar11 = local_d0;
                              if (-1 < iVar4) {
                                (**(code **)(*local_d0 + 8))(local_d0);
                                plVar7 = plVar11;
                              }
                            }
                          }
                        }
                      }
                      if (local_d0 != (longlong *)0x0) {
                        (**(code **)(*local_d0 + 0x10))();
                        local_d0 = (longlong *)0x0;
                      }
                      if (-1 < iVar4) {
                        local_c8 = (longlong *)0x0;
                        iVar4 = MFCreateTopologyNode(0,&local_c8);
                        plVar15 = plVar8;
                        if (-1 < iVar4) {
                          iVar4 = (**(code **)(*local_c8 + 0x108))(local_c8,plVar12);
                          plVar15 = plVar14;
                          if (-1 < iVar4) {
                            iVar4 = (**(code **)(*local_c8 + 0xa8))(local_c8,&DAT_1404742a8,0);
                            if (-1 < iVar4) {
                              iVar4 = (**(code **)(*local_c8 + 0xa8))(local_c8,&DAT_140474298,0);
                              if (-1 < iVar4) {
                                iVar4 = (**(code **)(*plVar13 + 0x110))(plVar13,local_c8);
                                plVar13 = local_c8;
                                if (-1 < iVar4) {
                                  (**(code **)(*local_c8 + 8))(local_c8);
                                  plVar15 = plVar13;
                                }
                              }
                            }
                          }
                        }
                        if (local_c8 != (longlong *)0x0) {
                          (**(code **)(*local_c8 + 0x10))();
                          local_c8 = (longlong *)0x0;
                        }
                        if (-1 < iVar4) {
                          iVar4 = (**(code **)(*plVar7 + 0x140))(plVar7,0,plVar15,0);
                        }
                      }
                    }
                  }
                  if (local_d8 != (longlong *)0x0) {
                    (**(code **)(*local_d8 + 0x10))();
                    local_d8 = (longlong *)0x0;
                  }
                  if (plVar12 != (longlong *)0x0) {
                    (**(code **)(*plVar12 + 0x10))(plVar12);
                  }
                  if (plVar7 != (longlong *)0x0) {
                    (**(code **)(*plVar7 + 0x10))(plVar7);
                  }
                  if (plVar15 != (longlong *)0x0) {
                    (**(code **)(*plVar15 + 0x10))(plVar15);
                  }
                  plVar7 = local_a0;
                  plVar13 = local_68;
                  if (iVar4 < 0) goto LAB_14012308f;
                }
                else {
                  (**(code **)(*plVar7 + 0x120))(plVar7,plVar9);
                }
                uVar10 = (int)plVar9 + 1;
                plVar9 = (longlong *)(ulonglong)uVar10;
              } while (uVar10 < local_res18[0]);
            }
            plVar13 = local_c0;
            (**(code **)(*local_c0 + 8))(local_c0);
          }
        }
LAB_14012308f:
        if (local_c0 != (longlong *)0x0) {
          (**(code **)(*local_c0 + 0x10))();
          local_c0 = (longlong *)0x0;
        }
        if ((-1 < iVar4) &&
           (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x38))
                              (*(longlong **)(param_1 + 0x88),0,plVar13), -1 < iVar4)) {
          *(undefined4 *)(param_1 + 0xb0) = 2;
        }
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
    else {
      PropVariantClear((PROPVARIANT *)local_90);
    }
  }
  if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 0x10))();
  }
  return 0;
}


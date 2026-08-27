// Function: FUN_1400489a0
// Addr: 1400489a0
// Size: 2186 bytes


/* WARNING: Removing unreachable block (ram,0x000140048d8d) */
/* WARNING: Removing unreachable block (ram,0x000140048d97) */
/* WARNING: Removing unreachable block (ram,0x000140048da7) */
/* WARNING: Removing unreachable block (ram,0x000140048dbc) */
/* WARNING: Removing unreachable block (ram,0x000140048dc3) */
/* WARNING: Removing unreachable block (ram,0x000140048dc8) */

bool FUN_1400489a0(undefined8 param_1,undefined8 param_2)

{
  size_t _Size;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *_Buf1;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *_Buf2;
  ulonglong uVar13;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined8 local_58;
  ulonglong local_50;
  longlong local_48 [3];
  ulonglong local_30;
  
  bVar3 = false;
  bVar6 = false;
  lVar8 = FUN_140086de0(param_1,&DAT_140476e68,&DAT_140476e6c);
  lVar9 = FUN_140086de0(param_2,&DAT_140476e68,&DAT_140476e6c);
  if (*(char *)(lVar8 + 8) == '\x04') {
    if (*(char *)(lVar9 + 8) == '\x04') {
      puVar10 = (undefined8 *)FUN_140085cc0(lVar9,local_48);
      bVar3 = true;
      bVar6 = true;
      _Buf1 = (undefined8 *)FUN_140085cc0(lVar8,&local_68);
      _Buf2 = puVar10;
      if (0xf < (ulonglong)puVar10[3]) {
        _Buf2 = (undefined8 *)*puVar10;
      }
      _Size = _Buf1[2];
      if (0xf < (ulonglong)_Buf1[3]) {
        _Buf1 = (undefined8 *)*_Buf1;
      }
      if ((_Size == puVar10[2]) && ((_Size == 0 || (iVar7 = memcmp(_Buf1,_Buf2,_Size), iVar7 == 0)))
         ) goto LAB_140048a59;
    }
    bVar2 = true;
  }
  else {
LAB_140048a59:
    bVar2 = false;
  }
  if (bVar3) {
    if (local_50 < 0x10) {
LAB_140048a9c:
      local_58 = 0;
      local_50 = 0xf;
      local_68 = 0;
      goto LAB_140048aaf;
    }
    lVar9 = CONCAT71(uStack_67,local_68);
    uVar13 = local_50 + 1;
    lVar8 = lVar9;
    if (uVar13 < 0x1000) {
LAB_140048a97:
      thunk_FUN_14028af80(lVar8,uVar13);
      goto LAB_140048a9c;
    }
    lVar8 = *(longlong *)(lVar9 + -8);
    if ((lVar9 - lVar8) - 8U < 0x20) {
      uVar13 = local_50 + 0x28;
      goto LAB_140048a97;
    }
LAB_140049204:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
LAB_14004920b:
    bVar6 = false;
  }
  else {
LAB_140048aaf:
    if ((bVar6) && (0xf < local_30)) {
      uVar13 = local_30 + 1;
      lVar8 = local_48[0];
      if (0xfff < uVar13) {
        lVar8 = *(longlong *)(local_48[0] + -8);
        if (0x1f < (local_48[0] - lVar8) - 8U) goto LAB_140049204;
        uVar13 = local_30 + 0x28;
      }
      thunk_FUN_14028af80(lVar8,uVar13);
    }
    bVar3 = false;
    bVar6 = false;
    if (!bVar2) {
      lVar8 = FUN_140086de0(param_1,"resolution","");
      lVar9 = FUN_140086de0(param_2,"resolution","");
      if (*(char *)(lVar8 + 8) == '\x04') {
        if (*(char *)(lVar9 + 8) == '\x04') {
          uVar11 = FUN_140085cc0(lVar9,local_48);
          bVar3 = true;
          bVar6 = true;
          uVar12 = FUN_140085cc0(lVar8,&local_68);
          cVar4 = FUN_14000d0f0(uVar12,uVar11);
          if (cVar4 != '\0') goto LAB_140048b67;
        }
        bVar2 = true;
      }
      else {
LAB_140048b67:
        bVar2 = false;
      }
      if (bVar6) {
        if (0xf < local_50) {
          lVar9 = CONCAT71(uStack_67,local_68);
          uVar13 = local_50 + 1;
          lVar8 = lVar9;
          if (0xfff < uVar13) {
            lVar8 = *(longlong *)(lVar9 + -8);
            if (0x1f < (lVar9 - lVar8) - 8U) goto LAB_140049204;
            uVar13 = local_50 + 0x28;
          }
          thunk_FUN_14028af80(lVar8,uVar13);
        }
        local_58 = 0;
        local_50 = 0xf;
        local_68 = 0;
      }
      if ((bVar3) && (0xf < local_30)) {
        uVar13 = local_30 + 1;
        lVar8 = local_48[0];
        if (0xfff < uVar13) {
          lVar8 = *(longlong *)(local_48[0] + -8);
          if (0x1f < (local_48[0] - lVar8) - 8U) goto LAB_140049204;
          uVar13 = local_30 + 0x28;
        }
        thunk_FUN_14028af80(lVar8,uVar13);
      }
      bVar3 = false;
      bVar6 = false;
      if (!bVar2) {
        lVar8 = FUN_140086de0(param_1,"postprocessing","");
        lVar9 = FUN_140086de0(param_2,"postprocessing","");
        if (*(char *)(lVar8 + 8) == '\x04') {
          if (*(char *)(lVar9 + 8) == '\x04') {
            uVar11 = FUN_140085cc0(lVar9,local_48);
            bVar3 = true;
            bVar6 = true;
            uVar12 = FUN_140085cc0(lVar8,&local_68);
            cVar4 = FUN_14000d0f0(uVar12,uVar11);
            if (cVar4 != '\0') goto LAB_140048c75;
          }
          bVar2 = true;
        }
        else {
LAB_140048c75:
          bVar2 = false;
        }
        if (bVar6) {
          if (0xf < local_50) {
            lVar9 = CONCAT71(uStack_67,local_68);
            uVar13 = local_50 + 1;
            lVar8 = lVar9;
            if (0xfff < uVar13) {
              lVar8 = *(longlong *)(lVar9 + -8);
              if (0x1f < (lVar9 - lVar8) - 8U) goto LAB_140049204;
              uVar13 = local_50 + 0x28;
            }
            thunk_FUN_14028af80(lVar8,uVar13);
          }
          local_58 = 0;
          local_50 = 0xf;
          local_68 = 0;
        }
        if ((bVar3) && (0xf < local_30)) {
          uVar13 = local_30 + 1;
          lVar8 = local_48[0];
          if (0xfff < uVar13) {
            lVar8 = *(longlong *)(local_48[0] + -8);
            if (0x1f < (local_48[0] - lVar8) - 8U) goto LAB_140049204;
            uVar13 = local_30 + 0x28;
          }
          thunk_FUN_14028af80(lVar8,uVar13);
        }
        bVar6 = false;
        if (!bVar2) {
          lVar8 = FUN_140086de0(param_1,"shadows","");
          lVar9 = FUN_140086de0(param_2,"shadows","");
          if (*(char *)(lVar8 + 8) == '\x04') {
            if (*(char *)(lVar9 + 8) == '\x04') {
              uVar11 = FUN_140085cc0(lVar9,local_48);
              bVar6 = true;
              uVar12 = FUN_140085cc0(lVar8,&local_68);
              cVar4 = FUN_14000d0f0(uVar12,uVar11);
              if (cVar4 != '\0') goto LAB_140048d86;
            }
            bVar3 = true;
          }
          else {
LAB_140048d86:
            bVar3 = false;
          }
          if ((bVar6) && (0xf < local_30)) {
            uVar13 = local_30 + 1;
            lVar8 = local_48[0];
            if (0xfff < uVar13) {
              lVar8 = *(longlong *)(local_48[0] + -8);
              if (0x1f < (local_48[0] - lVar8) - 8U) goto LAB_140049204;
              uVar13 = local_30 + 0x28;
            }
            thunk_FUN_14028af80(lVar8,uVar13);
          }
          bVar2 = false;
          bVar6 = false;
          if (!bVar3) {
            lVar8 = FUN_140086de0(param_1,"volumetrics","");
            lVar9 = FUN_140086de0(param_2,"volumetrics","");
            if (*(char *)(lVar8 + 8) == '\x04') {
              if (*(char *)(lVar9 + 8) == '\x04') {
                uVar11 = FUN_140085cc0(lVar9,local_48);
                bVar2 = true;
                bVar6 = true;
                uVar12 = FUN_140085cc0(lVar8,&local_68);
                cVar4 = FUN_14000d0f0(uVar12,uVar11);
                if (cVar4 != '\0') goto LAB_140048e97;
              }
              bVar3 = true;
            }
            else {
LAB_140048e97:
              bVar3 = false;
            }
            if (bVar6) {
              if (0xf < local_50) {
                lVar9 = CONCAT71(uStack_67,local_68);
                uVar13 = local_50 + 1;
                lVar8 = lVar9;
                if (0xfff < uVar13) {
                  lVar8 = *(longlong *)(lVar9 + -8);
                  if (0x1f < (lVar9 - lVar8) - 8U) goto LAB_140049204;
                  uVar13 = local_50 + 0x28;
                }
                thunk_FUN_14028af80(lVar8,uVar13);
              }
              local_58 = 0;
              local_50 = 0xf;
              local_68 = 0;
            }
            if ((bVar2) && (0xf < local_30)) {
              uVar13 = local_30 + 1;
              lVar8 = local_48[0];
              if (0xfff < uVar13) {
                lVar8 = *(longlong *)(local_48[0] + -8);
                if (0x1f < (local_48[0] - lVar8) - 8U) goto LAB_140049204;
                uVar13 = local_30 + 0x28;
              }
              thunk_FUN_14028af80(lVar8,uVar13);
            }
            bVar2 = false;
            bVar6 = false;
            if (!bVar3) {
              lVar8 = FUN_140086de0(param_1,"videoframework","");
              lVar9 = FUN_140086de0(param_2,"videoframework","");
              if (*(char *)(lVar8 + 8) == '\x04') {
                if (*(char *)(lVar9 + 8) == '\x04') {
                  uVar11 = FUN_140085cc0(lVar9,local_48);
                  bVar2 = true;
                  bVar6 = true;
                  uVar12 = FUN_140085cc0(lVar8,&local_68);
                  cVar4 = FUN_14000d0f0(uVar12,uVar11);
                  if (cVar4 != '\0') goto LAB_140048faa;
                }
                bVar3 = true;
              }
              else {
LAB_140048faa:
                bVar3 = false;
              }
              if (bVar6) {
                if (0xf < local_50) {
                  lVar9 = CONCAT71(uStack_67,local_68);
                  uVar13 = local_50 + 1;
                  lVar8 = lVar9;
                  if (0xfff < uVar13) {
                    lVar8 = *(longlong *)(lVar9 + -8);
                    if (0x1f < (lVar9 - lVar8) - 8U) goto LAB_140049204;
                    uVar13 = local_50 + 0x28;
                  }
                  thunk_FUN_14028af80(lVar8,uVar13);
                }
                local_58 = 0;
                local_50 = 0xf;
                local_68 = 0;
              }
              if ((bVar2) && (0xf < local_30)) {
                uVar13 = local_30 + 1;
                lVar8 = local_48[0];
                if (0xfff < uVar13) {
                  lVar8 = *(longlong *)(local_48[0] + -8);
                  if (0x1f < (local_48[0] - lVar8) - 8U) goto LAB_140049204;
                  uVar13 = local_30 + 0x28;
                }
                thunk_FUN_14028af80(lVar8,uVar13);
              }
              bVar2 = false;
              bVar6 = false;
              if (!bVar3) {
                lVar8 = FUN_140086de0(param_1,"webmframework","");
                lVar9 = FUN_140086de0(param_2,"webmframework","");
                if (*(char *)(lVar8 + 8) == '\x04') {
                  if (*(char *)(lVar9 + 8) == '\x04') {
                    uVar11 = FUN_140085cc0(lVar9,local_48);
                    bVar2 = true;
                    bVar6 = true;
                    uVar12 = FUN_140085cc0(lVar8,&local_68);
                    cVar4 = FUN_14000d0f0(uVar12,uVar11);
                    if (cVar4 != '\0') goto LAB_1400490bd;
                  }
                  bVar3 = true;
                }
                else {
LAB_1400490bd:
                  bVar3 = false;
                }
                if (bVar2) {
                  if (0xf < local_50) {
                    lVar9 = CONCAT71(uStack_67,local_68);
                    uVar13 = local_50 + 1;
                    lVar8 = lVar9;
                    if (0xfff < uVar13) {
                      lVar8 = *(longlong *)(lVar9 + -8);
                      if (0x1f < (lVar9 - lVar8) - 8U) goto LAB_140049204;
                      uVar13 = local_50 + 0x28;
                    }
                    thunk_FUN_14028af80(lVar8,uVar13);
                  }
                  local_58 = 0;
                  local_50 = 0xf;
                  local_68 = 0;
                }
                if ((bVar6) && (0xf < local_30)) {
                  uVar13 = local_30 + 1;
                  lVar8 = local_48[0];
                  if (0xfff < uVar13) {
                    lVar8 = *(longlong *)(local_48[0] + -8);
                    if (0x1f < (local_48[0] - lVar8) - 8U) goto LAB_140049204;
                    uVar13 = local_30 + 0x28;
                  }
                  thunk_FUN_14028af80(lVar8,uVar13);
                }
                if (!bVar3) {
                  lVar8 = FUN_140086de0(param_1,"overridelockscreen","");
                  lVar9 = FUN_140086de0(param_2,"overridelockscreen","");
                  if (*(char *)(lVar8 + 8) == '\x05') {
                    if (*(char *)(lVar9 + 8) == '\x05') {
                      cVar4 = FUN_140086300(lVar9);
                      cVar5 = FUN_140086300(lVar8);
                      if (cVar5 == cVar4) goto LAB_1400491af;
                    }
                  }
                  else {
LAB_1400491af:
                    lVar8 = FUN_140086de0(param_1,"overridewallpaper","");
                    lVar9 = FUN_140086de0(param_2,"overridewallpaper","");
                    if (*(char *)(lVar8 + 8) != '\x05') goto LAB_14004920b;
                    if (*(char *)(lVar9 + 8) == '\x05') {
                      cVar4 = FUN_140086300(lVar9);
                      cVar5 = FUN_140086300(lVar8);
                      return cVar5 != cVar4;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    bVar6 = true;
  }
  return bVar6;
}


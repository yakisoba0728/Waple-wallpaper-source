// Function: FUN_1400d7b60
// Addr: 1400d7b60
// Size: 1040 bytes


ulonglong FUN_1400d7b60(longlong param_1,uint param_2)

{
  byte *pbVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *****pppppuVar4;
  int iVar5;
  ulonglong in_RAX;
  ulonglong uVar6;
  size_t sVar7;
  char *pcVar8;
  ulonglong uVar9;
  undefined8 ******ppppppuVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 *_Buf2;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  byte bVar17;
  byte local_res18;
  longlong *local_res20;
  undefined8 *****local_178;
  undefined8 uStack_170;
  ulonglong local_168;
  ulonglong local_160;
  char *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  ulonglong local_140;
  undefined1 local_128 [8];
  longlong local_120 [2];
  longlong local_110 [3];
  ulonglong local_f8;
  undefined1 local_e8 [16];
  undefined1 local_d8 [28];
  uint local_bc;
  
  if (DAT_1404e52d0 == (FARPROC)0x0) {
    iVar5 = FUN_140290d80(&DAT_1404df730);
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(5);
    }
    if (DAT_1404df77c == 0x7fffffff) {
      DAT_1404df77c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(6);
    }
    if (DAT_1404e52d0 == (FARPROC)0x0) {
      if ((DAT_1404e52c8 != (HMODULE)0x0) ||
         (DAT_1404e52c8 = (HMODULE)FUN_1400576d0(L"d3dcompiler_47.dll"),
         DAT_1404e52c8 == (HMODULE)0x0)) {
LAB_1400d7c19:
        uVar6 = FUN_140290ea0(&DAT_1404df730);
        return uVar6 & 0xffffffffffffff00;
      }
      DAT_1404e52d0 = GetProcAddress(DAT_1404e52c8,"D3DCompile");
      DAT_1404e52c0 = GetProcAddress(DAT_1404e52c8,"D3DReflect");
      if ((DAT_1404e52d0 == (FARPROC)0x0) || (DAT_1404e52c0 == (FARPROC)0x0)) goto LAB_1400d7c19;
    }
    in_RAX = FUN_140290ea0(&DAT_1404df730);
  }
  lVar2 = *(longlong *)(param_1 + 0x198);
  if (lVar2 != *(longlong *)(param_1 + 0x1a0)) {
    uVar6 = 0;
    local_res20 = (longlong *)0x0;
    in_RAX = (*DAT_1404e52c0)(lVar2,*(longlong *)(param_1 + 0x1a0) - lVar2,&DAT_14042c2a0,
                              &local_res20);
    if (-1 < (int)in_RAX) {
      FUN_1400316b0(local_128);
      uVar13 = uVar6;
      do {
        if (((&DAT_140484a20)[uVar13] & param_2) != 0) {
          local_158 = (char *)0x0;
          uStack_150 = 0;
          local_148 = 0;
          local_140 = 0;
          pcVar8 = (&PTR_s_POSITION_140482af0)[uVar13 * 4];
          sVar7 = strlen(pcVar8);
          FUN_140017480(&local_158,pcVar8,sVar7);
          FUN_140031430(local_128,local_e8,&local_158);
          if (0xf < local_140) {
            uVar11 = local_140 + 1;
            pcVar8 = local_158;
            if (0xfff < uVar11) {
              pcVar8 = *(char **)(local_158 + -8);
              if ((char *)0x1f < local_158 + (-8 - (longlong)pcVar8)) goto LAB_1400d7f49;
              uVar11 = local_140 + 0x28;
            }
            thunk_FUN_14028af80(pcVar8,uVar11);
          }
        }
        uVar15 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar15;
      } while ((int)uVar15 < 0x1a);
      (**(code **)(*local_res20 + 0x18))(local_res20,local_d8);
      bVar17 = 1;
      local_res18 = 1;
      if (local_bc != 0) {
        do {
          (**(code **)(*local_res20 + 0x38))(local_res20,uVar6,&local_158);
          pcVar8 = local_158;
          local_168 = 0;
          local_178 = (undefined8 ******)0x0;
          uStack_170 = 0;
          local_160 = 0;
          sVar7 = strlen(local_158);
          FUN_140017480(&local_178,pcVar8,sVar7);
          lVar2 = local_120[0];
          uVar11 = local_160;
          uVar13 = local_168;
          pppppuVar4 = local_178;
          uVar9 = 0xcbf29ce484222325;
          ppppppuVar10 = &local_178;
          if (0xf < local_160) {
            ppppppuVar10 = (undefined8 ******)local_178;
          }
          uVar12 = 0;
          if (local_168 != 0) {
            do {
              pbVar1 = (byte *)((longlong)ppppppuVar10 + uVar12);
              uVar12 = uVar12 + 1;
              uVar9 = (uVar9 ^ *pbVar1) * 0x100000001b3;
            } while (uVar12 < local_168);
          }
          lVar16 = *(longlong *)(local_110[0] + 8 + (local_f8 & uVar9) * 0x10);
          if (lVar16 != local_120[0]) {
            lVar14 = *(longlong *)(local_110[0] + (local_f8 & uVar9) * 0x10);
            while( true ) {
              _Buf2 = (undefined8 *)(lVar16 + 0x10);
              if (0xf < *(ulonglong *)(lVar16 + 0x28)) {
                _Buf2 = (undefined8 *)*_Buf2;
              }
              ppppppuVar10 = &local_178;
              if (0xf < uVar11) {
                ppppppuVar10 = (undefined8 ******)pppppuVar4;
              }
              if ((uVar13 == *(ulonglong *)(lVar16 + 0x20)) &&
                 ((uVar13 == 0 || (iVar5 = memcmp(ppppppuVar10,_Buf2,uVar13), iVar5 == 0))))
              goto LAB_1400d7e91;
              if (lVar16 == lVar14) break;
              lVar16 = *(longlong *)(lVar16 + 8);
            }
          }
          lVar16 = 0;
LAB_1400d7e91:
          lVar14 = lVar2;
          if (lVar16 != 0) {
            lVar14 = lVar16;
          }
          if (0xf < uVar11) {
            uVar13 = uVar11 + 1;
            ppppppuVar10 = (undefined8 ******)pppppuVar4;
            if (0xfff < uVar13) {
              ppppppuVar10 = (undefined8 ******)pppppuVar4[-1];
              if (0x1f < (ulonglong)((longlong)pppppuVar4 + (-8 - (longlong)ppppppuVar10)))
              goto LAB_1400d7f49;
              uVar13 = uVar11 + 0x28;
            }
            thunk_FUN_14028af80(ppppppuVar10,uVar13);
          }
          bVar17 = 0;
          if (lVar14 != lVar2) {
            bVar17 = local_res18;
          }
          uVar15 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar15;
          local_res18 = bVar17;
        } while (uVar15 < local_bc);
      }
      (**(code **)(*local_res20 + 0x10))();
      FUN_14000d9e0(local_110);
      FUN_140031340(local_120);
      return (ulonglong)bVar17;
    }
  }
  goto LAB_1400d7f50;
LAB_1400d7f49:
  pcVar3 = (code *)swi(0x29);
  in_RAX = (*pcVar3)(5);
LAB_1400d7f50:
  return in_RAX & 0xffffffffffffff00;
}

